#include"header.h"
void main(){
	int w,i=1,j=1,k=17,num,l=1;
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
	while(i<=10){
		printf("i = %d\n",i);
		i++;
	}
	while(j<=10){
		printf("%d x %d = %d\n",num,j,(j*num));
		j++;
	}
	do{
		printf("k = %d\n",k);
		k++;
	}
	while(k<=15);
	do{
		printf("%d x %d = %d\n",num,l,(l*num));
		l++;

	}
	while(l<=10);

	getch();
}
