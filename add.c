#include<stdio.h>
int sum(int a,int b)
{
	return a+b;
}
int main()
{
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	int add=sum(n1,n2);
	printf("%d",add);
	return 0;
}
