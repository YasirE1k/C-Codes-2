#include <stdio.h>
#include <stdlib.h>

int main() {
	char process;
	printf("Choose a process: \n");
	scanf("%c",&process);
	
	if(process=='1')
	{
	printf("Collection process...");
	}
	else if(process=='2')
	{
	printf("Extraction process...");	
	}
	else if(process=='3') 
	{
	printf("Multiply process...");
	}
	else
	{
	printf("Wrong process");	
	}
	return 0;
}
