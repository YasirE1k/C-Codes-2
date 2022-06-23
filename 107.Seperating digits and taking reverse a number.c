#include <stdio.h>
#include <stdlib.h>
//int seperatingtodigits

void seperatingtodigits(int number){

int a;
	int i=1;
	
	do{
	a=number%10;
	number=number/10;
	printf("%d's digit %d\n",i,a);
	i=i*10;
	}while(number>0);
}

//int takingreverse

int takingreverse(int number){

int b;

do{
	b=number%10;
	number=number/10;
	printf("%d",b);
	}while(number>0);
	
}

int main() {
	
	int number;
	printf("Enter a number:");
	scanf("%d",&number);
	
	seperatingtodigits(number);
	takingreverse(number);

	return 0;
}
