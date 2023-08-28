#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number = ");
	scanf("%d",&n);
	int count = 1;
	for(i=1;i<n;i++)
	{
		if (n%i ==0)
		count++;
	}
	
	if (count>2)
	printf("%d is not prime",n);
	else
	printf("%d is prime",n);
	return 0;
}
