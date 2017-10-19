%{
#include "parse.tab.h"
%}
letter      [a-zA-Z]
digit       [0-9]
ident       {letter}({letter}|{digit})*

%%

"="       { return EQ; }
"+"       { return PLUS; }
"-"       { return MINUS; }
"*"       { return MULT; }
"/"       { return DIV; }
{digit}+  { yylval.number = atoi(yytext);
            return NUMBER; 
          }
{ident}   {
            yylval.id = new char[yyleng+1];
            strcpy(yylval.id, yytext);
            return IDENT; 
          }
.         {}
"\n"      { return CR; }
.         {}
%%
int yywrap() { 
<<<<<<< HEAD
               yylex_destroy();
               return 1; 
             }
=======
  yylex_destroy();
  return 1; 
}
>>>>>>> ba05a63eafe7acddbdd7c89054a00a836e1fe87f
