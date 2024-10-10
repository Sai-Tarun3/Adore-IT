// program to accept values for x and y and print them before and after swapping
#include <stdio.h>
void main()
{
	int x, y, t;
	printf("enter 2 values ");
	scanf("%d %d",&x,&y);
	printf("\n Before swapping x=%d, y=%d",x,y);
/*	t = x;
	x = y;
	y = t;   */
	
	x = x + y;     // swapping without using a 3rd variable
	y = x - y;
	x = x - y;
	printf("\n After swapping x=%d, y=%d",x,y);
}

