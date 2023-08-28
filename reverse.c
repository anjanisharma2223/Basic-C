#include<stdio.h>
int main()
{
	int n;
	printf("Enter size of array ");
	scanf("%d",&n);
	int A[n];
	int i;
	printf("Enter values of array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter array ");
	for(i=(n-1);i>=0;i--)
	{
		printf("%d\t",A[i]);
	}
	
	return 0;
}
