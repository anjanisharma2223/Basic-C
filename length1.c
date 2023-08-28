#include<stdio.h>
int main()
{
	char arr[1000];
	int i=0;
	scanf("%s",&arr);
	while(arr[i]!=0)
	{
		i++;
	}
	printf("%d",i);
}

