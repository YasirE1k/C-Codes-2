#include <stdio.h>
#include <stdlib.h>
//break and continue can used in while, do while and for loops. break breaks the loop, contine continues to the loop.

int main() {
	int i;
	
	for(i=1;i<=10;i++) {
	printf("I'm writing the numbers %d\n",i);
	break;
	}
	printf("I'm writing something");
	return 0;
}




