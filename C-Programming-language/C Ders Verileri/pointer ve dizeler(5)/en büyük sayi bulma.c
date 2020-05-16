#include <stdio.h>

int main(){
	int dizi[10]={9999,36,3879,32,369,321,357,147,159,123};
	int enbuyuksayi=dizi[0];
	int a;
	 
	for(a=1;a<9;a++){
		if(enbuyuksayi<dizi[a])
		enbuyuksayi=dizi[a];
	}
	 
	 
	 printf("en buyuk sayi: %d",enbuyuksayi);
	 
}



