#include<stdio.h>
int fact(int n)
{
	int i,f;
	f=1;
	for(i=1;i<=n;i++)
	f=f*i;
	printf("Factorial is %d\n",f);		
	return ;

}
int main()
{
	int a;
	scanf("%d",&a);
	int factorial=fact(a);
	printf("%d",factorial);
}
