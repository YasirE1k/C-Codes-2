#include <stdio.h>
#include <stdlib.h>

int main() {
int edgecube;

printf("Enter an edge of the cube: ");
scanf("%d",&edgecube);

printf("Volume of the cube: %d\n",edgecube*edgecube*edgecube);
printf("Area of the cube: %d",6*edgecube*edgecube);
	
	return 0;
}
