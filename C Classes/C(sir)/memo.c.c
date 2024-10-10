/* program to accept idno, name, 3 subject marks and calculate total and average marks  */
#include <stdio.h>
void main()
{
	int idno, sub1, sub2, sub3, tot;
	char name[20];
	float avg;	
	
	printf("enter rno and name");
	scanf("%d%s",&idno,name);		// %s type variable should not have & symbol
	printf("enter 3 subject marks ");   
	scanf("%d%d%d",&sub1,&sub2,&sub3);
	
	tot=sub1+sub2+sub3;
	avg=tot/3.0;
	
	printf("\n total marks %d",tot);
	printf("\n average is  %f",avg);
}

/* your task:   Write a program to accept cost and quantity, calculate the amount,
                12.5% discount and net amount   */
   
