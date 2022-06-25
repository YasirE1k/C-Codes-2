//Enumeration
//State - Situation (like january,march)


#include <stdio.h>
#include <stdlib.h>
enum months{January=1,March,June,September};
int main() {
	
	printf("%d",January);
	
	return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
enum months{January=1,March=3,June=5,September=7};
int main() {
	
	printf("%d",March);
	
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
enum seasons{Spring,Summer,Autumn,Winter};

int main() {
	enum seasons season;
	season=Autumn;
	
	printf("%d",season);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
enum week{Monday=1,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};

int main() {

printf("%d",Wednesday);

	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
enum week{Monday=1,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};

int main() {
	int i;
	for(i=Monday;i<=Sunday;i++){
		printf("%d ",i);
	}
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
enum months{January=1,March=3,June=5,September=7};
int main() {
	int i;
	for(i=January; i<=September;i++){
		printf("%d ",i);
	}
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#define JanuaryMakro 1
#define SeptemberMakro 9

int main() {
	int i;
	for(i=JanuaryMakro; i<=SeptemberMakro;i++){
		printf("%d ",i);
	}
	
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
enum week{Monday=1,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday};

int main() {

enum week day;
day=Monday;
	printf("%d ",day);
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
enum studentSchoolSaving {Active,Frozen=1,Deleted=1};

int main() {
	
	enum studentSchoolSaving saving;
	saving=Active;
	
	if(saving==0){
		printf("%s\n","Student can enter to the lessons");
	}
	else if(saving==1){
		printf("%s\n","Student can't enter to the lessons");
	}
	
	return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
enum matchResult {Won=0,Losed=1};

int main() {
	
	enum matchResult result;
	result=Won;
	(result==Won) ? printf("Won") : printf("Losed");

	return 0;
}
*/

