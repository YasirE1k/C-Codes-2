#include <stdio.h>
#include <stdlib.h>

int ebob(int number1,int number2){
	
	if(number2!=0){
		return ebob(number2,number1%number2);
	}
	else{
		return number1;
	}
}

int main() {
	printf("5,7 EBOB:%d\n",ebob(5,7));
	printf("15,3 EBOB:%d\n",ebob(15,3));
	printf("6,10 EBOB:%d\n",ebob(6,10));
	printf("9,111 EBOB:%d",ebob(9,111));
	
	return 0;
}
