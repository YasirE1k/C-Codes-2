#include <stdio.h>
#include <stdlib.h>

int main() {
	int number,a,c;
	int b=0;
	int x=1;
	int digitstotal=0;
	int digitstotal2=0;

	printf("Please enter the number: ");
	scanf("%d",&number);
	
	do{
	a=number%10;
	x=x*10;
	b=(number%(10*x))/x;
	c=number/x;
	digitstotal=digitstotal+b;
	}while(c<number/x);
	
	digitstotal2=a+b+c;
	printf("%d",digitstotal2=a+b+c);
	
	return 0;
}
