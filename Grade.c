#include<stdio.h>
int main()
{
	int percentage;
	printf("Enter percentage = ");
	scanf("%d",&percentage);
	if (percentage>=85)
	printf("A Grade");
	else
	if (75<=percentage<85)
	printf("B Grade");
	else
	if (percentage<75)
	printf("C Grade");
	return 0;
}
