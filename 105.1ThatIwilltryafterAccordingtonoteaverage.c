#include <stdio.h>
#include <stdlib.h>

int accordingtonoteaverage(number){
	
	if(number>90){
		return 1;
	}
	else if(number<90 && number>80){
		return 2;
	}
	else if(number<80 && number>70){
		return 3;
	}
	else if(number<70 && number>60){
		return 4;
	}
	else if(number<60){
		return 5;
	}
	}
int main() {
	int studentnumber;
	int i;
	int noteaverage;
	printf("Enter student number");
	scanf("%d",&studentnumber);
	
	for(i=1;i<=studentnumber;i++){
		printf("Enter %d. student note average",i);
		scanf("%d",&noteaverage);
		if(accordingtonoteaverage(noteaverage)==1){
			printf("%d. student's note 4\n",i);
		}
		else if(accordingtonoteaverage(noteaverage)==2){
			printf("%d. student's note 3\n",i);
		}	
		else if(accordingtonoteaverage(noteaverage)==3){
			printf("%d. student's note 2\n",i);
		}
		else if(accordingtonoteaverage(noteaverage)==4){
			printf("%d. student's note 1\n",i);	
		}	
		else if(accordingtonoteaverage(noteaverage)==5){
			printf("%d. student's note 0\n",i);
		}
	}
	return 0;
}
