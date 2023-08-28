#include<stdio.h>
int main(){
	int n;
	printf("Enter a number = ");
	scanf("%d",&n);
	int a=n;
	int b,c;
	while(n!=0)
	{
		b = n%10;
		c = c+b*b*b;
		n = n/10;
	}
	if(a==c)
	printf("%d is armstrong",a);
	else
	printf("%d is not armstrong",a);
	return 0;
}
