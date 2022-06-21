#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int randomnumber;
	srand(time(NULL));
	randomnumber= rand() %100;
	printf("%d",randomnumber);
	
	return 0;
}
