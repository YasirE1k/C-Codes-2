#include <stdio.h>
#include <stdlib.h>

int findingprimenumber(int number){
	int j;
	if(number==2){
		return 1;
	}
	for(j=2;j<number;j++){
		if(number%j==0){
		return 0;
		}
	}
return 1;		
}
int main() {
	int i;
	int enterednumber;
	int counter=0;
	
	printf("until which number do you want to find prime numbers?");
	scanf("%d",&enterednumber);
	
	for(i=2;i<=enterednumber;i++){
		if(findingprimenumber(i)==1){
			printf("%d is prime\n",i);
			counter+=1;
		}
	}
	printf("%d",counter);
	return 0;
}
