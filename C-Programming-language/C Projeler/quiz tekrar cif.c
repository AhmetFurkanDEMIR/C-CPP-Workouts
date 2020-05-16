#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main(){
	
	int sayi,mod,tek=0,cift=0,ciften=0,teken=0;
	
	for(;;){
		
		printf("\n\n  sayi gir: ");
		
		scanf("%d",&sayi);
		
		
		
		if(sayi<=0){
			
			if(cift>ciften){
				ciften=cift;}
			
			if(tek>teken){
				teken=tek;	
			
			}
			
			break;
		}
		
		mod=sayi%2;
		
		if(mod!=0){
		
			if(cift>ciften){
				ciften=cift;
			}
		
			cift=0;
			tek=tek+1;
		}
	
		
		if(mod==0){
			if(tek>teken){
				teken=tek;
			}
			tek=0;
			cift=cift+1;
		}
		
		
		
	
	}
	
	printf("\n\n Pes pese tekrar eden cift= %d\n\n Pes pese tekrar eden tek = %d",ciften,teken);
	
	return 0;
}
