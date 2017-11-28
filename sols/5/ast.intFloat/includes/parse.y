%{
#include <iostream>
#include <map>
#include <cmath>
#include "ast.h"

extern int yylex();
void yyerror(const char * msg);

PoolOfNodes& pool = PoolOfNodes::getInstance();
%}

%union {
  Node* node;
  int intNumber;
  float fltNumber;
  char *id;
}

%token CR EQ
%token<intNumber> INT
%token<fltNumber> FLOAT
%token<id> IDENT
%type<node> lines expr
// 83 tokens, in alphabetical order:
%token AMPEREQUAL AMPERSAND AND AS ASSERT AT BACKQUOTE BAR BREAK CIRCUMFLEX
%token CIRCUMFLEXEQUAL CLASS COLON COMMA CONTINUE DEDENT DEF DEL DOT DOUBLESLASH
%token DOUBLESLASHEQUAL DOUBLESTAR DOUBLESTAREQUAL ELIF ELSE ENDMARKER EQEQUAL
%token EQUAL EXCEPT EXEC FINALLY FOR FROM GLOBAL GREATER GREATEREQUAL GRLT
%token IF IMPORT IN INDENT IS LAMBDA LBRACE LEFTSHIFT LEFTSHIFTEQUAL LESS
%token LESSEQUAL LPAR LSQB MINEQUAL MINUS NAME NEWLINE NOT NOTEQUAL NUMBER
%token OR PASS PERCENT PERCENTEQUAL PLUS PLUSEQUAL PRINT RAISE RBRACE RETURN
%token RIGHTSHIFT RIGHTSHIFTEQUAL RPAR RSQB SEMI SLASH SLASHEQUAL STAR STAREQUAL
%token STRING TILDE TRY VBAREQUAL WHILE WITH YIELD

%%
lines   : lines expr CR
          { 
            ($2)->eval()->print();
          }
	| lines PRINT expr CR
	  {
	    ($3)->eval()->print();
	  }
        | lines IDENT EQ expr CR
          { Node* lhs = new IdentNode($2); 
            $$ = new AsgBinaryNode(lhs, $4);
            pool.add(lhs);
            pool.add($$);
            delete [] $2;
          }
	| lines expr PLUS EQ expr 
	  { Node* sum = new AddBinaryNode($2, $5);
       	    $$ = new AsgBinaryNode($2, sum);
            //delete[] $2;
	    //delete[] $5;
	    pool.add(sum);
            pool.add($$);
          }
	| lines expr MINUS EQ expr 
	  { Node* sum = new SubBinaryNode($2, $5);
	    $$ = new AsgBinaryNode($2, sum);
	    //delete[] $2;
	    //delete[] $5;
	    pool.add(sum);
	    pool.add($$);
	  }
	| lines expr STAR EQUAL expr 
	  { Node* sum = new MulBinaryNode($2, $5);
	    $$ = new AsgBinaryNode($2, sum);
	    //delete[] $2;
	    //delete[] $5;
	    pool.add(sum);
	    pool.add($$);
	  }
	| lines expr SLASH EQ expr 
	  { Node* sum = new DivBinaryNode($2, $5);
	    $$ = new AsgBinaryNode($2, sum);
	    //delete[] $2;
	    //delete[] $5;
	    pool.add(sum);
	    pool.add($$);
	  }
	| lines expr PERCENT EQ expr 
	  { Node* sum = new ModBinaryNode($2, $5);
	    $$ = new AsgBinaryNode($2, sum);
	    //delete[] $2;
	    //delete[] $5;
	    pool.add(sum);
	    pool.add($$);
	  }
	| lines expr DOUBLESLASH EQ expr 
	  { Node* sum = new DivIntBinaryNode($2, $5);
	    $$ = new AsgBinaryNode($2, sum);
	    //delete[] $2;
	    //delete[] $5;
	    pool.add(sum);
	    pool.add($$);
	  }
        | lines CR
        | { ; }
        ;

lines   : lines funcdef CR {}
	;

funcdef : DEF IDENT LPAR RPAR COLON suite {std::cout<<"here"; }
	;

suite   : NEWLINE

expr    : expr PLUS expr   { $$ = new AddBinaryNode($1, $3); 
                             pool.add($$);
                           }
        | expr MINUS expr  { $$ = new SubBinaryNode($1, $3); 
                             pool.add($$);
                           } 
        | expr STAR expr   { $$ = new MulBinaryNode($1, $3); 
                             pool.add($$);
                           }  
        | expr SLASH expr    { $$ = new DivBinaryNode($1, $3); 
                             pool.add($$);
                           }
	| expr DOUBLESLASH expr{ $$ = new DivIntBinaryNode($1, $3); 
                             pool.add($$); 
                           }
	| expr PERCENT expr    {  $$ = new ModBinaryNode($1, $3);
                              pool.add($$);
                           }
	| expr DOUBLESTAREQUAL expr {$$ = new MulBinaryNode($1, $3, true); 
                             	pool.add($$);				
				}
	| MINUS FLOAT	   { $$ = new FloatLiteral(-$2);      
                             pool.add($$);
			     }
	| MINUS INT        { $$ = new IntLiteral(-$2);      
                             pool.add($$);
				}
	| PLUS FLOAT	   { $$ = new FloatLiteral($2);      
                             pool.add($$);
			     }
	| PLUS INT        { $$ = new IntLiteral($2);      
                             pool.add($$);
				}
	| LPAR expr RPAR  { pool.add($$); }

        | INT              { $$ = new IntLiteral($1);        
                             pool.add($$);
                           }
        | FLOAT            { $$ = new FloatLiteral($1);      
                             pool.add($$);
                           }
        | IDENT            { $$ = new IdentNode($1);        
                             delete [] $1;
                             pool.add($$);
                           }
        ;
%%
void yyerror(const char * msg) { std::cout << msg << std::endl; }
