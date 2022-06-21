#include <stdio.h>
#include <stdlib.h>
 
int main() {
	char takeTicket;
	int i=99;
	
	for(i;i>0;i--){
		printf("Do you want to take the ticket?[e]\n");
		scanf(" %c",&takeTicket);
		if(takeTicket=='e'){
			printf("Remained ticket number:%d\n",i);
		}
	}
	
	return 0;
}
