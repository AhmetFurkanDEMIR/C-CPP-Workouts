#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main(){
	
	int sayi1,sayi2,enb,enkc,mod=1,ekok;
	
	printf("\n\n ebob hesaplama");
	printf("\n\n sayi gir: ");
	scanf("%d",&sayi1);
	printf("\n\n sayi gir: ");
	scanf("%d",&sayi2);
	
	if(sayi1>sayi2){
		enb=sayi1;
		enkc=sayi2;}
		
	else{
		enb=sayi2;
		enkc=sayi1;}
		
	for(;;){
		
		mod++;
		if(enb%mod==0 && enkc%mod==0){
			ekok=mod;
			break;
		}
		
		
		
		
	}
	
	printf("\n\n  ekok = %d",ekok);
	
	return 0;
}
