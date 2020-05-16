#include <stdio.h>
#include <stdlib.h>


int main(){
		
	int sayi,son;
	
	printf("\n  DEMIR toptanci uygulamasi");
	printf("\n\n  Almak istediginiz adet sayisi: ");
	scanf("%d",&sayi);
	
	if(sayi>0 && sayi<=100){
		son= sayi*30;
	}
	
	else if(sayi>100 && sayi<=150){
		son= sayi*25;
	}
	
	else if(sayi>150 && sayi<=250){
		son = sayi*20;
	}
	else if(sayi>250){
		son=sayi*17;
	}
	
	printf("\n  Toplam odenecek tutar: %d",son);
	
	
	
	
	
	
	
	
	
	
	return 0;
}

