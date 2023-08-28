#include<stdio.h>
int main(){
	int i,n;
	printf("Enter a number = ");
	scanf("%d",&n);
	int cube;
	for(i=1;i<=n;i++)
	cube = i*i*i;
	printf("%d",cube);
	return 0;
}
