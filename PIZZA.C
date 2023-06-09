#include<stdio.h>
#include<conio.h>
void main(){
	//arithmetic operator->+,-,/,*,%
	//logiacal operator->&& || !
	//conditional -> >,<,>=,<=,!= , ==
	int size,qty;
	clrscr();
	printf("enter your choice : 1.small 2.medium 3.large 4.monster\n");
	printf("enter size = ");
	scanf("%d",&size);
	printf("enter number of pizzas");
	scanf("%d",&qty);
	if(size == 1){
		printf("small");
		if(qty == 4){
			printf("500 coke");
		}
		else{
			printf("offer only on 4 pizza");
		}
	}
	else if(size == 2){
		printf("medium");
		if(qty == 3){
			printf("ice cream");
		}
		else{
			printf("offer onlyu on 3 pizza");
		}
	}
	else if(size == 3){
		printf("large");
		if(qty == 2){
			printf("offer");
		}
		else {
			printf("2 pizza");
		}
	}
	else if(size == 4){
		printf("monster");
		if(qty == 1){
			printf("offer");
		}
		else{
			printf("no offer only on 1");
		}
	}

	/*if(i != 0){
		printf("yes i is not 0\n");
	}
	if(i>=1 && i<=10){
		printf("i is between 1 to 10\n");
	}
	if(i>=11 && i<=20){
		printf("i is between 11 to 20\n");
	}   */

	/*if(i>10){
		printf("yes i is greater than 10");
	}
	else if(i == 10){
		printf("i is 10");
	}
	else{
		printf("i is less than 10");
	}   */
	getch();
}