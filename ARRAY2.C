#include"header.h"
void main(){
	int a[5],index,sum=0,num,counter=0;
	clrscr();
	for(index=0;index<5;index++){
		printf("enter element at a[%d] : ",index);
		scanf("%d",&a[index]);
	}
	for(index=0;index<5;index++){
		sum = sum + a[index];
	}
	printf("addition of elemeents is : %d\n",sum);
	printf("enter number to search in array : ");
	scanf("%d",&num);
	for(index=0;index<5;index++){
		if(num == a[index]){
			counter++;
		}
	}
	if(counter>0){
		printf("%d is exist %d times",num,counter);
	}
	else{
		printf("not exist");

	}

	getch();
}