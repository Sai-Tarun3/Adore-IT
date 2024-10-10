// accept a number and print if it is positive or negative number or nutral
#include <stdio.h>
void main()
{
	int num;
	printf("enter a number ");
	scanf("%d",&num);
	if (num>0)
		printf("Positive number");
    else if (num==0)
		printf("nutral number");
	else
		printf("Negative number");
}
