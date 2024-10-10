// bitwise operators
#include <stdio.h>
void main()
{
	int x=10,y=22;
	printf("\n %d",(x&y));		//	2
	printf("\n %d",(x|y));		//	30
	printf("\n %d",(x^y));		//	28
	printf("\n %d",(x<<1));		//	x value that was 10 becomes 20
	printf("\n %d",(x<<3));		//	x value that was 10 becomes 80
	printf("\n %d",(y>>1));		//	y value that was 22 becomes 11
	printf("\n %d",(y>>3));		//	y value that was 22 becomes 2
}
