
int main(){
	float a , b , c;
	printf("nhap cac canh cua tam giac: \n");
	printf("nhap cac canh cua tam giac: \n");
	
	printf("nhap canh a: \n");
	scanf("%f",&a );
	printf("nhap canh b: \n");
	scanf("%f",&b );
	printf("nhap canh c: \n");
	scanf("%f",&c );
	
	float d = a + b;
	if(d>c){
		printf("ba canh tren co the tao thanh 1 tam giac");
	}else{
		printf("ba canh tren khong the tao thanh 1 tam giac");
	}
	return 0;
}
