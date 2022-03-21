#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float dl,vnd,tien;
	int lc;
	
	printf("Nhap so 1 de chuyen tu Dollars sang VND");
	printf("\nNhap so 2 de chuyen tu VND sang Dollars");
	printf("\nNhap lua chon: ");
	scanf("%d", &lc);
	while (lc > 2) {
		printf("Nhap sai lua chon, xin moi nhap lai: ");
		scanf("%d", &lc);
	}
	if (lc == 1 ){
		printf("Nhap ti gia Dollars ngay hom nay: ");
		scanf("%f", &dl);
		printf("Nhap so dollars can chuyen doi: ");
		scanf("%f", &vnd);
		tien = vnd * dl;
		printf("So tien sau khi chuyen doi la: %.2f VND", tien);
	}
	else if (lc == 2){
		printf("Nhap ti gia Dollars ngay hom nay: ");
		scanf("%f", &dl);
		printf("Nhap so tien VND can chuyen doi: ");
		scanf("%f", &vnd);
		tien = vnd / dl;
		printf("So tien sau khi chuyen doi la: %.2f dollars", tien);
	}
	return 0;
}
