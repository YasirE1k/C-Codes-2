#include <stdio.h>
#include <stdlib.h>

int main() {
//it prints this without the problem	
	float x = 5.6;
	printf("%f",x);
//If we enter 5.6 from the console
float number;
printf("Enter the number:");
scanf("%f",&number);	
printf("%f",number);
	
	return 0;
}
