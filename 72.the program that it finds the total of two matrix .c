#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j,column,line;
	
	printf("Enter line and column number of matrix: ");
	scanf("%d%d",&line,&column);
	
	int matrix[line][column];
	int matrixtotal;
	int matrix1[line][column];
	int matrix2[line][column];

	for(i=0;i<line;i++){
		for(j=0;j<column;j++){
		printf("Enter 1. matrix [%d][%d] values :",i,j);
		scanf("%d",&matrix1[i][j]);
		printf("Enter 2. matrix [%d][%d] values :",i,j);
		scanf("%d",&matrix2[i][j]);
		}
	}
	system("CLS");
	printf("Total of two matrix:\n");
	for(i=0;i<line;i++){
		for(j=0;j<column;j++){
		matrixtotal=matrix1[i][j]+matrix2[i][j];
		printf("%d ",matrixtotal);
		}
	printf("\n");
	
	}
	return 0;
}
