#include <stdio.h>
#include <stdlib.h>

int main() {
	int integer=6;
	double fractionalnumberthatplacedbigplace=7.2;
	char character='K';
	char characterarray[13]="Hello worldd";
	float fractionalnumber=9.2;
	//sizeof(int) part is independent than integer for the others too.
	printf("%d placed in RAM %d byte\n",integer,sizeof(int));
	printf("%lf placed in RAM %d byte\n",fractionalnumberthatplacedbigplace,sizeof(double));
	printf("%c placed in RAM %d byte\n",character,sizeof(char));
//	We know that is it placed 13 byte already we don't make with sizeof.
	printf("%f placed in RAM %d byte",fractionalnumber,sizeof(float));
	
	return 0;
}
