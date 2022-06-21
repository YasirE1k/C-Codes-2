#include <stdio.h>
#include <stdlib.h>

#define printt printf //we can change the names of the functions like we wanted
#define scann scanf
int main() {
	int number;
	printf("Enter a number:");
	scann("%d",&number);
	printt("%d\n",number);
	printt("Hello World");
	
	return 0;
}
