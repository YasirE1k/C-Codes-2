#include <stdio.h>
#include <stdlib.h>

int main() {
	int number1,number2,choosing;
	
	printf("1.Collecting \n2.Subtraction \n3.Multiply \n4.Divide \n5.SquareRoot \n6.Power\n");
	
	printf("Enter the number that you wanted to make the process");
	scanf("%d",&choosing);
	
	switch(choosing){
	
	case 1:printf("Enter two number: ");
		   scanf("%d%d",&number1,&number2);
		   printf("%d",number1+number2);      
	break;
	case 2:printf("Enter two number: ");
		   scanf("%d%d",&number1,&number2);
		   printf("%d",number1-number2);
	break;		
	case 3:printf("Enter two number: ");
	scanf("%d%d",&number1,&number2);
	printf("%d",number1*number2);
	break;	
	case 4:printf("Enter two number: ");
	scanf("%d%d",&number1,&number2);
	printf("%d",number1/number2);
	break;	
	case 5:printf("Enter number: ");
		   scanf("%d",&number1);
		   printf("%.1f",sqrt((float)number1));
	break;	
	case 6:printf("Enter two number: ");
		   scanf("%d%d",&number1,&number2);
		   printf("%d power %d result %.1f ",number1,number2,pow((float)number1,(float)number2));	
	break;
}
	return 0;
}
