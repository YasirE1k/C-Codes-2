#include <stdio.h>
#include <stdlib.h>

int isitbiggerthanzero(int number){
	if(number>0){
		return 0;
	}
	else{
		return 1;
	}
}

int main() {
	
	printf("%d",isitbiggerthanzero(-5));
	
	return 0;
}
