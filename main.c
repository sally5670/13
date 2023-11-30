#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


struct student {
	int ID;
	char name[10];
	float score;
};

int main (void) {
	struct student s1 = {24, "Kelly", 4.3};
	//다른값 변경
	s1.ID=123456;
	s1.name[0]='c';
	s1.score=0.1;
	
	 
	//출력 
	printf("ID: %i\n",s1.ID);
	printf("name: %s\n",s1.name);
	printf("score: %f\n",s1.score);
	
	
	system("PAUSE");
	return 0;
}
