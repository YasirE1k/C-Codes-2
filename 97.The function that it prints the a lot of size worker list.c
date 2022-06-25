#include <stdio.h>
#include <stdlib.h>
//The function that it prints the a lot of size worker list
//I have thinked as 3d, so I have thinked some confuse I couldn't this too.

void workerlistfnctn(char workerlist[],int size)
	int i,j;
	for(i=0;i<value1;i++){
		for(j=0;j<value2;j++){
			printf(" Please enter %d. section %d. worker name:",i+1,j+1);
			scanf("%s",&workerlist[i][j]);
		}		
		}
	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
			printf("%d. section %d. worker name: %s\n",i+1,j+1,workerlist[i][j]);
		}
		}
int main() {
	int value1,value2;
	printf("Enter worker list [][] values: ");
	scanf("%d%d",&value1,&value2);
	char workerlist[2][5][20];
	workerlistfnctn(workerlist)
	
	return 0;
}



