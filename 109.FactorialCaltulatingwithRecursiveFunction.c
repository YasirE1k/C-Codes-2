#include <stdio.h>
#include <stdlib.h>

int recursivefactorial(int number){
	
	if(number<=1){
		return 1;
	}else{
		return number*recursivefactorial(number-1);
	}
}
int main() {
	int value;
	
	printf("Enter the number that you wanted to take factorial:");
	scanf("%d",&value);
	
	printf("%d",recursivefactorial(value));
	
	return 0;
}
