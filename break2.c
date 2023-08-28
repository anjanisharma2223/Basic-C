#include<stdio.h>
int main()
{
	int a,n;
	printf("Enter a number = ");
	scanf("%d",&a);
	n=1000000;
	for(a=1;a<n;a++){
	
		if(a==2){
		break;
	}
	else
	printf("Enter again");
	}
	return 0;
}
