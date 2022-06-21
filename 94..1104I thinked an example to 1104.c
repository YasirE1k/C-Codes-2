#include <stdio.h>
#include <stdlib.h>
enum jobssectors {Programmer=5,IT=5,ConstructionWorker=4,Hacker=5,Mercenary=3,Doctor=2,ConstructionEngineer=4,Marketer=3,Nurse=2};

int main() {
	int i;
	enum jobssectors job;
	job=Programmer;
	
	if(job==5){
		printf("IT sector");
	}
	else if(job==4){
		printf("Construction sector");
	}
	else if(job==3){
		printf("Mercenary sector");
	}
	else if(job==2){
		printf("Sanitary sector");
	}
	
	return 0;
}
