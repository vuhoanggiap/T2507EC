#include <stdio.h>

int main(){
	float a;
	printf("hay nhap so kWh tieu thu:\n");
	scanf("%f",&a);
	float b = 1.678*a;
	float c = 1.734*a;
	float d = 2.014*a;
	float e = 2.536*a;
	if(a <= 50){
		printf("Ban phai tra so tien: %.3f",b);
		printf(" VND");
	}else if(a > 50 && a<=100){
		printf("Ban phai tra so tien: %.3f",c );
		printf(" VND");
	}else if(a > 100 && a<200){
		printf("Ban phai tra so tien: %.3f",d );
		printf(" VND");
	}else if(a = 200){
		printf("Ban phai tra so tien: %.3f",e );
		printf(" VND");
	};
}
