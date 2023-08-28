#include<stdio.h>
main(){
	int a,b,c;
	printf("Enter 3 numbers \n");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && a>c)
	printf("a is greatest");
	else
	
	if (b>a && b>c)	
	printf("b is greatest");
	else
	printf("C is greatest");
	return 0;
	
}
