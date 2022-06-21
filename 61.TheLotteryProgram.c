#include <stdio.h>
#include <stdlib.h>

int main() {
	int randomnumber;
	int i;
	srand(time(NULL));
	int thelottery[49]={0};
	
	printf("Numbers are started to produce...\n");

	randomnumber= 1+ rand()%49;
	for(i=0;i<6;i++){
		
		while(thelottery[randomnumber-1]==1){
		randomnumber= 1+ rand()%49;
	}
	thelottery[randomnumber-1]=1;
	printf("%d\n",randomnumber);
	}
	printf("Pulling the lottery was completed...");
	
	return 0;
}

