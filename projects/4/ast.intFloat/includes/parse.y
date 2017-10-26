%{
#include <iostream>
#include <map>
#include <cmath>
#include "includes/ast.h"

extern int yylex();
void yyerror(const char * msg);
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
%left MULT DIV

%%
lines   : lines expr CR
          { 
            ($2)->eval()->print();
            //freeAST($2);
          }
        | lines IDENT EQ expr CR
          { Node* lhs = new IdentNode($2); 
            $$ = new AssBinaryNode(lhs, $4);
            delete [] $2;
            //freeAST($$);
          }
        | lines CR
        | { ; }
        ;

expr    : expr PLUS expr   { $$ = new AddBinaryNode($1, $3); }
        | expr MINUS expr  { $$ = new SubBinaryNode($1, $3); } 
        | expr MULT expr   { $$ = new MulBinaryNode($1, $3); }  
        | expr DIV expr    { $$ = new DivBinaryNode($1, $3); }
        | INT              { $$ = new IntLiteral($1);        }
        | FLOAT            { $$ = new FloatLiteral($1);      }
        | IDENT            { $$ = new IdentNode($1);         
                             delete [] $1;
                           }
        ;
%%
void yyerror(const char * msg) { std::cout << msg << std::endl; }
