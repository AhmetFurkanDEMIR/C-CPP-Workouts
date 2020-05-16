#include <stdio.h>


int main(){
	
	int toplam=0;
	int a;
	int sayac=1;
	
	printf("Pozitif bölenlerini ögrenmek istediyin sayi:");
	scanf("%d",&a);
	
	
	while(sayac>a){
		
		int b = a % sayac;
		
		if(b==0){
			
			toplam = toplam + sayac;
			
			sayac = sayac + 1;
		}
		
		else{
			
			sayac = sayac +1;}
		
	}
	
	printf("%d",toplam);
	
	
	
	return 0;
}
