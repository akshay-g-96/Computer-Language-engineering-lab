%{
#include "y.tab.h"
extern int yylval;
%}
%%
[0-9]+ {yylval=atoi(yytext);return NUM;}
[a-z][a-z0-9]* return id;
. return yytext[0];
\n return 0;
%%
