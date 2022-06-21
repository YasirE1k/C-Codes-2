#include <stdio.h>
#include <stdlib.h>

int calculatingCelcius(int number){
	
	return((number-32)/1.8);
}
int main() {
	int fahrenheit;
	
	printf("Enter fahrenheit value:");
	scanf("%d",&fahrenheit);
	
	printf("%d",calculatingCelcius(fahrenheit));
	return 0;
}



