// assignment operators
#include <stdio.h>
void main()
{
	int x=20;
	x-=3;	// x=x-3;
	printf("\n %d",x);	//	17
	
	x=20;
	x+=3;	//	x=x+3;
	printf("\n %d",x);	//	23
	
	x=20;
	x*=3;	//	x=x*3;
	printf("\n %d",x);	//	60
	
	x=20;
	x/=3;	//	x=x/3;
	printf("\n %d",x);	//	6
	
	x=20;
	x%=3;	//	x=x%3;
	printf("\n %d",x);	//	2
}

