#include <stdio.h>
#include <stdlib.h>

#define saythehour(character) (character=='E' || character=='e') ? __TIME__ :	"User doesn't want to learn the hour"
int main() {
	
		char usercharacter;
		printf("Do you want to learn the hour?\n");
		scanf("%c",&usercharacter);
	
		if(saythehour(usercharacter)){
			printf("%s",saythehour(usercharacter));
		}
		else{
			printf("%s",saythehour(usercharacter));
		}
	return 0;
}
