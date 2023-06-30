#include"header.h"
struct student{
	int id;
	char name[30];
	float per;
};
void main(){
	struct student s1={1,"c lang",45.5};
	struct student s2={2,"c++ lang",55.5};
	struct student s3;
	clrscr();
	printf("s1 data : id: %d, name : %s, per : %f\n",s1.id,s1.name,s1.per);
	s3.id=3;
	strcpy(s3.name,"java");
	s3.per = 46.6;
	printf("s3 data : id : %d, name : %s, per : %f\n",s3.id,s3.name,s3.per);
	getch();
}