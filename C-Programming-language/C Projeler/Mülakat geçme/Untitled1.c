#include <stdio.h>
#include <stdlib.h>


int main(){
	
	char cinsiyet;
	int yas;
	int boy;
	
	printf("\n  Mulakat 2019");
	printf("\n\n\n  Cinsiyetiniz nedir? (E=Erkek),(K=Kadin)= ");
	scanf("%c",&cinsiyet);
	printf("\n  Yasinizi giriniz= ");
	scanf("%d",&yas);
	printf("\n Boyunuzu giriniz(Cm olarak)= ");
	scanf("%d",&boy);
	
	if(cinsiyet=='E'){
		
		if(yas>=18 && yas<=30){
			
			if(boy>=170 && boy<=197){
				printf("\n  Mulakati gectiniz\n");
			}
			
			else{
			printf("\n Malesef Mulakati gecemediniz.\n");
		}
			
		}
		
		else{
			printf("\n Malesef Mulakati gecemediniz.\n");
		}
		
	}
	
	else if(cinsiyet=='K'){
		
		if(yas>=18 && yas<=26){
			
			if(boy>=165 && boy<=175){
				printf("\n  Mulakati gectiniz\n");
			}
			
			else{
			printf("\n Malesef Mulakati gecemediniz.\n");
		}
			
		}
		
		else{
			printf("\n Malesef Mulakati gecemediniz.\n");
		}
		
	}
	
	else{
		printf("\n  Hatali secim.\n");
	}
	
	
	return 0;
}

