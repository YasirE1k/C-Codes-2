#include <stdio.h>
#include <stdlib.h>

int main() {
	int number;
	int i=1;
	int multiply=1;
	printf("Enter the number that you wanted to take factorial:\n");
	scanf("%d",&number);
	
	if(number>0){
	while(i<=number)
	{
	multiply=multiply*i; 
	i++;
	}
	printf("%d",multiply);
	}
	else if(number==0){
	printf("1");	
	}
	else if(number<0){
	printf("Please enter 0 or positive integer...");
	}
	else{
	printf("Please enter the number");
	}
	 
	return 0;
}
