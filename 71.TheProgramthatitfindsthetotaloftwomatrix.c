#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j;
	int matrix1[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int matrix2[3][4]={{13,14,15,16},{17,18,19,20},{21,22,23,24}};
	int matrixtotal;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
		matrixtotal=matrix1[i][j]+matrix2[i][j];
		printf("%d ",matrixtotal);
		}
	printf("\n");
	
	}
	return 0;
}
