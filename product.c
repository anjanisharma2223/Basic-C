#include<stdio.h>
float product(float a,float b)
{
	return a*b;
}
int main()
{
	float n1,n2;
	scanf("%f%f",&n1,&n2);
	printf("%0.2f",product(n1,n2));
	return 0;
}
