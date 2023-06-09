#include"header.h"
//loop
/*
1.for(initialization;condition;incre/decre)
2.while
3.do while
i++ -> post incement
++i -->pre increment
*/
void main(){
	static int q;
	int i=10,j=0,k=0,a=10,b=-20,c=10;
	int w;
	int num;
	clrscr();
	for(w=10;w>=1;w--){
		printf("W = %d\n",w);
	}
	printf("\n");
	printf("enter num for table : ");
	scanf("%d",&num);
	for(w =1;w<=10;w++){
		printf("%d x %d = %d\n",num,w,(w*num));
	}
	printf("\n");



	printf("q = %d\n",q); //0
	printf("i = %d\n",i); //10
	printf("j = %d\n",j); //0
	j = i++;
	printf("j = %d\n",j);   //10
	printf("i = %d\n",i);  //11
	k = j++;
	printf("k = %d\n",k); //10
	a += b;  //a = a+b
	printf("a = %d\n",a);
	c =- b;
	printf("c = %d\n",c);
	//i++; //i = i+1
	//printf("i = %d",i);
	getch();
}