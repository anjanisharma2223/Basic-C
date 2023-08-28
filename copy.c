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
	for(i=0;i<n;i++)
	{
		printf("%d",A[i]);
	}
	int B[i];
	for(i=0;i<n;i++)
	{
		B[i]=A[i];
	}
	printf("Another array ");
	for(i=0;i<n;i++)
	{
		printf("%d",B[i]);
	}
	return 0;
}
