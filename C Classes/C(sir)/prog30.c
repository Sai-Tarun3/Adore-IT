// ASCII - American Standard Code for Information Interchnage
// These are a set 256 codes numbered from 0 to 255
// Some of them are 0-9 --> 48-57   A-Z --> 65-90    a-z --> 97-122     
// a character value can be compared with a character or with its ASCII code number also
// Ex: if (ch=='y')   can also be written as if (ch==121)
//     if (grade=='A' || grade=='a')   can also be written as    if (grade==65 || grade=='97)

// program to accept ASCII code and print ASCII character
#include <stdio.h>
void main()
{
	int x;
	printf("enter a code no (0 to 255) ");
	scanf("%d",&x);
	printf("%d --> %c",x,x);	
}

//  program to accept ASCII character and print ASCII code
#include <stdio.h>
void main()
{
	char x;
	printf("enter a character ");
	scanf("%c",&x);
	printf("%c --> %d",x,x);
}

