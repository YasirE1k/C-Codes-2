#include <stdio.h>
#include <stdlib.h>

void isnumbersingleordouble(int number){

if(number%2==0){
	printf("number is double");
	}else if(number%2==1){
	printf("number is single");
	}
}
int main() {

	isnumbersingleordouble(4);
	
	return 0;
}
