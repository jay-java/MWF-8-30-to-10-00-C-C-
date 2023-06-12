#include"header.h"
void main(){
	int arr[1],size,index;
	clrscr();
	printf("enter size of array : ");
       scanf("%d",&size);
       for(index=0;index<size;index++){
		printf("enter element at arr[%d] : ",index);
		scanf("%d",&arr[index]);
       }
       getch();
}