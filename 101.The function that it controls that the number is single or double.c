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
	int number;
	printf("Enter the number that you want to find that the number is single or double:");
	scanf("%d",&number);
	
	if(isnumbersingleordouble(number)==0){
		printf("number is single");
	}else if(isnumbersingleordouble(number)==1){
		printf("number is double");
	}
	return 0;
}
