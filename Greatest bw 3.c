#include<stdio.h>
int main(){
	int a,b,c,max;
	printf("Enter 3 numbers = ");
	scanf("%d%d%d",&a,&b,&c);
	max = a>b && a>c ? printf("a"):b>c? printf("b"):printf("c");
}
