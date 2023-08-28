#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number = ");
	scanf("%d",&n);
	n%5==0 && n%11==0?printf("%d",n):printf("Number is incorrect");
	return 0;
}
