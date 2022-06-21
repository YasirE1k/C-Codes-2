
#include <stdio.h>
#include <stdlib.h>
//Loop transformations    //it can say about 10000 people
int main() {
	
	int likenumber;
	int i=1;
	double likepercent;
	for(;i<=5;i++){
	printf("%d. artist like number: ",i);
	scanf("%d",&likenumber);
	likepercent=(double)likenumber/100;
	printf("%d. artist like percent =%0.2lf\n",i,likepercent);
	}
	
	return 0;
}

/*
// while transformation
#include <stdio.h>
#include <stdlib.h>

int main() {
int i=1;
int likenumber;
double likepercent;
while(i<=5){
printf("%d. artist like number: ",i);
scanf("%d",&likenumber);
likepercent=(double)likenumber/100;
printf("%d. artist like percent =%0.2lf\n",i,likepercent);
i++;
}
	return 0;
}
*/
/*
//do while transformation
#include <stdio.h>
#include <stdlib.h>
//Loop transformations    //it can say about 10000 people 
int main() {
	
	int likenumber;
	int i=1;
	double likepercent;
	do{
	printf("%d. artist like number: ",i);
	scanf("%d",&likenumber);
	likepercent=(double)likenumber/100;
	printf("%d. artist like percent =%0.2lf\n",i,likepercent);
	i++;
	}while(i<=5);
	
	return 0;
}
*/


