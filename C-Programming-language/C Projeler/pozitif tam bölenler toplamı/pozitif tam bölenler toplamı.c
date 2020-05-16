#include <stdio.h>


int main(){

	int a,b;
	int toplam = 0;
	int sayac = 1;
	
	printf("\n\n  pozitif tam bolenleri bulunacak sayi: ");
	scanf("%d",&a);
	
	while(a>=sayac){
		
		b = a % sayac;
		
		if(b==0){
			toplam = toplam +sayac;
			sayac = sayac+1;
		}
		
		else if(b!=0){
			sayac= sayac+1;
		}
		
	}
	
	printf("\n\n  pozitif tam bolenler toplami= %d\n\n",toplam);
	

	return 0;
}



