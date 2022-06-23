#include <stdio.h>
#include <stdlib.h>

void thebiggestelementinthearray(){
	
	int array[]={98,53,105,31,68};
	int i;
	int thebiggestnumber=0;
	for(i=0;i<=4;i++){
		
		if(array[i]>array[i+1] && array[i]>thebiggestnumber){
			thebiggestnumber=array[i];
		}
	}
	printf("%d",thebiggestnumber);	
}

int main() {
	
	thebiggestelementinthearray();
		
	return 0;
}
