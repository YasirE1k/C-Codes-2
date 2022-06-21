#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j;
	int numbers[11]={1,1,1,1,1,1,1,1,1,1};
	
	for(i=0;i<10;i++){
		for(j=1;j<11;j++){
		if((i+1)%j==0){
			numbers[i]= !numbers[i];
		}
		else{
			numbers[i]=numbers[i];
			}
}
printf("%d",numbers[i]);
}
return 0;
}
