#include<stdio.h>
int main(){
	int i,n;
	printf("Enter a number = ");
	scanf("%d",&n);
	int sum = 0;
	i = 1;
	while(i<=n)
	{
		sum = sum + i;
		
		i++;
	}
	printf("%d",sum);

	
	
	return 0;
}
