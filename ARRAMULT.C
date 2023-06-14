#include"header.h"
void main(){
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},b[3][3],c1[3][3];
	int index,r,c;
	clrscr();
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			printf("%d ",a[r][c]);
		}
		printf("\n");
	}
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			printf("enter number at b[%d][%d] : ",r,c);
			scanf("%d",&b[r][c]);
		}
	}
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			printf("%d ",a[r][c]);

		}
		printf("\n");
	}
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			c1[r][c] = a[r][c]*b[r][c];
		}
	}
	for(r=0;r<3;r++){
		for(c=0;c<3;c++){
			printf("%d ",c1[r][c]);

		}
		printf("\n");
	}
	getch();
}