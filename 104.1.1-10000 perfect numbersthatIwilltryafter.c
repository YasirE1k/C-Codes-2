#include <stdio.h>
#include <stdlib.h>

int perfectnumber(int number){
	int total=0;
	int j;
	for(j=1;j<number;j++){
		if(number%j==0){
		total=total+j;
		}
	}
	if(total==number){
		return 1;
	}
return 0;	
}
int main() {
	int i;
	for(i=1;i<=10000;i++){
		if(perfectnumber(i)==1){
			printf("%d is perfect number\n",i);
		}
	}
	return 0;
}
