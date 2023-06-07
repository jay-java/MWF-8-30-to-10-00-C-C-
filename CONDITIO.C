#include<stdio.h>
#include<conio.h>
//conditional operator >,<,>=,<=,!=
//logical operator && || !
//condition statements
/*
1.simple if
2.if else
3.nested if
4.else if ladder
5.switch case
*/
void main(){
	int i,j;
	int age;
	int m;
	int lang;
	clrscr();
	printf("enter i = ");
	scanf("%d",&i);
	printf("enter j = ");
	scanf("%d",&j);
	//simple if
	if(i>j){
		printf("yes i is greater than j\n");
	}

	//if else
	if(i>j){
		printf("yes i is greater than j\n");
	}
	else{
		printf("no j is greater than i\n");
	}

	//nested if
	printf("enter age = ");
	scanf("%d",&age);
	if(age>18){
		if(age<60){
			printf("eligible\n");
		}
		else{
			printf("age is greater than 18 but not less than 60\n");
		}
	}
	else{
		printf("age is less than 18\n");
	}

	//else if ladder
	printf("enter marks : ");
	scanf("%d",&m);
	if(m<33){
		printf("Fail\n");
	}
	else if(m>=33 && m<=50){
		printf("D grade");
	}
	else if(m>=51 && m<=70){
		printf("C grade");
	}
	else if(m>=71 && m<=80){
		printf("B grade");
	}
	else if(m>=81 && m<=90){
		printf("A grade");
	}
	else if(m>=91 && m<=100){
		printf("A+ grade");
	}
	else{
		printf("inavlid input");
	}
	//switch case
	printf("1.English\n2.HIndi\n3.Gujarati");
	printf("enter your choice : ");
	scanf("%d",&lang);
	switch(lang){
		case 1:
			printf("1.English");
			break;
		case 2:
			printf("2.HIndi");
			break;
		case 3:
			printf("3.Gujarati");
			break;
		default:
			printf("invalid");
	}
	getch();
}