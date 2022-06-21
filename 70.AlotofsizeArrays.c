#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j;
	int alotofsizearray[3][2]={1,2,3,4,5,6};
	int alotofsizearray2[3][2]={{11,12},{13,14},{15,16}};
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d ",alotofsizearray2[i][j]);
		}
		printf("\n");	
		}
	
	return 0;
}
