#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of array");
	scanf("%d",&n);
	int A[n];
	int i;
	printf("Enter the values of array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		
	}
	printf("Enter array");
	for(i=0;i<n;i++)
	{
		printf("%d",A[i]);
	}
	return 0;
}
