#include <stdio.h>
#include <stdlib.h>

int main() {
	char takeTicket;
	int ticketthatitwilltaken=0;
	int i=100;
	
	for(i;i>0;){
		printf("Do you want to take the ticket?[e]\n");
		scanf(" %c",&takeTicket);
		if(takeTicket=='e'){
			printf("How many ticket do you want to take?");
			scanf("%d",&ticketthatitwilltaken);
			i=i-ticketthatitwilltaken;
			printf("Remained ticket number:%d\n",i);
		}
	}
	
	return 0;
}
