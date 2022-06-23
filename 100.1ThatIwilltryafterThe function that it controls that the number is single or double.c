#include <stdio.h>
#include <stdlib.h>

int isnumbersingleordouble(int number){

if(number%2==0){
	return 1;
	}else if(number%2==1){
	return 0;
	}
}
int main() {
	
	if(isnumbersingleordouble(8)==1){
		printf("number is double");
	}
	else if(isnumbersingleordouble(8)==0){
		printf("number is single");
	}
	
	return 0;
}
