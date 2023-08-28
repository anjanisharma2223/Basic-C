#include<stdio.h>
int swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	return 0;
}
int main()
{
	int x,y;
	printf("Enter 2 numbers ");
	scanf("%d %d",&x,&y);
	swap(&x,&y);
	printf("Swapped values are %d  %d",x,y);
	return 0;
}
