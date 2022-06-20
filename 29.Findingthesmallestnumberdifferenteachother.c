#include <stdio.h>
#include <stdlib.h>

int main() {
	float number1,number2,number3,small;
	printf("Enter 3 number different each other:");
	scanf("%f%f%f",&number1,&number2,&number3);
	small=number1;
	
	if(number2<small)
	{
	small=number2;
	}
	if(number3<small)
	{
	small=number3;
	}
	printf("small number:%.1f ",small);
	
	return 0;
}
