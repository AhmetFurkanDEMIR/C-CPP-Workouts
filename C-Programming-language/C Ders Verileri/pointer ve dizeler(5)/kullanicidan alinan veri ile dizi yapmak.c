#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	int satir,sutun;
	printf("\n\n  kaca kaclik matris gireceksin. orn: 3#3 = ");
	scanf("%d#%d",&satir,&sutun);
	

	int dizi[satir][sutun];
	int i,j,kontrol=0;
	char secim;
	
	for(i=0;i<sizeof(dizi)/sizeof(dizi[0]);i++){
	
		
		
		for(j=0;j<sizeof(dizi[0])/4;j++){
		
			printf("\n\n  sayi gir: ");
			scanf("%d",&dizi[i][j]);}
	
		}
	i=0;
	j=0;
	
	system("CLS");
	
	for(i=0;i<sizeof(dizi)/sizeof(dizi[0]);i++){
		
		for(j=0;j<sizeof(dizi[0])/sizeof(dizi[0][0]);j++){
			
			printf(" %d ",dizi[i][j]);
			
		}
		
		printf("\n");
	}
	
	
	return 0;
}
