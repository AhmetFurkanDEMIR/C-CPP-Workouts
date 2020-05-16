#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
	
	int sayilar[6] = {5,6,99,599,6,66};
	int enb=0,i=0,indis;
	
	for(i=0;i<5;i++){
		
		if(sayilar[i]>enb){
		
			enb=sayilar[i];
			indis=i;}
		
	}
	
	printf("%d %d",enb,indis);
	
	
	return 0;
}
