/* program to accept length and breadth of a rectangle and calculate area and perimeter
	area --> l*b    perimeter ---> 2*(l+b)    */
#include <stdio.h>
void main()
{
	float length, breadth, area, perimeter;    // variable declaration
	
	printf("enter length and breadth ");      // accepting input
	scanf("%f%f",&length,&breadth);
	
	area=length*breadth;
	perimeter=2*(length+breadth);
	
	printf("\n area is %.2f",area);
	printf("\n perimeter is %f",perimeter);
}

/* your task:
   Write a program to accept base and height of a triangle and calculate its area    */
   
