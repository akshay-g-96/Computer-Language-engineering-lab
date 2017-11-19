%{
#include<stdio.h>
#include<stdlib.h>
%}
%token NUM
%token id
%left '+''-'
%left '*''/'
%left UMINUS
%%
exp:exp'+'exp
|exp'-'exp
|exp'/'exp
|'-'exp %prec UMINUS
|exp'*'exp
|'('exp')'
|NUM
|id
;
%%
int main()
{
printf("enter");
yyparse();
printf("valid");
return 0;
}
int yyerror()

{
	printf("invalid");
	exit(0);
}

