#include<stdio.h>
void printhello(); // Function Declaration
void printhello() // Function Definition
{
	int i;
	for(i=0;i<100;i++)
	{
		printf("Hello");
	}
}
int main()
{
	printhello(); // Function calling
	return 0;
}
