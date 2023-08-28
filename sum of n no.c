#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number = ");
	scanf("%d",&n);
	int sum=0;
	do{
		sum = sum +n;
		n--;
	}while(n!=0);
	printf("%d",sum);
	return 0;
}
