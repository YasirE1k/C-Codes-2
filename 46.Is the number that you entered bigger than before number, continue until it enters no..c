#include <stdio.h>
#include <stdlib.h>

int main() {
	int number,newnumber,oldnumber;
	
	do{
	printf("Enter a number: ");
	scanf("%d",&newnumber);
	
	printf("Is the entered number bigger than before number?\n");
		if(newnumber>oldnumber){
			oldnumber=newnumber;
				printf("Yes\n");
			}	
		else{
			printf("No\n");
		goto exit;
		}
	}while(1);
exit:	
	return 0;
}
