#include <stdio.h>

int main(){
	
	int dizi[2][2]={{2,3},{3,10}};
	int i,j;
	int toplam=0;
	
	for(i=0;i<sizeof(dizi)/sizeof(dizi[0]);i++){
		
		for(j=0;j<sizeof(dizi[0])/4;j++){
			
			toplam=toplam+dizi[i][j];
			
		}
		
	}
	printf("%d",toplam);
	
	return 0;
}
