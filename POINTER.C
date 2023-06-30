#include"header.h"
//pointer -> pointer stores memnory location of any variable
void main(){
	int i=10,*p,**r;
	float f= 3.14,*q;
	clrscr();
	printf("size of %d\n",sizeof(char));
	p = &i;
	printf("i = %d\n",i);
	printf("address of i = %u\n",&i);
	printf("addrss of i using pointer : %u\n",p);
	printf("value of i using pointer : %d\n",*p);
	*p = 100;
	printf("value of i change by pointer : %d\n",i);
	r = &p;
	printf("address of p  = %u\n",r);
	printf("value of i using r pointer : %d\n",**r);
	printf("f = %f\n",f);
	printf("address of f = %u\n",&f);
	q = &f;
	printf("address of f using pointer = %u\n",q);
	getch();
}