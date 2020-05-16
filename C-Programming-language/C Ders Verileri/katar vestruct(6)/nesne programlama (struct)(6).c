#include <stdio.h>




int main(){
	
	struct askerler{
		
		char isim[20];
		int can;
		int mermi;
		char silah[20];
		char ekipman[20];
		
		
	};
	
	struct askerler ahmet;
	struct askerler furkan;
	
	strcpy(ahmet.isim,"ahmo");
	ahmet.can =100;
	ahmet.mermi=250;
	strcpy(ahmet.silah,"tufek");
	strcpy(ahmet.ekipman,"el bombasi");
	
	furkan.can=250;
	furkan.mermi=600;
	strcpy(furkan.isim,"furki");
	strcpy(furkan.silah,"bicak");
	strcpy(furkan.ekipman,"zirh");
	
	printf("\n **********ASKER BILGI SISTEMI**********\n");
	printf("\n Askerin ismi: %s\n Askerin Silahi: %s\n Askerin Ekipmani: %s\n Askerin Cani: %d\n Askerin Muhummati: %d\n",furkan.isim,furkan.silah,furkan.ekipman,furkan.can,furkan.mermi);
	printf("\n\n");
	printf(" Askerin ismi: %s\n Askerin Silahi: %s\n Askerin Ekipmani: %s\n Askerin Cani: %d\n Askerin Muhummati: %d",ahmet.isim,ahmet.silah,ahmet.ekipman,ahmet.can,ahmet.mermi);
	return 0;
}
