#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char CharacterArray[13]="Hello worldd\n";
	char CharacterArrayExample[12]={'H','e','l','l','o',' ','w','o','r','l','d','d'}; //We can create character array this too. We should write 13 here too. because to say finished to ram. but it didn't happen any problem again
	
	printf("%s",CharacterArray);
	printf("%s",CharacterArrayExample);
	
	return 0;
}
