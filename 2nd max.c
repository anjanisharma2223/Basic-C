#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 numbers = ");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b&&a<c)||(a<b&&a>c))
	{
		printf("A");
	}
	else if((b>a&&b<c)||(b>c&&b<a))
	{
		printf("B");
	}
	else if((c>a&&c<b)||(c>b&&c<a))
	{
		printf("C");
	}
	return 0;
}
