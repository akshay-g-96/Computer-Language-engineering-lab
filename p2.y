%{
#include<stdio.h>
#include<stdlib.h>
%}
%token NUM
%left '+''-'
%left '*''/'
%left UMINUS
%%
S:E {printf("result is %d\n",$1);};
E:E'+'T {$$=$1+$3;}
|E'-'T {$$=$1-$3;}
|'-'E %prec UMINUS {$$=-$2;}
|'('E')' {$$=$2;}
|T;
T:T'*'F {$$=$1*$3;}
|T'/'F {$$=$1/$3;}
|F;
F:NUM {$$=$1;}


;
%%
int main()
{
	printf("Enter the expression\n");
	yyparse();
	return 0;
}
int yyerror()
{
	printf("Invalid");
	exit(0);
}
