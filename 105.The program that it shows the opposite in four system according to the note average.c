#include <stdio.h>
#include <stdlib.h>

int oppositeinfour(int number){
	if(number>90){
	return 4;
	}
	else if(number>80){
	return 3;
	}
	else if(number>70){
	return 2;
	}
	else if(number>60){
	return 1;
	}
	else if(number<60){
	return 0;
	}
}
int main() {
	int i;
	int average;
	for(i=1;i<6;i++){
	printf("Enter %d. student note average:",i);
	scanf("%d",&average);	
	printf("%d\n",oppositeinfour(average));	
	}
	
	return 0;
}
