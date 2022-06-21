#include <stdio.h>
#include <stdlib.h>

int perfectnumber(int number){

int i,total=0;
for(i=1;i<=number;i++){
	if(number%i==0){
	total=total+i;
	}
	}
	if(total/2==number){
		return 0;
	}

if(number==1){
	return 1;
}
}
int main() {

	int j;
	for(j=1;j<=1000;j++){
	if(perfectnumber(j)==0){
		printf("%d is perfect number\n",j);
	}
	}
	return 0;
}
