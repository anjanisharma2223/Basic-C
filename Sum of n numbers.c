#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number = ");
	scanf("%d",&n);
	int sum = (n*(n+1))/2;
	printf("Sum of n numbers = %d", sum);
	return 0;
}
