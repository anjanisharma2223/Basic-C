#include<stdio.h>
int main(){
	int n,a;
	printf("Enter a number = ");
	scanf("%d",&n);
	a=n;
	int b,c;
	c=0;
	while(n!=0)
	{
		b=n%10;
		c=c*10+b;
		n=n/10;
	}
	if(a==c)
	printf("%d is panidrome",c);
	else
	printf("Number is not panidrome");
	
	return 0;
}
