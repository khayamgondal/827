%{
#include <iostream>
extern int yylex();
void yyerror(const char * msg) { std::cout << msg << std::endl; }
%}
%token X Y Z 

%%
start   : a Z
        | b Z;
        ;
a       : X y;
b       : X y;
y       : Y;
