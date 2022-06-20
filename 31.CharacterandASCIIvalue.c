#include <stdio.h>
#include <stdlib.h>

int main() {
	char character;
	
	printf("Enter a character: ");
	scanf("%c",&character);
	
	printf("Character that you entered %c and ASCII value %d",character,character);
	
	return 0;
}
