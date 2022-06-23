#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j;
	char studentlist[2][5][20];
	
	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
		printf("Enter the name %d. class %d. student:",i+1,j+1);
		scanf("%s",&studentlist[i][j]);
		}
		}
	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
		printf("The name %d. class %d. student:%s\n",i+1,j+1,studentlist[i][j]);
		}
		}
	
	return 0;
}

