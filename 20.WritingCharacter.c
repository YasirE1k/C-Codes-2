#include <stdio.h>
#include <stdlib.h>

int main() {
	char character;
	printf("Please enter a character value: ");
	scanf("%c",&character);
	printf("%c",character);
//programmer is saying; we need to write this scanf(" %c"), so with the space before c. 
//more than 1 scanf, it happened problem
	
	return 0;
}
