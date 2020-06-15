#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <dos.h>


int main(){
	
	system("color b0");
	char sifre[20]="1907";
	char kullanici[20]="fenerbahce";
	char kontrolad[20];
	char kontrol[20];
	int i,yanlis;
	char secim;
	int rastgele,guvenlik;
	
	
	i=0;
	yanlis=0;
	
	while(1){
		
		srand(time(NULL));
		rastgele=rand()%1000;
				
		printf("\n\n  -----DEMIR Guvenli veri sistemleri----- ");
		Beep(750, 300);
		printf("\n\n\n  Guvenlik sayisi => %d",rastgele);
		printf("\n\n  Guvenlik sayisini eksiksiz bir sekilde giriniz: ");
		scanf("%d",&guvenlik);
		
		if(guvenlik==rastgele){
			system("CLS");
			printf("\n\n  -----DEMIR Guvenli veri sistemleri----- ");
			printf("\n\n   Kullanici adi   = ");
			scanf("%s",&kontrolad);
			printf("\n\n   Sifre           = ");
			scanf("%s",&kontrol);
		
			while(!(kullanici[i]=='\0' && kontrolad[i]=='\0')){
			
				if(kullanici[i]!=kontrolad[i]){
					yanlis=1;
					break;
				}
				else{
					i++;}
				}
			
		
			i=0;
			while(!(sifre[i]=='\0' && kontrol[i]=='\0')){
				if(sifre[i]!=kontrol[i]){
					yanlis=2;
					break;
				}
				else{
					i++;}
			}
			
			
			if(yanlis==1){
			
				system("CLS");
				Beep(700, 500);
				system("color c0");
				printf("\n\n  -----DEMIR Guvenli veri sistemleri----- ");
				printf("\n\n  Hatali kullanici adi.\n\n  Guvenlik amaciyla ugulamadan atiliyorsunuz.\n");
				return;}
		
			else if(yanlis==2){
		
				system("CLS");
				Beep(700, 500);
				system("color c0");
				printf("\n\n  -----DEMIR Guvenli veri sistemleri----- ");
				printf("\n\n  Hatali Sifre.\n\n  Guvenlik amaciyla ugulamadan atiliyorsunuz.\n");
				return;}
		
			else{
		
				system("CLS");
				Beep(600, 500);
				system("color b0");
				printf("\n\n  -----DEMIR Guvenli veri sistemleri----- ");
				printf("\n\n  Giris bilgileriniz Dogru.\n\n  Uygulamaya giris yapiliyor....\n");
				sleep(5);
				break;}
			}
		
		else{
			
			system("CLS");
			Beep(700, 500);
			system("color c0");
			printf("\n\n  -----DEMIR Guvenli veri sistemleri----- ");
			printf("\n\n  Hatali Guvenlik sayisi.\n\n  Guvenlik amaciyla ugulamadan atiliyorsunuz.\n");
			return;
			
		}
	}
		
	
	for(;;){
		
		system("CLS");
		printf("\n\n  -----DEMIR Guvenli veri sistemleri----- ");
		printf("\n\n  1) gelecek planlamasi\n\n  2) Sifreler\n\n  Q) Cikis\n\n  seciminiz= ");
		secim=getch();
	
		if(secim=='q' || secim=='Q'){

			system("CLS");
			Beep(700, 500);
			system("color c0");
			printf("\n\n  -----DEMIR Guvenli veri sistemleri----- ");
			printf("\n\n  cikis yapiliyor...");
			sleep(5);
			return;
			break;
		}
		
		switch(secim){
			
			case '1':
				Beep(600, 500);
				system("CLS");
				printf("\n\n  -----DEMIR Guvenli veri sistemleri (Gelecek planlamasi)----- \n");
				printf("\n"
  "\n                                                               |-----------------------------------------|"
  "\n  -----------------------------------------------------        |                                         |"
  "\n  ||||||||| 1.Donem          | 2.Donem               |         |  1) Python                              |"
  "\n  -----------------------------------------------------        |                                         |"
  "\n  |1.sinif| Python, C        | Python, java          |         |  2) C                                   |"
  "\n  ------------------------------------------------------       |                                         |"
  "\n  |2.sinif| java, C++        | C++, C#               |         |  3) java                                |"
  "\n  -----------------------------------------------------        |                                         |"
  "\n  |3.sinif| C#, Javascript   | Javascript,  HTML-CSS |         |  4) c++                                 |"
  "\n  -----------------------------------------------------        |                                         |"
  "\n  |4.sinif| Android          | ios                   |         |  5) C#                                  |"
  "\n  -----------------------------------------------------        |                                         |"
  "\n                                                               |  6) Javascript                          |"
  "\n                                                               |                                         |"
  "\n                                                               |  7) HTML-CSS                            |"
  "\n                                                               |                                         |"
  "\n                                                               |  8) Mobil uygulamalar (ios, Android)    |"
  "\n                                                               |                                         |"
  "\n                                                               |-----------------------------------------|");
				printf("\n\n\n  Ana menuye donmek icin  herhangi harfe, uygulamadan cikmak icin Q\' harfine basiniz. ");
				secim=getch();
				
				if(secim=='q' || secim=='Q'){
					system("CLS");
					Beep(700, 500);
					system("color c0");
					printf("\n\n  -----DEMIR Guvenli veri sistemleri----- ");
					printf("\n\n  cikis yapiliyor...");
					sleep(5);
					return;}
					break;
				
			case '2':
			
				Beep(600, 500);
				system("CLS");
				printf("\n\n  -----DEMIR Guvenli veri sistemleri (Sifreler)----- ");
				printf("\n\n  KYK Wifi sifresi = 145363,");
				
				printf("\n\n\n  Ana menuye donmek icin  herhangi harfe, uygulamadan cikmak icin Q\' harfine basiniz. ");
				secim=getch();
				
				if(secim=='q' || secim=='Q'){
					system("CLS");
					Beep(700, 500);
					system("color c0");
					printf("\n\n  -----DEMIR Guvenli veri sistemleri----- ");
					printf("\n\n  cikis yapiliyor...");
					sleep(5);
					return;}
					break;
					
				}
		}

    return 0;
}
