#include <stdio.h>
#include <stdlib.h>
//break and continue can used in while, do while and for loops. break breaks the loop, contine continues to the loop.
int main() {
	int i;
	
	for(i=1;i<=10;i++){
		if(i%2==0){
		printf("I'm writing the numbers %d\n",i);
		continue;
		}
		printf("xxxxxxxx %d\n",i);
		}
	
	return 0;
}
