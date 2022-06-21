#include <stdio.h>
#include <stdlib.h>
//I tried something, but it didn't happen. 
int main() {
	int i=0;
	int thenumberthatitwanted=0;
	int totalofthenumbers=0;
	int average=0;
	printf("How many numbers do you want to enter?:");
	scanf("%d",&thenumberthatitwanted);
	
	int mynumberarray[thenumberthatitwanted+1];
	
	while(mynumberarray[i]!='\0'){
	printf("Enter the number:");
	scanf("%d",&mynumberarray[i]);
	totalofthenumbers=mynumberarray[i]+totalofthenumbers;
	i++;
	}
	average=totalofthenumbers/(i+1);
	printf("%d",average);
	
	return 0;
}
