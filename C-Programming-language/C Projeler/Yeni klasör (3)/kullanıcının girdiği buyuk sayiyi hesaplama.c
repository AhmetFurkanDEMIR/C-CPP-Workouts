#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main(){
	
	char devam;
	float sayi,buyuk=0;
	
	do{
		
		printf("\n sayi gir: ");
		scanf("%f",&sayi);
		
		if(sayi>buyuk)
			buyuk=sayi;

		
		
		printf("\n\n buyuk sayiyi hesaplamaya devam etmek icin e harfine basin.");
		scanf("%s",&devam);
		
	}while(devam == 'E' || devam== 'e');
	
	printf("%f",buyuk);
	
	return 0;
}
