#include <stdio.h>
#include <stdlib.h>

int findingprimenumber(int number){
int multiplier;	
	for(multiplier=2;multiplier<=number/2;multiplier++){
		if(number%multiplier==0){
			return 0;
		}
	}
if(number==1){
	return 0;
}
return 1;
}
int main() {
	int number,counter=0;
	int i;
	for(i=1;i<=1000;i++){
		if(findingprimenumber(i)==1){
			counter++;
			printf("%d is prime number\n",i);
		}
	}
	printf("There are %d prime number",counter);
	return 0;
}
