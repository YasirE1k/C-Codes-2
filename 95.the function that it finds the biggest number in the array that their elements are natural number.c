#include <stdio.h>
#include <stdlib.h>

void thebiggestnumber(int array[],int size){
	int i;
	int bignumber=0;
	for(i=1;i<size;i++){
		if(array[i-1]>array[i] && bignumber<array[i-1]){
		bignumber=array[i-1];
	}
	}
	printf("%d",bignumber);
}
int main() {
	int array[]={58,113,32,25,234,55,1,2,552556,3443,643,44};
	int size= sizeof(array)/sizeof(array[0]);
	printf("size of array: %d\n",size);
	thebiggestnumber(array,size);
	
	return 0;
}
