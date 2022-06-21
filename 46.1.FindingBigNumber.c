#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float number;
	char continuee;
	float big=0;
	
	do{
		printf("Please enter a number...\n");
		scanf("%f",&number);
		
		if(number>big){
		big=number;
		printf("A new big number %f\n",big);
		}
		else{
			printf("big number didn't change.big number is still %f\n",big);
		}
		printf("Do you want to continue to calculate big number [E/e] ?\n");
		scanf(" %c",&continuee);
		
		}while(continuee =='E' || continuee == 'e');
		printf("Program was resulted achievely... \n");
		
	return 0;
}

/* // similar code
#include <stdio.h>
#include <stdlib.h>

int main() {
	float number=0;
	char choice;
	float bignumber=0;
	do{
		printf("Enter a number:");
		scanf("%f",&number);
	if(number>=bignumber){
	bignumber=number;
	printf("A new big number %.2f\n",bignumber);
	}
	else{
	printf("big number is still %.2f\n",bignumber);
	}
	printf("Press [E/e] to continue\n");
	scanf(" %c",&choice);
	}while(choice=='E' || choice=='e');	
		
	printf("Program was resulted achievely...\n");
		return 0;
}
*/
