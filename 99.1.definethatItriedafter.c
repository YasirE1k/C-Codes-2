#include <stdio.h>
#include <stdlib.h>

#define isnumbersingleordouble(number) (number%2==0) ? "number is double" : "number is single"
int main() {
	
	int usernumber;
	
	printf("Enter number:");
	scanf("%d",&usernumber);

	printf("%s",isnumbersingleordouble(usernumber));
	
	return 0;
}
