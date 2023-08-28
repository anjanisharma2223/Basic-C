#include<stdio.h>
int main()
{
	int n,sum=0;
	
	for(n=1;n<10;n++){
	printf("Enter a number = ");
	scanf("%d",&n);
		if(n==0){
			break;
		}
		
			else
			sum=sum+n;
			printf("%d\n",sum);

	}
	return 0;
}
