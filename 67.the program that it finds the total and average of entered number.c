#include <stdio.h>
#include <stdlib.h>

int main() {
	int wantednumber,thenumberthathewillenter;
	int i=0;
	int total=0;
	int average;
	printf("How many numbers dou you want to enter?:");
	scanf("%d",&wantednumber);
	int mynumberarray[wantednumber+1];
	
	while(i<wantednumber){
	printf("Enter %d. number:",i+1);
	scanf("%d",&thenumberthathewillenter);
	mynumberarray[i]=thenumberthathewillenter;
	total=total+mynumberarray[i];
	i++;
	}
	printf("total:%d\n",total);
	average=total/wantednumber;
	printf("average:%d",average);
	
	return 0;
}
