%{
#include <iostream>
#include <cstring>
#include "parse.tab.h"
%}

%%

"("       { return '('; }
")"       { return ')'; }
"\n"      { return CR; }
.         { ; }

%%
int yywrap() { 
  yylex_destroy();
  return 1; 
}
