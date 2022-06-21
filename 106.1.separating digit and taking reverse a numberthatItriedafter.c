#include <stdio.h>
#include <stdlib.h>

void reverseofthenumber(int number){
	int i=1;
	int numberone;
	int a,b;
	numberone=number;
	do{
	a=numberone%10;
	numberone=numberone/10;
	printf("%d's digit %d\n",i,a);
	i=i*10;
	}while(numberone>0);
	
	do{
	a=number%10;
	number=number/10;
	printf("%d",a);
	i=i*10;
	}while(number>0);
	
}
int main() {
	
	int enterednumber,a,b;
	printf("Enter a number:");
	scanf("%d",&enterednumber);
	
	return 0;
}
