// example program to display a list of items (in a hotel) and allow user to choose any one
// accept qty and print the bill amount
#include <stdio.h>
void main()
{
	int ch, rate, qty, amt;
	printf("\n 1 Tea  \n 2 Coffee \n 3 Milk"); 
	printf("\n Enter your choice (1-3): ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1 : rate=10;	break;
		case 2 : rate=15;	break;
		case 3 : rate=20;	break;
		default: rate=qty=0; printf("invalid choice ");
	}
	if (ch>=1 && ch<=3)
	{
		printf("enter qty ");
		scanf("%d",&qty);
	}
	amt=rate*qty;
	printf("\n Price is %d",rate);
	printf("\n amount is %d",amt);
}

