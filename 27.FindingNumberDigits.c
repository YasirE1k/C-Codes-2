#include <stdio.h>
#include <stdlib.h>

int main() {
	int a,b,c,d,e,number;
	printf("Enter 5 digits number: ");
	scanf("%d",&number);
	
	a=number/10000;
	b=(number%10000)/1000;
	c=(number%1000)/100;
	d=(number%100)/10;
	e=number%10;
	
	printf("%d     %d     %d     %d     %d",a,b,c,d,e);
	
	return 0;
}
