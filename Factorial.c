#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number = ");
	scanf("%d",&n);
	int factorial = 1;
	for(i=1;i<=n;i++)
	factorial =factorial * i;
	printf("%d",factorial);
	
	return 0;
}
