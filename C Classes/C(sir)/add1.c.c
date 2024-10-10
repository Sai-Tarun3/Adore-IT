// usage of variables
#include <stdio.h>
void main()
{
	int x, y, sum, diff;
	x=80;
	y=20;
	sum=x+y;		// NOT    x+y=sum;
	diff=x-y;
	printf("%d, %d, %d, %d",x, y, sum, diff);
	printf("\n %d, \n %d, \n %d, \n %d",x, y, sum, diff);   // \n indicates a new line
    printf("\n x value is %d, \n y value is %d, \n total is %d, \n difference is %d",x,y,sum,diff);
	
	printf("\n first value is %d",x);
	printf("\n second value is %d",y);
	printf("\n total is %d",sum);
	printf("\n difference is %d",diff);
}
