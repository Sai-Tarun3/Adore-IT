// example program to accept a single digit number and print it word
#include <stdio.h>
void main()
{
	int x;
	printf("enter a single digit number: "); 
	scanf("%d",&x);
	switch(x)
	{
		case 0 : printf("zero");	break;
		case 1 : printf("one");		break;
		case 2 : printf("two");		break;
		case 3 : printf("three");	break;
		case 4 : printf("four");	break;
		case 5 : printf("five");	break;
		case 6 : printf("six");		break;
		case 7 : printf("seven");	break;
		case 8 : printf("eight");	break;
		case 9 : printf("nine");	break;
		default: printf("invalid input");
	}
}
// program to accept Week day number (1-7) and print the day name (Sun-Sat)
// program to accept month number and print the month name
