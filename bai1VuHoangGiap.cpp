#include <stdio.h>

int main(){
	printf("hay nhap so diem cua ban\n");
	int a;
	scanf("%d",&a);
	if(a>10){
		printf("ban dang boc phet\n");
	}else if(a>=9 && a<=10){
		printf("ban thuoc dang xuat sac\n");
	}else if(a>=8 && a<9){
		printf("ban thuoc dang gioi\n");
	}else if(a>=7 && a<8){
		printf("ban thuoc dang kha\n");
	}else if(a>=5 && a<7){
		printf("ban thuoc dang trung binh\n");
	}else if(a<5 && a>=0){
		printf("ban thuoc dang yeu\n");
	};
	return 0;
}
