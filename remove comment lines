%{
int n=0;
%}
%%
"/*"[a-z \n]+"*/"|"//"[a-z /t]+ {n++;}
%%
int yywrap(void){}
int main(char argc[],char *argv[]){
yyin=fopen(argv[1],"r");
yyout=fopen("sim.txt","w");
yylex();
printf("no of comment line : %d",n);
fclose(yyout);
fclose(yyin);
}
