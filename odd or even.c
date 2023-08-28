#include<stdio.h>
int num(int a)
{
	if (a%2==0)
	printf("Even");
	else
	printf("Odd");
}
int main()
{
	int i;
	scanf("%d",&i);
	printf(num(i));
}
