#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	int dizi[3][3]={{1,2,5},{1,5,9},{1,9,7}};
	int i,j;
	
	for(i=0;i<sizeof(dizi)/sizeof(dizi[0]);i++){
		
		if(i==1){
				printf("\n");
			}
			
		if(i==2){
				printf("\n");
			}
		
		for(j=0;j<sizeof(dizi[0])/4;j++){
			
			printf("%d ",dizi[i][j]);
			
			
		}
		
	}
	
	
	
	return 0;
}
