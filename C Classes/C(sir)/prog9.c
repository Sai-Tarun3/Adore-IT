// assignment operator     (=)
//  Rule is   var=value/var/expr
#include <stdio.h>
void main()
{
	int x, y;
	x=10;	// 10=x;  error
	printf("\n %d",x);		//	10
	y=x;	// this will copy the x value to y
	x=y+5;	// the sum of y and 5 is stored to x
	printf("\n %d",x);		//	15
}

