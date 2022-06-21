#include <stdio.h>
#include <stdlib.h>

//separating digit and taking reverse a number
//int separatingdigit
//int takingreverse

int main() {
	
	int number,a,b;
	int i=1;
	printf("Enter a number:");
	scanf("%d",&number);
	
	do{
	a=number%10;
	number=number/10;
	printf("%d's digit %d\n",i,a);
	i=i*10;
	}while(number>0);
	
	return 0;
}
