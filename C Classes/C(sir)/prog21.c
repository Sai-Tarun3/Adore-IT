// program to accept the age and print if the person is eligible to vote or not eligible to vote
#include <stdio.h>
void main()
{
	int age;
	printf("enter age of the person ");
	scanf("%d",&age);
	if (age>=18)
		printf("Eligible to vote");
    else
		printf("Not Eligible to vote");
}
