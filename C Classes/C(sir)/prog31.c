// accept a character and print if it is uppercase letter or lowercase letter or 
//   digit or special character

#include <stdio.h>
void main()
{
	char ch;
	printf("enter a character ");
	scanf("%c",&ch);
	if (ch>='A' && ch<='Z')			// if (ch>=65 && ch<=90)
		printf("uppercase letter");
	else if (ch>='a' && ch<='z')	// else if (ch>=97 && ch<=122)
		printf("lowercase letter");
	else if (ch>='0' && ch<='9')	// else if (ch>=48 && ch<=57)
		printf("it is a digit");
	else
		printf("special character");
}
