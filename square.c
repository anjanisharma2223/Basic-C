#include<stdio.h>
int square(int n)
{
	printf("Square of %d is %d",n,n*n);
}
int main()
{
	int i;
	scanf("%d",&i);
	printf(square(i));
}
