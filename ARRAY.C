#include"header.h"
//array : group of elements of same datatype into single varible
//single dimensional
//multi
void main(){
	int i[]={1,2,3,4,5,6,7,8,9,10};
	int index,size,arr[1];
	clrscr();
	printf("%d\n",i[0]);
	printf("%d\n",i[1]);
	printf("%d\n",i[2]);
	printf("%d\n",i[3]);
	printf("%d\n",i[4]);
	//printf("%d\n",i[5]);
	//printf("%d\n",i[6]);
       for(index=0;index<=9;index++){
		printf("%d\n",i[index]);
       }
       printf("enter size of array : ");
       scanf("%d",&size);
       for(index=0;index<size;index++){
		printf("enter element at arr[%d] : ",index);
		scanf("%d",&arr[index]);
       }
       getch();
}