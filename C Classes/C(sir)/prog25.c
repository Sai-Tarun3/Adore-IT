//  program to accept a number and print if it is a single digit number or not
#include <stdio.h>
void main()
{
	int x;
	printf("enter a number ");
	scanf("%d",&x);
	if (-9<=x<=9)
		printf("It is a single digit number");
	else
		printf("It is NOT a single digit number");
}

