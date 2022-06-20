#include <stdio.h>
#include <stdlib.h>
//the value of in while,excluding 0 , like it writes true... if I write like -5, it's true. 
int main() {
	int i=0;
	while(-5){
		printf("%d We started to while loop.\n",i+1);
	i++;	
	}
	
	return 0;
}
