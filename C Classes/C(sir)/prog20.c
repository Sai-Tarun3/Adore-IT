// special operators   sizeof
#include <stdio.h>
void main()
{
	int x;
	float y=7.5;
	char z='A', name[20];
	printf("\n %d",sizeof(x));		//	4
	printf("\n %d",sizeof(int));	//	4
	printf("\n %d",sizeof(y));		//	4
	printf("\n %d",sizeof(z));		//	1
	printf("\n %d",sizeof(name));	//	20
	printf("\n %d",sizeof(int[20]));	//	80
	printf("\n %d",sizeof(long double));		//	16
}
/*	Datatype	TurboC++	DevC++
	int			 2			4
	long int 	 4			4
	short int 	 2          4
	unsigned int 2          4
	float		 4			4
	double		 8			8
	long double  10			16
	char 		 1			1        */
