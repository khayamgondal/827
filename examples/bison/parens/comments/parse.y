%{
#include <iostream>
extern int yylex();
void yyerror(const char * msg) { std::cout << msg << std::endl; }
%}
%token CR
%token LPAR
%token RPAR
%%

lines   : lines expr CR
          { 
            if ($2 == 1 ) std::cout << "accept" << std::endl; 
            else std::cout << "reject" << std::endl;
          }
        | { ; }
        ;

expr    : LPAR expr RPAR expr
           { $$ = 1; }
        |
        ;

