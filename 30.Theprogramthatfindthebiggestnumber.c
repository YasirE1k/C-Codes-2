#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float number1,number2,number3,big;
	printf("Enter 3 number different from each other: ");
	scanf("%f%f%f",&number1,&number2,&number3);
	
	big=number1;
	if(number2>big)
	{
	big=number2;
	}
	if(number3>big)
	{
	big=number3;	
	}
	printf("big number is %.1f",big);
	
	return 0;
}
