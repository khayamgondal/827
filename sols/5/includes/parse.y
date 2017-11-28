%{
#include <iostream>
#include <map>
#include <cmath>
#include "includes/ast.h"

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
%left PLUS MINUS
%left MOD
%left MULT DIV
%left LPAR RPAR

%%
lines   : lines expr CR
          { 
            ($2)->eval()->print();
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
	| lines expr MULT EQ expr 
	  { Node* sum = new MulBinaryNode($2, $5);
	    $$ = new AsgBinaryNode($2, sum);
	    //delete[] $2;
	    //delete[] $5;
	    pool.add(sum);
	    pool.add($$);
	  }
	| lines expr DIV EQ expr 
	  { Node* sum = new DivBinaryNode($2, $5);
	    $$ = new AsgBinaryNode($2, sum);
	    //delete[] $2;
	    //delete[] $5;
	    pool.add(sum);
	    pool.add($$);
	  }
	| lines expr MOD EQ expr 
	  { Node* sum = new ModBinaryNode($2, $5);
	    $$ = new AsgBinaryNode($2, sum);
	    //delete[] $2;
	    //delete[] $5;
	    pool.add(sum);
	    pool.add($$);
	  }
	| lines expr DIV DIV EQ expr 
	  { Node* sum = new DivIntBinaryNode($2, $6);
	    $$ = new AsgBinaryNode($2, sum);
	    //delete[] $2;
	    //delete[] $5;
	    pool.add(sum);
	    pool.add($$);
	  }
        | lines CR
        | { ; }
        ;

expr    : expr PLUS expr   { $$ = new AddBinaryNode($1, $3); 
                             pool.add($$);
                           }
        | expr MINUS expr  { $$ = new SubBinaryNode($1, $3); 
                             pool.add($$);
                           } 
        | expr MULT expr   { $$ = new MulBinaryNode($1, $3); 
                             pool.add($$);
                           }  
        | expr DIV expr    { $$ = new DivBinaryNode($1, $3); 
                             pool.add($$);
                           }
	| expr DIV DIV expr{ $$ = new DivIntBinaryNode($1, $4); 
                             pool.add($$); 
                           }
	| expr MOD expr    {  $$ = new ModBinaryNode($1, $3);
                              pool.add($$);
                           }
	| expr MULT MULT expr {$$ = new MulBinaryNode($1, $4, true); 
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
