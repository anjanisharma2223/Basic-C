#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter a number = ");
	scanf("%d",&n);
	for(i=n;i<=n*10;i+=n)
	printf("%d * =%d \n",n,i);
	return 0;
}
