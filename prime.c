#include<stdio.h>
int prime(int n)
{
	int i;
	int count =1;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count<=2)
	printf("Prime");
	else
	printf("Not Prime");
	
}
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d",prime(a));
	
}
