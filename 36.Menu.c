#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("MENU\tORDER CODE\tPRICE\n");
	printf("Startings\t1\t5.5 Dollar\n"); 	
	printf("Intermediate meals\t2\t7.5 Dollar\n");
	printf("Salads\t3\t13Dollar\n");
	printf("Main meals\t4\t17.75 Dollar\n");
	printf("Desserts\t5\t11.25 Dollar\n");
	printf("Drinks\t6\t2.25 Dollar\n");
	printf("Press -1 to exit from the menu\n");
	int choosing;
	float totalprice=0.0;
	float portion;
menu:	
	printf("Enter the number that you wanted to take: ");
	scanf("%d",&choosing);
	
	if(choosing==-1)
	{
	goto exit;
	}
	if(choosing>0 && choosing<7)
	{
	printf("Please enter that how much portion you want: ");
	scanf("%f",&portion);
	}
	switch(choosing){
	case 1: if(portion>0){
			totalprice+=5.5*portion;
			}
			else{ 
			printf("Please want a portion bigger than 0\n");
			}
	break;	
	case 2: if(portion>0){
			totalprice+=7.5*portion;
			}
			else{
			printf("Please want a portion bigger than 0\n");	
			}
	break;
	case 3: if(portion>0){
			totalprice+=13*portion;
			}
			else{
			printf("Please want a portion bigger than 0\n");
			}
	break;
	case 4: if(portion>0){
			totalprice+=17.75*portion;
			}
			else{
			printf("Please want a portion bigger than 0\n");
			}
	break;
	case 5: if(portion>0){
			totalprice+=11.25*portion;
			}
			else{
			printf("Please want a portion bigger than 0\n");
			}
	break;
	case 6: if(portion>0){
			totalprice+=2.25*portion;
			}
			else{
			printf("Please want a portion bigger than 0\n");
			}
	break;
	default: printf("Please enter a number 1-6\n");
	break;
}
if(choosing>=1 && choosing<=6 && portion>0){
printf("Total price: %.2f\n",totalprice);
}
goto menu;
exit: printf("You exited from the menu");
	return 0;
}
