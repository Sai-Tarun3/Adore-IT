// conditional/ternary operators
#include <stdio.h>
void main()
{
	int age1, age2, diff;
	printf("enter age of 2 persons ");
	scanf("%d%d",&age1,&age2);
//	diff=(age1>age2) ? age1-age2 : age2-age1;	
	diff=(age1<age2) ? age2-age1 : age1-age2 ;	
	printf("\n age difference is %d",diff);	
}

