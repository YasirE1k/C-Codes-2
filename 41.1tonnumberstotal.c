#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int nvalue;
	int i=1;
	int total=0;
	
	printf("Enter n value: ");
	scanf("%d",&nvalue);
	
	while(i<=nvalue){
		total=i+total;
		i++;
	}
	printf("1-%d numbers total=%d",nvalue,total);
	
	return 0;
}
