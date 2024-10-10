// working with character conditions
#include <stdio.h>
void main()
{
	char gender;
	printf("\n enter gender (M/F): ");
	scanf("%c",&gender);
	if (gender=='M' || gender=='m')
		printf("Male");
	else if (gender==70 || gender==102)    //if (gender=='F' || gender=='f')
		printf("Female");
	else
		printf("Invalid input...type the value as M or F")	;
}
// 1) accept a character and print if it is a vowel or not
// 2) accept thre grade (A/B/C/D) and print the remarks. output should be :
//	  A --> Very good		B --> Can do better    C --> Wrok hard     D --> Poor

//	ASCII	American Standard Code for Information Interchange
//	ANSI  	American National Standard Institute
