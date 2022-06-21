#include <stdio.h>
#include <stdlib.h>

char pressfirstletter(char array[]){
	
	return array[0];
}

int main() {
	
	printf("%c",pressfirstletter("Hello World"));
	
	return 0;
}
