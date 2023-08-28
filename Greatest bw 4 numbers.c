#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter 4 numbers = ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	a>b && a>c && a>d ? printf("A"):b>c && b>c && b>d ? printf("B"): c>d ? printf("C") : printf("D");
	return 0;
}

