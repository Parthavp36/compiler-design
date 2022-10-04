#include<stdio.h>
int main()
{
	char c='!',c2='^',c3='&',c4='-',c5='+',c6='=',c7='*',c8='/',c9='<',c10='>',s[10];
	//printf("%d,%d,%d,%d,%d,%d,%d,%d,%d",c,c2,c3,c4,c5,c6,c7,c8,c9,c10);
	printf("enter the operator : ");
	scanf("%s",&s);
	if(s[0]==c5)
	printf("addition operator ....");
	else if(s[0]==c6)
	printf("assignment operator........");
	else if(s[0]==c4)
	printf("subtraction operator ....");
	else if(s[0]=='~')
	printf("bitwise not operator....");
	else if(s[0]==c7)
	printf("mulitiplication operator ....");
	else if(s[0]==c8)
	printf("division operator ....");
	else if(s[0]==c9)
	printf("less than operator ....");
	else if(s[0]=='|')
	printf("bitwise OR operator .................");  
	else if(s[0]==c10)
	printf("greater than operator ....");
	else if(s[0]==c2)
	printf("bitwise XOR  than operator ....");
	else if(s[0]==c3)
	printf("bitwise AND operator ....");
	else if(s[0]==c3 && s[1]==c3)
	printf("logical AND  operator ....");
	else if(s[0]=='|' && s[1]=='|')
	printf("logical OR  operator ....");
	else if(s[0]=='!' && s[1]==c6)
	printf("not equal to operator ......");
	else if(s[0]==c10 && s[1]==c6)
	printf("greater than equal to  operator ....");
	else if(s[0]==c9 && s[1]==c6)
	printf("less than or equal to operator.......");
	else if(s[0]==c6 && s[1]==c6)
	printf("comparison operator ...................");	
	else
	printf("\nthis is not a operator ............");
}
