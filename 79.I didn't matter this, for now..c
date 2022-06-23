#include <stdio.h>
#include <stdlib.h>
//return makes functions

//I didn't matter this, for now.
int takedoubleofthenumber(int number){
	printf("%d",number*2);
	return number*2;
}	
int main() {
	
	printf("%d",takedoubleofthenumber(5));
	
	takedoubleofthenumber(5);
	return 0;
}
