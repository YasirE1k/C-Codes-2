#include <stdio.h>
#include <stdlib.h>
//This didn't happen recursive completely but it happened nice, I will try recursive situation in 111 
int recursiveebob(int number1,int number2){
	
	int i=1;
	int ebob;
	while(i<=number2 && i<=number1){
			if(number1%i==0 && number2%i==0){
			ebob=i;
			}
			i++;
		}
	return ebob;
	}

int main() {
	int number1,number2;
	printf("Enter the first and second number that you want to take ebob.:");
	scanf("%d%d",&number1,&number2);
	
	printf("%d",recursiveebob(number1,number2));
	return 0;
}
