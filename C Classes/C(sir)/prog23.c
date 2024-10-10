// accept a number and print if it is even or odd
#include <stdio.h>
void main()
{
	int n, r;
	printf("enter a number ");
	scanf("%d",&n);
	if (n%2==0)
		printf("\n Even number");
    else
		printf("\n Odd number");
		
	if (n%2==1)
		printf("\n Odd number");
    else
		printf("\n Even number");

	if (n%2!=0)
		printf("\n Odd number");
    else
		printf("\n Even number");

	if (!(n%2==0))
		printf("\n Odd number");
    else
		printf("\n Even number");

	r=n%10;
	if (r==1 || r==3 || r==5 || r==7 || r==9)
		printf("\n Odd number");
    else
		printf("\n Even number");
		
	if (r==0 || r==2 || r==4 || r==6 || r==8)
		printf("\n Even number");
    else
		printf("\n Odd number");

}
