#include<stdio.h>
int main(){
	int n;
	printf("Enter a number = ");
	scanf("%d",&n);
	int a,b;
	while(n!=0)
	{
		a=n%10;
		b=b*10+a;
		n=n/10; 
	}
	printf("%d",b);
	return 0;
}
