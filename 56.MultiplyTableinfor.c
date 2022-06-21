#include <stdio.h>
#include <stdlib.h>

int main() {
	int i=1,multiply;
	
	for(;i<=10;i++){
	printf("1x%d=%d\t",i,multiply=1*i);
	printf("2x%d=%d\t",i,multiply=2*i);
	printf("3x%d=%d\t",i,multiply=3*i);
	printf("4x%d=%d\t",i,multiply=4*i);
	printf("5x%d=%d\t",i,multiply=5*i);
	printf("6x%d=%d\t",i,multiply=6*i);
	printf("7x%d=%d\t",i,multiply=7*i);
	printf("8x%d=%d\t",i,multiply=8*i);
	printf("9x%d=%d\t",i,multiply=9*i);
	printf("10x%d=%d\t",i,multiply=10*i);
	printf("\n");
	}
	
	return 0;
}
