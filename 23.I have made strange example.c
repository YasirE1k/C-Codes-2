#include <stdio.h>
#include <stdlib.h>

int main() {
	int number1,number2,number3;
	number1=4;
	number2=number1++;   //After I equitted number1 to number2, it increased number1 1
	number3=++number1;   //After it increased number1 1, it equitted to number3
	
	printf("%d %d %d",number1,number2,number3);
	
	return 0;
}
