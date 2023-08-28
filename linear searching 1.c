#include<stdio.h>
int main()
{
	int n;
	printf("Enter size of arrays ");
	scanf("%d",&n);
	int A[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d",A[i]);
		
	}
	int key;
	printf("Enter key ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(A[i]==key)
		printf("%d",i);
	}
	return 0;
}
