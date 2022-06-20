#include <stdio.h>
#include <stdlib.h>

int main() {
	int number1,number2,choosing;
	
	printf("1.Collecting \n2.Subtraction \n3.Multiply \n4.Divide \n5.SquareRoot \n6.Power\n");
	printf("Press -1 to exit\n");
menu:	

	printf("Enter the number that you wanted to make process");
	scanf("%d",&choosing);
	if(choosing==-1)
	{
		goto exit;
	}
	switch(choosing){
	
	case 1:printf("Enter two number: ");
		   scanf("%d%d",&number1,&number2);
		   printf("%d\n",number1+number2);      
	break;
	case 2:printf("Enter two number: ");
		   scanf("%d%d",&number1,&number2);
		   printf("%d\n",number1-number2);
	break;		
	case 3:printf("Enter two number: ");
	scanf("%d%d",&number1,&number2);
	printf("%d\n",number1*number2);
	break;	
	case 4:printf("Enter two number: ");
	scanf("%d%d",&number1,&number2);
	printf("%d\n",number1/number2);
	break;	
	case 5:printf("Enter number: ");
		   scanf("%d",&number1);
		   printf("%.1f\n",sqrt((float)number1));
	break;	
	case 6:printf("Enter two number: ");
		   scanf("%d%d",&number1,&number2);
		   printf("%d power %d result %.1f\n",number1,number2,pow((float)number1,(float)number2));	
	break;
}
goto menu;
exit: 
printf("Your calculation finished...");
	return 0;
}
