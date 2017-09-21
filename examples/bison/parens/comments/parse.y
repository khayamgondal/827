%{
#include <iostream>
extern int yylex();
void yyerror(const char * msg) { std::cout << msg << std::endl; }
%}
%token CR
%%

lines   : lines expr CR
          { 
            if ($2 == 1 ) std::cout << "accept" << std::endl; 
            else std::cout << "reject" << std::endl;
          }
        | { ; }
        ;

expr    : '(' expr ')' expr
           { $$ = 1; }
        |
        ;

