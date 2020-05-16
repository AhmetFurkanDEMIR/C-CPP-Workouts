#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){
	
	int sayilar[6] = {5,6,99,599,6,66};
	int sayi,i=0,indis,b=5;
	
	printf("sayi gir: ");
	scanf("%d",&sayi);
	
	for(i=0;i<7;i++){
		if(sayilar[i]==sayi){
			indis=i;
			printf("\n  bu sayi bizde var indisi= %d",indis);
			b=5;
			break;
		}
		
		b=6;
	}
	
	if(b==6)
		printf("bu sayi bizde yok");
	
	return 0;
}
