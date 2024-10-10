// check if the user input character is a vowel or consonent

#include <stdio.h>
void main()
{
	char ch;
	printf("enter a character ");
	scanf("%c",&ch);
    if ((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
		if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
			ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
			printf("It is a vowel");
		else
			printf("It is consonent");
	}
	else
		printf("Input is not an alphabet");
}

