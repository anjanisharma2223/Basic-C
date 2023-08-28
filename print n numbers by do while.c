#include<stdio.h>
int main()
{
	int i,a;
	printf("Enter a number = ");
	scanf("%d",&a);
	i = 1;
	do
	{
		printf("%d\n",i);
		i++;
	}
	while(i<=a);
	return 0;
}
