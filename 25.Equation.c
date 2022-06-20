#include <stdio.h>
#include <stdlib.h>

int main() {
	float a,b,c,x,equation;
	
	printf("Enter a,b,c,x values with the queue : ");
	scanf("%f%f%f%f",&a,&b,&c,&x);
	
	equation=a*x*x+b*x+c;
	printf("Solving of the equation: %f",equation);
	
	return 0;
}
