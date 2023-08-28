#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number = ");
	scanf("%d",&n);
	int a;
	int sum = 0;
	do
	{
		a = n%10;
		sum=sum+a;
		n=n/10;
	}
	while(n!=0);
	printf("%d",sum);
	return 0;
}
