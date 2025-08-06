#include <stdio.h>
#include <math.h>

int main(){
	int ngay , thang , nam;
	printf("hay nhap ngay thang nam:  ");
	scanf("%d %d %d",&ngay,&thang,&nam);
	
	int songaytrongthang = 31;
	
	if(ngay < 1 || ngay > 31 || thang < 1 || thang > 12 || nam < 1 ){
		printf("thoi gian ban nhap khong hop le!");
	}
	
	if(thang == 2){
		if(nam % 4 == 0 && nam % 100 != 0 || nam % 400 == 0){
			songaytrongthang = 29;
		}else{
			songaytrongthang = 28;
		}
		
	}else if(thang == 4 || thang == 6 || thang == 9 || thang == 11){
		songaytrongthang = 30;
	}else{
		songaytrongthang = 31;
	}
	
	
	if(ngay > songaytrongthang){
		printf("thoi gian ban nhap khong hop le!");
	}else if(ngay < songaytrongthang){
		ngay++;
	}else if(ngay == songaytrongthang){
		ngay = 1;
	}
	
	if(thang < 12){
		thang++;
	}else if(thang == 12){
		thang = 1;
		nam++;
	}
	
	printf("Ngay ke tiep la: %d %d %d", ngay , thang , nam);
	return 0;
};
