#include <stdio.h>
#include <stdlib.h>
void workernamesfunction(char workernames[][30],int size ){
	int i;
	for(i=0;i<size;i++){
	printf("%s\n",workernames[i]);
	}
}

int main() {
	
	char workernames[5][30]={"John","Emily","Alex","Julia","Jack Smith"};
	
	int size=sizeof(workernames)/sizeof(workernames[0]);
	workernamesfunction(workernames,size);
	
	return 0;
}
