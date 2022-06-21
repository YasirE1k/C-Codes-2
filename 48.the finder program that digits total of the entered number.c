#include <stdio.h>
#include <stdlib.h>

int main() {
	int total=0;
	int number;
	int digitnumber=0;
	char continuee='e';
	
	while(continuee=='e'){
	printf("Please enter a positive number: ");
	scanf("%d",&number);
	
	if(number>=0){
	do{
	total=total+number%10;
	digitnumber++;
	number=number/10;
	}while(number>0);
	printf("Digit number of you entered number %d total of digit numbers %d.\n",digitnumber,total);
	digitnumber=0;
	total=0;
	printf("If you want to continue press [e] \n");
	scanf(" %c",&continuee);
	}
	else{
		printf("Please enter a positive value...\n");
	}
	}
	return 0;
}
