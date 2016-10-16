#include <stdio.h>
#include<conio.h>

void main() {
	int numb;
	int i;
	i=8;
	clrscr();
	printf("enter the number");
	scanf("%d",&numb);
	//printf("%d",numb);
	switch(numb) {

		case 1 :
			printf("one\n" );
		break;
		case 2 :
			printf("two\n");
		break;
		case 3 :
			printf("three\n" );
		break;
		case 4 :
			printf("four\n" );
		break;
		case 5 :
			printf("five\n" );
		break;
		case 6 :
			printf("six\n");
		break;
		case 7 :
			printf("seven\n");
		break;
		case 8 :
			printf("eight\n");
		break;
		case 9 :
			printf("nine\n");
		break;
		default :
			printf("the number is %d",numb);
	}
	getch();

}
