// conditional/ternary operators
#include <stdio.h>
void main()
{
	float avg;
	char grade;
	printf("enter average marks ");
	scanf("%f",&avg);
	
	grade = (avg>=60) ? 'A' :((avg>=50)? 'B' : 'C');	// nested usage
	
	printf("\n Grade is %c",grade);	
}

