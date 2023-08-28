#include<stdio.h>
int main()
{
	int a = 4;
	int *b = &a;
	int **c = &b;
	printf("%d\n",a);
	printf("%p\n",b);
	printf("%p\n",c);
	printf("%p\n",&b);
	printf("%p",&c);
}
