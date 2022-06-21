#include <stdio.h>
#include <stdlib.h>

letsmaketheprocess(int number){
	
	return(number*5-3);
}

int main() {
	int number;
	printf("Enter a number:");
	scanf("%d",&number);
	
	printf("%d",letsmaketheprocess(number));
	
	return 0;
}
