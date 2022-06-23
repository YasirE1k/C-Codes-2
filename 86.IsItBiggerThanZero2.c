#include <stdio.h>
#include <stdlib.h>
//I looked something about return
int isitbiggerthanzero(int number){
	if(number>0){
		return 0;
	}
	else{
		return 1;
	}
}
int main() {
	int number;
	printf("Please enter the number that you want to ask whether positive...\n");
	scanf("%d",&number);
	
	if(isitbiggerthanzero(number)==0){
		printf("%d is positive\n",number);
		printf("%d",isitbiggerthanzero(number));
	}
	if(isitbiggerthanzero(number)==1){
		printf("%d is't positive\n",number);
		printf("%d",isitbiggerthanzero(number));
	}
	
	return 0;
}
