#include<stdio.h>
int main()
{
	int p,ch,b,m,c;
	printf("Enter physics marks = ");
	scanf("%d",&p);
	printf("Enter chemistry marks = ");
	scanf("%d",&ch);
	printf("Enter biology marks = ");
	scanf("%d",&b);
	printf("Enter maths marks = ");
	scanf("%d",&m);
	printf("Enter computer marks = ");
	scanf("%d",&c);
	float sum=p+ch+b+m+c;
	printf("Sum is %f\n",sum);
	
	float avg=sum/500;
	printf("Average is %f\n",avg);
	float perc=avg*100;
	printf("Percentage is %f\n",perc);
	if (perc>=90)
	printf("Grade A");
	else if (perc>=80)
	printf("Grade B");
	else if (perc>=70)
	printf("Grade C");
	else if (perc>=60)
	printf("Grade D");
	else if (perc>=40)
	printf("Grade E");
	else if (perc<40)
	printf("Grade F");
	return 0;
}

