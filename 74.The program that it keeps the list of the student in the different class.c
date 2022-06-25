//Something like 4 different method.

#include <stdio.h>
#include <stdlib.h>
//The program that it keeps the list of the student in the different class
int main() {
	int i,j;
	char studentlist[4][20]={"John","Emily","Alex","Jack"};
	
	for(i=0;i<4;i++){
		printf("%s",studentlist[i]);
	//	printf("\n");
		}
	
	return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
//The program that it keeps the list of the student in the different class
int main() {
	int i,j;
	char studentlist[4][20]={"John","Emily","Jack","Alex"};
	
	for(i=0;i<4;i++){
		for(j=0;j<20;j++){
		if(studentlist[i][j]=='\0'){
		break;
		}
		printf("%c",studentlist[i][j]);
		}
	//	printf("\n");
		}
	
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
//The program that it keeps the list of the student in the different class
int main() {
	int i,j;
	char studentlist[2][5][20];
	
	printf("Enter a student name :");
	scanf("%s",&studentlist[0][0]);
	printf("%s",studentlist[0]);
	
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
//The program that it keeps the list of the student in the different class
int main() {
	int i,j;
	char studentlist[2][5][20];
	
	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
		printf("Enter a student name :");
		scanf("%s",&studentlist[i][j]);
		}
		}
	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
		printf("%s\n",studentlist[i][j]);
		}
		}
	
	return 0;
}
*/


