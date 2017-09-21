%{
#include <iostream>
#include <cstring>
#include "parse.tab.h"
%}
%s  COMMENT

%%
"/*"           { BEGIN(COMMENT); }
<COMMENT>"*/"  { BEGIN(INITIAL); }

"("       { return '('; }
")"       { return ')'; }
"\n"      { return CR; }
.         { ; }

%%
int yywrap() { return 1; }
