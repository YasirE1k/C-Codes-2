#include <stdio.h>
#include <stdlib.h>

int totalrecursive(int number){
	
if(number<=1){
	return 1;
}else{
	return number+totalrecursive(number-1);		
}
}
int main() {
	int value;

	printf("Enter the number:");
	scanf("%d",&value);
	printf("%d",totalrecursive(value));	
	
	return 0;
}
