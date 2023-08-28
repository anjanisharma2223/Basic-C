#include<stdio.h>
int main(){
	int i,n;
	printf("Enter a number = ");
	scanf("%d",&n);
	i =1;
	int sum = 0;
	do
	{
		sum = sum+i;
		i++;
	}while(i<=n);
	printf("%d",sum);
	return 0;
}
