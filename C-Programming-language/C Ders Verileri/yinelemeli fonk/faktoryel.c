#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

double fakt(int sayi){
	
	if(sayi>1){
		
		return sayi * fakt(sayi-1);
		
	}
	
	else{
		
		return sayi;
		
	}
	
	
}
    
    
int main(){
	
	int sayi;
	
	printf("\n  Faktoryeli alinacak sayi : ");
	scanf("%d",&sayi);
	
	double asd = fakt(sayi);
	
	printf("\n\n= %.2lf",asd);
	
	return 0;	
}
