#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	printf("vd1");
//	int x, y;
//	char a = 'y';
//	x = y = 0;
//	if ( a == 'y') { 
//	x += 5;
//	printf("The numbers are %d and \t%d", x,y);
//	}

//	printf("vd2");
//	int year;
//		printf("\nPlease enter a year: ");
//		scanf("%d", &year);
//	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		printf("\n%d is a leap year", year);

//	printf("vd3");
//	int a;
//	printf("\nEnter a number: ");
//	scanf("%d", &a);
//	if (a % 2 == 0) {
//		printf("The number is Even");
//	} else {
//		printf("The number is Odd");
//	}

//	printf("vd4");
//	char c;
//	printf("\nPlease enter a character: ");
//	scanf("%c", &c);
//	if (c >= 'A' && c <= 'Z') {
//		printf("Lowercase character = %c", c + 'a' - 'A');
//	} else {
//		printf("Character Entered is = %c", c);
//	}

//	printf("vd5"); 
//	int x;
//	x = 0;
//	
//	printf("\nEnter Choice (1 -3) : ");
//	scanf("%d", &x);
//	if (x == 1) {
//		printf("\n Choice is 1");
//	}
//	else if ( x == 2 ) {
//		printf("\n Choice is 2");
//	}
//	else if (x == 3) {
//		printf("\n Choice is 3");
//	}
//	else {
//		printf("Invaild Choice");
//	}

//	printf("VD6");
//	int x,y;
//	x = y = 0;
//	
//	printf("\nEnter choice (1-3) : ");
//	scanf("%d", &x);
//	if (x == 1){
//		printf("Enter value for y (1 - 5): ");
//		scanf("%d", &y);
//		if (y <= 5) {
//			printf("\n The value for y is: %d", y);
//		} else {
//			printf("\nThe value for y exceeds 5");
//		}
//	} else {
//		printf("Choice entered was not 1");
//	}
	
	printf("VD7");
	int masp;
	float sl, rate = 0.0;
	printf("\n Nhap ma san pham: ");
	scanf("%d", &masp);
	printf("\nNhap so luong: ");
	scanf("%f", &sl);
	if (masp == 1){
		if (sl >= 500) {
			rate = 0.12;
		}
		else if (sl >= 300) {
			rate = 0.08;
		}
		else {
			rate = 0.02;
		}
	}
		else if (masp == 2) {
			if (sl >= 2000) {
				rate = 0.10;
			}
			else if (sl >= 1500){
				rate = 0.05;
			}
		}
		else if (masp == 3){
			if (sl >= 5000) {
				rate = 0.10;
			}
			else if (sl >= 2500) {
				rate = 0.05;
			}
		}
	sl -= sl * rate;
	printf("The net order amount is %.2f \n", sl);
	return 0;
}
