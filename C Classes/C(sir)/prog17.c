// increment or decrement operators
#include <stdio.h>
void main()
{
	int x=10;
	printf("\n %d",++x);
	// here as it is a pre increment operator, it first increments the value and then print
	// so output is  11
	x=10;
	printf("\n %d",x++); 
	// here as it is a pre increment operator, it first increments the value and then print
	// so output is 10  (value in the memory will be 11 after printing)
	printf("\n %d",x);
}
