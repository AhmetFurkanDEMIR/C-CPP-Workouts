#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int toplama(int sayi){
	
	if(sayi!=0){
		
		return sayi + toplama(sayi-1); 
		
	}
	
	else{
		return sayi;
	}
	
	
	
}
    
    
int main(){
	
	int sayi;
	
	printf("\n pozitif sayi giriniz : ");
	scanf("%d",&sayi);
	
	int asd = toplama(sayi);
	
	printf("%d",asd);
	
	return 0;	
}
