#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number = ");
	scanf("%d",&n);
	int sum = 0;
	while(n!=0)
	{
	
		sum = sum +n;
		n--;
	}
	printf("%d",sum);
	return 0;
}
