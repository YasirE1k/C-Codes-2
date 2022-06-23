#include <stdio.h>
#include <stdlib.h>

#define didhewin(number) (number==1) ? "won" : "defeat"

int main() {
	int usernumber;
	usernumber=0;
	
	printf("%s",didhewin(usernumber));
	
	return 0;
}
