#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Turkish");
	
	char choosingAccordingtoCharacter;
	printf("Enter character:");
	scanf("%c",&choosingAccordingtoCharacter);

//	printf("%c",choosingAccordingtoCharacter);
//If I enter Turkish character in scanf it happens wrong, for example if I enter � it happens problem.
	switch(choosingAccordingtoCharacter){ 
	case '�': printf("Will be �"); break;
	case 'c': printf("c is happening already"); break;
	}
	
	return 0;
}
