#include<stdio.h>
int swap(int n,int m)
{
	int p=0;
	p=n;
	n=m;
	m=p;
	
	
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",swap(a,b));
	printf("a = %d & b = %d",a,b);
}
