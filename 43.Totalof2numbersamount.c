#include <stdio.h>
#include <stdlib.h>

int main() {
	float number1,number2,termnumber,average,total;
	printf("Enter first and second number:");
	scanf("%f%f",&number1,&number2);
	
	termnumber=abs(number1-number2)+1;
	average=(number1+number2)/2;
	total=termnumber*average-number1-number2;
	
	printf("%f",total);
	
	return 0;
}
