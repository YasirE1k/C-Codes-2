
#include <stdio.h>
#include <stdlib.h>
int main() {

	char password[80];
	char passwordconfirm[80];
	int i;
	int falsee;
	
	while(1){
		falsee=0;
		i=0;
		printf("Enter your password...:\n");
		scanf("%s",&password);
		printf("Enter your password again...:\n");
		scanf("%s",passwordconfirm);
		
		while(!(password[i]=='\0' && passwordconfirm[i]=='\0')){
		if(password[i]!=passwordconfirm[i]){
			printf("You made wrong enter, please enter the same of 1. and 2. password...\n ");
			falsee=1;
			break;
		}else{
			i++;
		}
		}
	
if(falsee==0){
			printf("Passwords equitted too...Saving Completed...\n");
			break;
			}
}
	return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int falsee;
	char password[80];
	char passwordconfirm[80];
	
	while(1){
		falsee=0;
		int i=0;
		printf("Please enter your password: ");
		scanf("%s",&password);
		printf("Please confirm your password: ");
		scanf("%s",&passwordconfirm);
		
		while(!(password[i]=='\0' && passwordconfirm[i]=='\0')){
		if(password[i]!=passwordconfirm[i]){
			falsee=1;
			printf("Your password couldn't confirm, please try again\n");
			break;
		}
		else{
			i++;
		}	
		} 
		if(falsee==0){
		printf("Your password equitting process completed\n");
		break;
		}
	}
	
	return 0;
}
*/



