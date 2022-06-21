
#include <stdio.h>
#include <stdlib.h>
//Fahrenheit calculating I made with void
void calculatingfahrenheit(float celcius){
float fahrenheit;
fahrenheit=(celcius*1.8)+32;
printf("%f",fahrenheit);
}
int main() {
	float fahrenheit;
	float celcius;
	printf("Enter celcius value:");
	scanf("%f",&celcius);
	calculatingfahrenheit(celcius);
	return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
//Celcius calculating I made with return

float calculatingcelcius(float fahrenheit){

return ((fahrenheit-32)/(1.8));
}
int main() {
	
	float fahrenheit;
	printf("Enter fahrenheit value:");
	scanf("%f",&fahrenheit);
	printf("%f",calculatingcelcius(fahrenheit));
	return 0;
}
*/


