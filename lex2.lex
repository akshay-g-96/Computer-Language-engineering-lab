%{
#include<stdio.h>
%}

DIGIT [0-9]+
ID [a-z A-Z _][a-z A-Z 0-9]+
DATATYPE (int|float|double|char)

%%
"//".* printf("comment:%s\n",yytext);
" " printf("space:%s\n",yytext);
"/*"([a-z A-Z 0-9]+|"\t"|"\n") printf("Multiline:%s\n",yytext);
"#".{ID} printf("Preprocessor Directives:%s\n",yytext);
"<".*".h>" printf("Headerfile:%s\n",yytext);
{DIGIT} {printf("Integer:%s\n",yytext);}
{DIGIT}"."{DIGIT} {printf("Float:%s\n",yytext);}
{ID} {printf("Identifier:%s\n",yytext);}
%%

int main()
{
    yylex();
    return 0;
}