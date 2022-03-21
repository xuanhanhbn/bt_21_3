#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	VD1
//	float p,n,r;
//	p = 1000;
//	n = 2.5;
//	r = 10.5;
//	printf("\n Amount is : %f", p*n*r/100);

//	Vd2

//	int a,b,c,d;
//	a = 50;
//	b = 24;
//	c = 68;
//	d = a*b+c/2;
//	printf("\n The value after a*b+c/2 is : %d", d);
//		d = a%b;
//	printf("\n The value after a mod b is : %d", d);
//		d = a*b-c;
//	printf("\n The value after a*b-c is : %d", d);
//		d = a/b+c;
//	printf("\n The value after a/b+c is : %d", d);
//		d = a+b*c;
//	printf("\n The value after a+b*c is : %d", d);
//		d = (a+b)*c;
//	printf("\n The value after (a+b)*c is : %d", d);
//		d = a*(b+c+(a-c)*b);
//	printf("\n The value after a*(b+c+(a-c)*b) is : %d", d);

//	Vd3
//	
//	int a = 5, b = 6, c = 7;
//	printf ("int a = 5, b = 6, c = 7\n");
//	printf("The value of a > b is \t%i\n\n" ,a > b);
//	printf("The value of b < c is \t%i\n\n" ,b < c);
//	printf("The value of a + b >= c is \t%i\n\n", a + b >= c);
//	printf("The value of a - b <= b - c is\t%i\n\n", a-b<=b-c);
//	printf("The value of b-a =b - c is\t%i\n\n" ,b - a == b - c);
//	printf("The value of a*b!= c * c is\t%i\n\n" ,a * b < c * c);
//	printf("Result of a>10 && b <5 = %d\n\n" ,a>10 && b<5);
//	printf("Result of a>100 || b<50=%d\n\n" ,a>100 || b<50);

//	Vd 4
//	
//	int a = 10;
//	float b = 24.67892345;
//	char ch = 'A';
//	printf("\nInteger data = %d", a);
//	printf("\nFloat Data = %f",b);
//	printf("\nCharacter = %c",ch);
//	printf("\nThis prints the string");
//	printf("%s","\nThis also prints a string");

	printf("The number 555 in various forms:\n");
	printf("Without any modifier: \n");
	printf("[%d]\n",555);
	printf("With – modifier :\n");
	printf("[%-d]\n",555);
	printf("With digit string 10 as modifier :\n");
	printf("[%10d]\n",555);
	printf("With 0 as modifier : \n");
	printf("[%0d]\n",555);
	printf("With 0 and digit string 10 as modifiers :\n");
	printf("[%010d]\n",555);
	printf("With -, 0 and digit string 10 as modifiers: \n");
	printf("[%-010d]\n",555);
	return 0;
}
