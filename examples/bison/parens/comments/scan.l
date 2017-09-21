%{
#include <iostream>
#include <cstring>
#include "parse.tab.h"
%}
%s  COMMENT

%%
"/*"           { BEGIN(COMMENT); }
<COMMENT>"*/"  { BEGIN(INITIAL); }

"("       { return LPAR; }
")"       { return RPAR; }
"\n"      { return CR; }
.         { ; }

%%
int yywrap() { return 1; }
