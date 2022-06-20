#include <stdio.h>
#include <stdlib.h>

int main() {
	char character;
	printf("Enter a character:");
	scanf("%c",&character);
	int ASCIIvalueofthecharacter=character;
	if(ASCIIvalueofthecharacter>=65 && ASCIIvalueofthecharacter<=90)
	{
		printf("character is big letter");
	}
	if(ASCIIvalueofthecharacter>=97 && ASCIIvalueofthecharacter<=122)
	{
		printf("character is small letter");
	}
	
	return 0;
}
