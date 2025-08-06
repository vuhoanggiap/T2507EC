#include <stdio.h>

int main() {
    float a;
    printf("Hay nhap thu nhap cua ban (Trieu VND): ");
    scanf("%f", &a);

	float ThuNhapChiuThue = a - 11;
	float ThuNhapChiuThue1 = a - 18;
	float ThuNhapChiuThue2 = a - 32;
	float ThuNhapChiuThue3 = a - 52;
	float ThuNhapChiuThue4 = a - 80;

    if (a <= 11) {
    	if(a >= 0){
    		printf("Ban khong phai tra thue");
		}else{
			printf("Ban dang nhap so am");
		};
    }else if(a <= 18){
		printf("so tien thue ban phai nop la :%.3f",ThuNhapChiuThue*0.15);
    }else if(a <= 32){
    	printf("so tien thue ban phai nop la :%.3f",ThuNhapChiuThue1*0.2 + 7*0.15);
	}else if(a <= 52){
		printf("so tien thue ban phai nop la :%.3f",ThuNhapChiuThue2*0.25 + 14*0.2 +7*0.15);
	}else if(a <= 80){
		printf("so tien thue ban phai nop la :%.3f",ThuNhapChiuThue3*0.3 + 20*0.25 + 14*0.2 + 7*0.15);
	}else{
		printf("so tien thue ban phai nop la :%.3f",ThuNhapChiuThue4*0.35 + 28*0.3 + 20*0.25 + 14*0.2 + 7*0.15);
	};
    return 0;
}
