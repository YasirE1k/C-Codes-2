#include <stdio.h>
#include <stdlib.h>

int main() {
	int number1,number2;
	printf("Enter small and big number with queue: ");
	scanf("%d%d",&number1,&number2);
	int i=number1+1;
	int total=0;
	while(i>number1 && i<number2){
	total=total+i;
	i++;
	}
	printf("Amount %d to %d  numbers total :%d ",number1,number2,total);
	
	return 0;
}
