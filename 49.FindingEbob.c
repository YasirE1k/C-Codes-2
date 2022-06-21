#include <stdio.h>
#include <stdlib.h>

int main() {
	int number1,number2,result1,result2;
	
	printf("Please enter 2 number: ");
	scanf("%d%d",&number1,&number2);
	int x=1;
	
	if(number1>number2){
	do{
		if(number1%x==0 && number2%x==0){
			result1=x;
		}
	x++;
}while(x<number1);
	printf("%d\n",result1);
}
	else if(number2>number1){
	do{
		if(number1%x==0 && number2%x==0){
			result2=x;
		}
	x++;
}while(x<number2);
	printf("%d\n",result2);
}
	else{
		printf("%d",number1);
	}
	return 0;
}
