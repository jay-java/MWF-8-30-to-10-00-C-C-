#include"header.h"
struct student{
	int id;
	void setId(){
		printf("enter id : ");
		scanf("%d",&id);
	}
	void getId(){
		if(id>0){
			printf("id : %d",id);
		}
		else{
			printf("id is less than 0");
		}
	}
};
void main(){
	struct student s1;
	clrscr();
	s1.setId();
	s1.getId();
	getch();
}