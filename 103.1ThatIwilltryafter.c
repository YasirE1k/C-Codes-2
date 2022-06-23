#include <stdio.h>
#include <stdlib.h>

int findingprimenumber(int number){
	int i,j;
	int prime;
	for(i=3;i<=number;i++){
			for(j=2;j<i;j++){
				if(i%j!=0){
					prime=i;
				}else{
				return(7);
				}
				}
		return(8);
	}
}
int main() {
	int enterednumber;
	printf("until which number do you want to find prime numbers?");
	scanf("%d",&enterednumber);
	
	printf("%d",findingprimenumber(enterednumber));
	
	return 0;
}
