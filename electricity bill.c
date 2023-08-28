#include<stdio.h>
int main(){
	int e;
	printf("Enter electricity unit charges = ");
	scanf("%d",&e);
	if (e<=50)
	printf("%f",0.50*e);
	else if (e<=150)
	printf("%f",25+(e-50)*0.75);
	else if (e<=250)
	printf("%f",100+(e-150)*1.20);
	else if (e>250)
	printf("%f",220+(e-250)*1.50);
	else
	printf("You entered wrong electricity unit charges ");
	return 0;
}
