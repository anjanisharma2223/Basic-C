#include<stdio.h>
int num(int a)
{	
	int i;
	for(i =1;i<=10;i++)
	printf("%d * %d = %d\n",a,i,a*i);
}
int main()
{
	int a;
	scanf("%d",&a);
	printf(num(a));
}
