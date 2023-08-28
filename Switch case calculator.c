#include<stdio.h>
int main()
{
	int a,b;
	char op;
	printf("Enter an operator = ");
	scanf("%c",&op);
	printf("Enter 2 numbers = ");
	scanf("%d%d",&a,&b);
	
	switch(op)
	{
	
		case '+': printf("%d",a+b);
			break;
		case '-': printf("%d",a-b);
			break;
		case '*': printf("%d",a*b);
			break;
		case '/': printf("%d",a/b);
			break;
		case '%': printf("%d",a%b);
			break;
		default: printf("Enter correct opeerator");
	}
	return 0;
}
