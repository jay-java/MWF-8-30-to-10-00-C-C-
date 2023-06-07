#include<stdio.h>
#include<conio.h>
//type casting->to convert one datatype to another datatype
//1.implicit->compiler
//2.explicit->by user
void main(){
	int i,j;
	float k;
	float f = 3;
	int a = 12.2;
	clrscr();
	printf("a = %d\n",a);
	printf("f = %f\n",f);
	printf("enter i = ");
	scanf("%d",&i);
	printf("enter j = ");
	scanf("%d",&j);
	k = (float)i/(float)j;
	printf("k = %f",k);
	getch();
}