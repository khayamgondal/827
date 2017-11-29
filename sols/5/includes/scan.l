%{
#include "includes/ast.h"
#include "parse.tab.h"


#define MAXINDENT 100   /* Max indentation level */
struct tok_state {
    int indent;                 /* Current indentation index */
    int indstack[MAXINDENT];    /* Stack of indents */
    int atbol;                  /* Nonzero if at begin of new line */
    int pendin;                 /* Pending indents (if > 0) or dedents (if < 0) */
    int level;                  /* () [] {} Parentheses nesting level */
    /* These next state variables are not in the CPython tokeniser state */
    bool cont_line;             /* are we in a continuation line? */
    bool seen_endmarker;        /* Have we sent the ENDMARKER token yet? */
    int pending_token;          /* One token can be queued while processing indent/dedent */
    bool print_name_hack;       /* Treat print as a 3.x name? (o/w it is a keyword) */
    int long_string_start_line; /* Starting line for a multi-line string */
    int long_string_start_col ; /* Starting column for a multi-line string */
};

static struct tok_state *tok = NULL;

%}
letter      [a-zA-Z]
digit       [0-9]
digits      [0-9]+
float       {digits}"."{digits}
ident       {letter}({letter}|{digit})*

%%

"="       { return EQ;    }
"+"       { return PLUS;  }
"-"       { return MINUS; }
"*"       { return MULT;  }
"/"       { return DIV;   }
"%"       { return MOD;   }
"("	  { return LPAR;  }
")"       { return RPAR;  }
"def"	  { return DEF;   }
":"       { return COLON; }

{digits}  { 
            yylval.intNumber = atoi(yytext);
            return INT; 
          }
{float}   { 
            yylval.fltNumber = atof(yytext);
            return FLOAT; 
          }
{ident}   {
            yylval.id = new char[yyleng+1];
            strcpy(yylval.id, yytext);
            return IDENT; 
          }
"\n"      { return CR;    }
.         {}
%%
int yywrap() { 
  yylex_destroy();
  return 1; 
}
