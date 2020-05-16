#include <stdio.h>
#include <stdlib.h>


int main(){
		
	int sayi,sayi2,mod,enb,enk,kt;
	
	printf("\n\n  sayi gir: ");
	scanf("%d",&sayi);
	printf("\n  ikinci sayi gir: ");
	scanf("%d",&sayi2);
	
	if(sayi>sayi2){
		enb=sayi;
		enk=sayi2;
	}
	
	else if(sayi2>sayi){
		enb=sayi2;
		enk=sayi;
	}
	
	mod=enb%enk;
	
	
	if(mod==0){
		kt=enb/enk;
		printf("\n  %d # %d nin katidir. = %d katidir.\n",enb,enk,kt);
	}
	
	else{
		printf("\n  %d # %d nin kati Deðildir.\n",enb,enk);
	}
	
	
	
	
	
	
	return 0;
}

