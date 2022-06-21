#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int alotofsizearray[2][2][2];
	int i,j,k;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				printf("Enter %d. %d. %d. element...",i+1,j+1,k+1);
				scanf("%d",&alotofsizearray[i][j][k]);
			}
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			for(k=0;k<2;k++){
				printf("%d ",alotofsizearray[i][j][k]);
			}
		printf("\n");
		}
		printf("\n");	
	}
	
	return 0;
}
