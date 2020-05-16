#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main(){
	
	int satir;
	int sutun,a=1,b=1;
	
	printf("\n satir sayisi gir: ");
	scanf("%d",&satir);
	
	
	for(a=1;a<=satir;a++){
		
		for(b=1;b<=satir;b++){
			printf(" *");
		}
		
		printf(" \n");
	}
	
	return 0;
}
