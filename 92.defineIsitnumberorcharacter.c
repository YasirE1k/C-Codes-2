#include <stdio.h>
#include <stdlib.h>
#define isitnumberorcharacter(character) (character=='k') ? character : 5
int main() {
	
	char character='k';
	if(isitnumberorcharacter(character)){
		printf("%c",isitnumberorcharacter(character));
	}
	else{
		printf("%d",isitnumberorcharacter(character));
	}
	
	return 0;
}
