#include<stdio.h>
int main()
{
	int n;
	int A[7]={1,2,3,4,5,6,7};
	int i;
	int key=5;
	for(i=0;i<7;i++)
	{
		if(A[i]==key)
		printf("Value found at index %d",i);
	}
	return 0;
}
