#include <stdio.h>
#include <stdlib.h>

int main() {
	
// int -> float -> double	
	
	int x=30;
	float y=30;
	double z=30;
	//According to the important queue from x,y,z, we are writing one of them %f %d %lf
	
	printf("int/float %f\n",x/y);
	printf("int/double %lf\n",x/z);
	printf("float/double %lf\n",y/z);
	
	return 0;
}
