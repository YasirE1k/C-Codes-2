#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char password1[3];
	char password2[3]; //whyyyyyy
	do{
	printf("Please enter a password:\n");
	scanf("%s",password1);
	
	printf("Please confirm your password:\n");
	scanf("%s",password2);
	
	}while(password1 == password2);
	
	printf("Confirm process was completed");
	printf("%s",password1);
	printf("%s",password2);
	
	return 0;
}

