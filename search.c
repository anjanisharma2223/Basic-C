#include<stdio.h>
int main()
{
	int n;
	printf("Enter size of array ");
	scanf("%d",&n);
	int A[n];
	printf("Enter values of array ");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter array ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}
	int k;
	printf("Enter key ");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
	
		if(k == A[i])
		{
			printf("%d",i);
		}
	}
	return 0;
}
