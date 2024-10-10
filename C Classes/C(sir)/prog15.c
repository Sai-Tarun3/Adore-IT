// conditional/ternary operators
#include <stdio.h>
void main()
{
	float sub1,sub2,sub3;
	char result;
	printf("enter 3 subject marks ");
	scanf("%f%f%f",&sub1,&sub2,&sub3);
	
//	result = (marks>=50) ? 'P' : 'F';	// nested usage
	result = (sub1>=40 && sub2>=40 && sub3>=40)?'P':'F';
	printf("\n Result is %c",result);	
	
	printf("\n %s",(sub1>=40 && sub2>=40 && sub3>=40)? "PASS" : "FAIL");
	(sub1>=40 && sub2>=40 && sub3>=40)? printf("PASS") : printf("FAIL");
}
// Your task:
// print the rate as 40 or 35 or 30 based on quality code 1 or 2 or 3
// write the same in a single printf()


