// Ad,Soyad= Ahmet Furkan DEMIR ,ogrenci numarasi= 19010011019

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI      3.141593

int adet;
float toplam=0,sayi2,sayi1,toplamm=1,loga,vize,final,top;
int sayi15,sayiy=1,mod;
float taban,us,gecici,derece;
double mode;
int sayi1e,sayi2e;


char secim,bek;
char basitt[130]="\n\n  Ana menuye donmek icin A\'harfine, Uygulamadan cikmak icin Q\'harfine\n  Basit modda kalmak icin herhangi bir harfe basiniz: ";
char cika[50]="\n\n  Matematik bizimle daha guzel... hoscakal :)\n\a";
char gelismiss[135]="\n\n  Ana menuye donmek icin A\'harfine, Uygulamadan cikmak icin Q\'harfine\n  Gelismis modda kalmak icin herhangi bir harfe basiniz: ";
char cikb[55]="\n\n  ---------------DEMIR Hesap makinesi---------------";

int main(){

	for(;;){
		system("color cf");
		printf("\n\n  ---------------DEMIR Hesap makinesi---------------\n\n  1) Basit Mod\n\n  2) Gelismis Mod\n\n  3) Yazilim Hakkinda\n\n  Q) Cikis\n\a");
		printf("\n\n  Seciminiz= ");

		secim=getch();

		if(secim=='1'){

			system("CLS");
			basit();}//if

		else if(secim=='2'){

			system("CLS");
			gelismis();}//else if

		else if(secim=='3'){

			system("CLS");
			printf("\n\n  ---------------DEMIR Hesap makinesi (Yazilim Hakkinda)---------------\n");
			printf("\n\n  Hesap makinesinin yapabildigi islemler:\n\n  -----------------------------------\n\n  Basit Mod => Toplama, Cikarma, Carpma, Bolme\n\n  -----------------------------------\n\n  Gelismis Mod => Karekok, Kuvvet alma, Logaritma, ln(e), Faktoriyel, Ortalama\n\n  Pozitif bolenler toplami, Vize ve Final, Trigonometrik islemler, Mod alma  \n\n  -----------------------------------");
			
			printf("\n\n\n  Ad,Soyad= Ahmet Furkan DEMIR ,ogrenci numarasi= 19010011019");
			printf("\n\n  Daha fazlasi icin https://1demir.tr.gg/ adresini ziyaret edin.");
			printf("\n\n\n  Ana menuye donmek icin herhangi bir harfe, Uygulamadan cikmak icin Q\'harfine basiniz: ");
			secim=getch();

			if(secim=='Q' || secim=='q'){

				system("CLS");
				printf(cikb);
				printf(cika);
				exit(2);}//if
		}//else if
		
		else if(secim=='Q' || secim=='q'){

			system("CLS");
			printf(cikb);
			printf(cika);
			exit(2);}//else if

		else{

			printf("\n\n  Hatali secim yaptiniz.");
			printf("\n\n  Ana menuye donmek icin herhangi bir harfe, Uygulamadan cikmak icin Q\'harfine basiniz: \a");
			secim=getch();

			if(secim=='Q' || secim=='q'){
				system("CLS");
				printf(cikb);
				printf(cika);
				exit(2);}//else if
			}//else

		system("CLS");

	}//for

	return 0;

}//main

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int basit(){

	for(;;){

		    asd : system("CLS");
			printf("\n\n  ---------------DEMIR Hesap makinesi (Basit Mod)---------------\n\n  1) Toplama\n\n  2) Cikarma\n\n  3) Carpma\n\n  4) Bolme\n\n  A) Ana menu\n\n  Q) Cikis\n");
			printf("\n  Seciminiz= ");
			secim=getch();
			int a;

			if (secim=='Q' || secim=='q'){
				system("CLS");
				printf(cikb);
				printf(cika);
				exit(2);}//if

			else if(secim=='A' || secim=='a'){
				system("CLS");
				main();}//else

			switch(secim){

				case '1':

					system("CLS");
					printf("\n\n  ---------------DEMIR Hesap makinesi (Toplama)---------------\n");
					printf("\n  Kac adet sayi Toplamak istiyorsunuz: ");

					scanf("%d",&adet);

					if(adet>=2){
						toplam=0;

						for(a=1;a<=adet;a++){
							system("CLS");
							printf("\n\n  ---------------DEMIR Hesap makinesi (Toplama)---------------\n");
							printf("\n  %d. sayiyi giriniz: ",a);
							scanf("%f",&sayi1);
							toplam=toplam+sayi1;

						}//for

						system("CLS");
						printf("\n\n  ---------------DEMIR Hesap makinesi (Toplam)---------------");
						printf("\n\n  %d sayinin Toplama sonucu => %.2f",adet,toplam);

						printf(basitt);
						secim=getch();

						if(secim=='A' || secim=='a'){
							system("CLS");
							main();}//if

						else if(secim=='Q' || secim=='q'){
							system("CLS");
							printf(cikb);
							printf(cika);
							exit(2);}//else if
					}//if

					else{

						printf("\n\n  Islem yapabilmek icin en az iki sayi girilmeli.\a");
						printf(basitt);
						secim=getch();

						if(secim=='A' || secim=='a'){
							system("CLS");
							main();}//if

						else if(secim=='Q' || secim=='q'){
							system("CLS");
							printf(cikb);
							printf(cika);
							exit(2);}//else if

					}//else
					break;

				case '2':

					system("CLS");
					printf("\n\n  ---------------DEMIR Hesap makinesi (Cikarma)---------------\n");
					printf("\n  Kac adet sayi Cikarmak istiyorsunuz: ");
					scanf("%d",&adet);

					if(adet>=2){

						sayi2=0;
						system("CLS");
						printf("\n\n  ---------------DEMIR Hesap makinesi (Cikarma)---------------\n");
						printf("\n  1. sayiyi giriniz: ");
						scanf("%f",&sayi2);
					
						int adett;
						adett=adet-1;
						for(a=1;a<=adett;a++){
							system("CLS");
							printf("\n\n  ---------------DEMIR Hesap makinesi (Cikarma)---------------\n");
							printf("\n  %d. sayiyi giriniz: ",a+1);
							scanf("%f",&sayi1);
							sayi2=sayi2-sayi1;
						}//for

						system("CLS");
						printf("\n\n  ---------------DEMIR Hesap makinesi (Cikarma)---------------");
						printf("\n\n  %d sayinin Cikarma sonucu => %.2f",adet,sayi2);

						printf(basitt);
						secim=getch();

						if(secim=='A' || secim=='a'){
							system("CLS");
							main();}//if

						else if(secim=='Q' || secim=='q'){
							system("CLS");
							printf(cikb);
							printf(cika);
							exit(2);}//else if

					}//if

					else{

						printf("\n\n  Islem yapabilmek icin en az iki sayi girilmeli.\a");
						printf(basitt);
						secim=getch();

						if(secim=='A' || secim=='a'){
							system("CLS");
							main();}//if

						else if(secim=='Q' || secim=='q'){
							system("CLS");
							printf(cikb);
							printf(cika);
							exit(2);}//else if

					}//else
					break;

				case '3':

					system("CLS");
					printf("\n\n  ---------------DEMIR Hesap makinesi (Carpma)---------------\n");
					printf("\n  Kac adet sayi Carpmak istiyorsunuz: ");
					scanf("%d",&adet);

					toplamm=1;
					if(adet>=2){

						for(a=1;a<=adet;a++){
							system("CLS");
							printf("\n\n  ---------------DEMIR Hesap makinesi (Carpma)---------------\n");
							printf("\n  %d. sayiyi giriniz: ",a);
							scanf("%f",&sayi1);
							toplamm=toplamm*sayi1;
						}//for

						system("CLS");
						printf("\n\n  ---------------DEMIR Hesap makinesi (Carpma)---------------");
						printf("\n\n  %d sayinin Carpma sonucu => %.2f",adet,toplamm);

						printf(basitt);
						secim=getch();

						if(secim=='A' || secim=='a'){
							system("CLS");
							main();}//if

						else if(secim=='Q' || secim=='q'){
							system("CLS");
							printf(cikb);
							printf(cika);
							exit(2);}//else if

					}//if

					else{

						printf("\n\n  Islem yapabilmek icin en az iki sayi girilmeli.\a");
						printf(basitt);
						secim=getch();

						if(secim=='A' || secim=='a'){
							system("CLS");
							main();}//if

						else if(secim=='Q' || secim=='q'){
							system("CLS");
							printf(cikb);
							printf(cika);
							exit(2);}//else if

					}//else
					break;

				case '4':

					system("CLS");
					printf("\n\n  ---------------DEMIR Hesap makinesi (Bolme)---------------\n");
					printf("\n  Kac adet sayi Bolmek istiyorsunuz: ");
					scanf("%d",&adet);

					if(adet>=2){

						sayi2=0;
						system("CLS");
						printf("\n\n  ---------------DEMIR Hesap makinesi (Bolme)---------------\n");
						printf("\n  1. sayiyi giriniz: ");
						scanf("%f",&sayi2);
						int adett;
						adett=adet-1;
						for(a=1;a<=adett;a++){
							system("CLS");
							printf("\n\n  ---------------DEMIR Hesap makinesi (Bolme)---------------\n");
							printf("\n  %d. sayiyi giriniz: ",a+1);
							scanf("%f",&sayi1);
							if(sayi1==0){
								printf("\n\n  Bir sayi sifira bolunemez(Tanimsiz).\a");
								printf(basitt);
								secim=getch();

								if(secim=='A' || secim=='a'){
									system("CLS");
									main();}//if

								else if(secim=='Q' || secim=='q'){
									system("CLS");
									printf("\n\n  ---------------DEMIR Hesap makinesi---------------");
									printf(cika);
									exit(2);}//else if

								else
									goto asd;

								}//if
							sayi2=sayi2/sayi1;
						}//for

						system("CLS");
						printf("\n\n  ---------------DEMIR Hesap makinesi (Bolme)---------------");
						printf("\n\n  %d sayinin Bolme sonucu => %.2f",adet,sayi2);

						printf(basitt);
						secim=getch();

						if(secim=='A' || secim=='a'){
							system("CLS");
							main();}//if

						else if(secim=='Q' || secim=='q'){
							system("CLS");
							printf(cikb);
							printf(cika);
							exit(2);}//else if

					}//if

					else{

						printf("\n\n  Islem yapabilmek icin en az iki sayi girilmeli.\a");
						printf(basitt);
						secim=getch();

						if(secim=='A' || secim=='a'){
							system("CLS");
							main();}//if

						else if(secim=='Q' || secim=='q'){
							system("CLS");
							printf(cikb);
							printf(cika);
							exit(2);}//else if

					}//else
					break;
		}//switch

		}//ana for

}//basit

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int gelismis(){

	for(;;){

		system("CLS");
		printf("\n\n  ---------------DEMIR Hesap makinesi (Gelismis Mod)---------------\n\n  0) Karekok\n\n  1) Kuvvet al\n\n  2) Logaritma\n\n  3) ln(e)\n\n  4) Ortalama\n\n  5) Faktoriyel\n\n  6) Mod\n\n  7) Pozitif Bolenler Toplami \n\n  8) Final ve Vize hesaplari\n\n  9) Trigonometrik islemler\n\n  A) Ana menu\n\n  Q) Cikis\n");
		printf("\n  Seciminiz= ");
		secim=getch();

		if (secim=='Q' || secim=='q'){
			system("CLS");
			printf(cikb);
			printf(cika);
			exit(2);}//if

		else if(secim=='a' || secim=='A'){
				system("CLS");
				main();}//elseif

		switch(secim){

			case '0':

				system("CLS");
				printf("\n\n  ---------------DEMIR Hesap makinesi (Karekok)---------------\n");
				printf("\n  sayiyi giriniz: ");
				sayi1=0;
				scanf("%f",&sayi1);
				if(sayi1>=0){

					system("CLS");
					printf("\n\n  ---------------DEMIR Hesap makinesi (Karekok)---------------\n");
					printf("\n  sonuc=> (karekok %.2f) = %.2f",sayi1,sqrt(sayi1));}//if
				
				else
					printf("\n  Karekok icerisi 0\'a esit veya buyuk olmasi gerekir.\a");
				
				printf(gelismiss);
				secim=getch();

				if(secim=='A' || secim=='a'){
					system("CLS");
					main();}//if

				else if(secim=='Q' || secim=='q'){
					system("CLS");
					printf(cikb);
					printf(cika);
					exit(2);}//else if

				break;

			case '1':

				system("CLS");
				printf("\n\n  ---------------DEMIR Hesap makinesi (Kuvvet alma)---------------\n");
				sayi1=0;
				sayi2=0;
				printf("\n  taban sayisi giriniz: ");
				scanf("%f",&sayi1);
			
				printf("\n  kuvvet sayiyisi giriniz: ");
				scanf("%f",&sayi2);
				system("CLS");
				printf("\n\n  ---------------DEMIR Hesap makinesi (Kuvvet alma)---------------\n");
				printf("\n  sonuc=> %.2f uzeri %.2f = %.2f",sayi1,sayi2,pow(sayi1,sayi2));
				printf(gelismiss);
				secim=getch();

				if(secim=='A' || secim=='a'){
					system("CLS");
					main();}//if

				else if(secim=='Q' || secim=='q'){
					system("CLS");
					printf(cikb);
					printf(cika);
					exit(2);}//else if

				break;

			case '2':

				system("CLS");
				printf("\n\n  ---------------DEMIR Hesap makinesi (Logaritma)---------------\n");
				printf("\n  Taban sayisini giriniz: ");
				taban=0;
				scanf("%f",&taban);
				
				system("CLS");
				printf("\n\n  ---------------DEMIR Hesap makinesi (Logaritma)---------------\n");
				printf("\n  Us sayisini giriniz: ");
				us=0;
				scanf("%f",&us);
				if(taban>0 && us>0){

					system("CLS");
					printf("\n\n  ---------------DEMIR Hesap makinesi (Logaritma)---------------\n");
					printf("\n  log%.2f(%.2f) => %.2f",taban,us,log10(us)/log10(taban));}//if

				else
					printf("\n  Bir sayinin log10 tabaninda hesaplanabilmesi icin; sayi 0 dan buyuk olamali.\a");

				printf(gelismiss);
				secim=getch();

				if(secim=='A' || secim=='a'){
					system("CLS");
					main();}//if

				else if(secim=='Q' || secim=='q'){
					system("CLS");
					printf(cikb);
					printf(cika);
					exit(2);}//else if

			    break;

			case '3':

				system("CLS");
				printf("\n\n  ---------------DEMIR Hesap makinesi (ln(e))---------------\n");
				printf("\n  e tabaninda logaritmasi alinacak sayiyi giriniz: ");
				sayi1=0;
				scanf("%f",&sayi1);

				if(sayi1>0){

					loga=log(sayi1);
					system("CLS");
					printf("\n\n  ---------------DEMIR Hesap makinesi (ln(e))---------------\n");
					printf("\n  ln(e)(%.2f) => %.2f",sayi1,loga);}//if

				else
					printf("\n  bir sayinin e tabaninda logaritmasi hesaplanmasi icin; sayi 0 dan buyuk olmali\a");

				printf(gelismiss);
				secim=getch();

				if(secim=='A' || secim=='a'){
					system("CLS");
					main();}//if

				else if(secim=='Q' || secim=='q'){
					system("CLS");
					printf(cikb);
					printf(cika);
					exit(2);}//else if

			    break;

			case '4':

				adet=0;
				toplam=0;
				system("CLS");

				printf("\n\n  ---------------DEMIR Hesap makinesi (Ortalama)---------------\n");
				printf("\n  Kac adet sayinin ortalamasini istiyorsunuz: ");
				int a;
				scanf("%d",&adet);

				if(adet>=2){
					toplam=0;
					for(a=1;a<=adet;a++){
						system("CLS");
						printf("\n\n  ---------------DEMIR Hesap makinesi (Ortalama)---------------\n");
						printf("\n  %d. sayiyi giriniz: ",a);
						scanf("%f",&sayi1);
						toplam=toplam+sayi1;

					}//for

					system("CLS");
					printf("\n\n  ---------------DEMIR Hesap makinesi (Ortalama)---------------\n");
					printf("\n  %d sayinin ortalama sonucu => %.2f",adet,toplam/adet);

					printf(gelismiss);
					secim=getch();

					if(secim=='A' || secim=='a'){
						system("CLS");
						main();}//if

					else if(secim=='Q' || secim=='q'){
						system("CLS");
						printf(cikb);
						printf(cika);
						exit(2);}//else if

				}//if
				else{

					printf("\n\n  Islem yapabilmek icin en az iki sayi girilmeli.\a");
					printf(gelismiss);
					secim=getch();

					if(secim=='A' || secim=='a'){
						system("CLS");
						main();}//if

					else if(secim=='Q' || secim=='q'){
						system("CLS");
						printf(cikb);
						printf(cika);
						exit(2);}//else if

				}//else
				break;

			case '5':

				system("CLS");
				printf("\n\n  ---------------DEMIR Hesap makinesi (Faktoriyel)---------------\n");
				double sayii,sayiii;
				double fakta=1;
				
				printf("\n  Faktoriyeli hesaplanacak bir sayi giriniz: ");
				scanf("%lf",&sayii);
				sayiii=sayii+2;
				sayiii=sayiii-2;

				if(sayii==1 || sayii==0)
					printf("\n  %.2lf Faktoriyel => 1",sayii);

				else if(sayii>=2){

					while(sayii>=1){
						fakta*=sayii;
						sayii=sayii-1;}//while

					system("CLS");
					printf("\n\n  ---------------DEMIR Hesap makinesi (Faktoriyel)---------------\n");
					printf("\n  %.2lf Faktoriyel => %.2lf",sayiii,fakta);}//elseif

				else
					printf("\n\n  Faktoryelin hesaplanabilmesi icin sayiyi 0 dan buyuk giriniz\a");

				printf(gelismiss);
				secim=getch();

				if(secim=='A' || secim=='a'){
					system("CLS");
					main();}//if

				else if(secim=='Q' || secim=='q'){
					system("CLS");
					printf(cikb);
					printf(cika);
					exit(2);}//else if

			    break;
			
			case '6':
				
				system("CLS");
				printf("\n\n  ---------------DEMIR Hesap makinesi (Mod)---------------\n");
				printf("\n  Modu alinacak Sayiyi giriniz: ");
				scanf("%d",&sayi1e);
			
				system("CLS");
				printf("\n\n  ---------------DEMIR Hesap makinesi (Mod)---------------\n");
				printf("\n  Hangi sayiya gore Mod alinsin: ");
				scanf("%d",&sayi2e);
				
				system("CLS");
				printf("\n\n  ---------------DEMIR Hesap makinesi (Mod)---------------\n");
				
				mode=sayi1e%sayi2e;
				if(mode!=0){
					printf("\n  %d %% %d => %.2lf\n\n  kalan= %.2lf\n\n  sayilar birbirine tam bolunemez.",sayi1e,sayi2e,mode,mode);}//if
					
				else
					printf("\n  %d %% %d => %.2lf\n\n  kalan= %.2lf\n\n  sayilar birbirini tam boler.",sayi1e,sayi2e,mode,mode);
				
				printf(gelismiss);
				secim=getch();

				if(secim=='A' || secim=='a'){
					system("CLS");
					main();}//if

				else if(secim=='Q' || secim=='q'){
					system("CLS");
					printf(cikb);
					printf(cika);
					exit(2);}//else if
				
				
				break;
			
			
			case '7':

				system("CLS");
				printf("\n\n  ---------------DEMIR Hesap makinesi (Pozitif bolenler toplami)---------------\n");
				printf("\n  Pozitif bolenler toplami hesaplanacak sayiyi giriniz: ");
				sayi15=0;
				scanf("%d",&sayi15);
				
				system("CLS");
				printf("\n\n  ---------------DEMIR Hesap makinesi (Pozitif bolenler toplami)---------------\n");
				
				if(sayi15>0){

					int toplamq=0;
					sayiy=1;
					
					while(sayiy<=sayi15){
						mod=sayi15%sayiy;
						if(mod==0){
							toplamq=toplamq+sayiy;}//if
						sayiy=sayiy+1;}//while

					printf("\n  %d sayisinin Pozitif bolenler toplami => %d",sayi15,toplamq);}//if
				
				else{
					printf("\n  Pozitif bolenler toplami hesaplanmasi icin sayi 0 dan buyuk olmali.\a");
				}
				

				printf(gelismiss);
				secim=getch();

				if(secim=='A' || secim=='a'){
					system("CLS");
					main();}//if

				else if(secim=='Q' || secim=='q'){
					system("CLS");
					printf(cikb);
					printf(cika);
					exit(2);}//else if

				break;

			case '8':

				vize=0;
				final=0;
				system("CLS");
				printf("\n\n  ---------------DEMIR Hesap makinesi (Vize ve Final hesaplari)---------------");

				printf("\n\n  1) Elimde sadece vize notum var\n\n  2) Elimde vize ve Final notlarim var\n\n  G) Gelismis Mod\n\n  A) Ana menu\n\n  Q) Cikis\n\n  seciminiz= ");
				secim=getch();

				if (secim=='Q' || secim=='q'){
					system("CLS");
					printf(cikb);
					printf(cika);
					exit(2);}//if

				else if(secim=='a' || secim=='A'){
					system("CLS");
					main();}//elseif

				else if(secim=='G' || secim=='g'){
					system("CLS");
					gelismis();}//else if

				switch(secim){

					case '1':
						
						system("CLS");
						printf("\n\n  ---------------DEMIR Hesap makinesi (Vize ve Final hesaplari)---------------");
						printf("\n\n  Vize notunuzu giriniz: ");
						scanf("%f",&vize);
						if(vize>=0 && vize<=100){

							for(final=0;final<=100;final++){

								if((vize*0.4)+(final*0.6)>=60){
									break;}//if
							}//for

							printf("\n  Final den alinmasi gereken minumum puan= %.2f",final);
						}//if

						else
							printf("\n  Vize notunuz 0 ile 100 arasinda olamali\a");
					
						printf(gelismiss);
						secim=getch();

						if(secim=='A' || secim=='a'){
							system("CLS");
							main();}//if

						else if(secim=='Q' || secim=='q'){
							system("CLS");
							printf(cikb);
							printf(cika);
							exit(2);}//else if

					break;

					case '2':

						system("CLS");
						printf("\n\n  ---------------DEMIR Hesap makinesi (Vize ve Final hesaplari)---------------");
						printf("\n\n  Vize notunuzu giriniz: ");
						scanf("%f",&vize);

						printf("\n  Final notunuzu giriniz: ");
						scanf("%f",&final);

						top=(vize*0.4)+(final*0.6);

						if(vize>=0 && vize<=100 && final>=0 && final<=100){

							if(top>=60){
								printf("\n\n  Tebrikler Dersi gectiniz\n\n  Notunuz= %.2f",top);}//if

							else if(top<60){
								printf("\n\n  Malesef dersi gecemediniz\n\n  notunuz= %.2f",top);}//else if
							}//if

						else
							printf("\n\n  Vize veya Final notlariniz 0 ile 100 arasinda olmali\a");

						printf(gelismiss);
						secim=getch();

						if(secim=='A' || secim=='a'){
							system("CLS");
							main();}//if

						else if(secim=='Q' || secim=='q'){
							system("CLS");
							printf(cikb);
							printf(cika);
							exit(2);}//else if

					break;

					default:

						printf("\n\n  Hatali secim yaptiniz.\a");
						printf(gelismiss);
						secim=getch();

						if(secim=='A' || secim=='a'){
							system("CLS");
							main();}//if

						else if(secim=='Q' || secim=='q'){
							system("CLS");
							printf(cikb);
							printf(cika);
							exit(2);}//else if

						break;

				}//switch
				
				break;

			case '9':
				
				derece=0;
				gecici=0;
				
				system("CLS");
				printf("\n\n  ---------------DEMIR Hesap makinesi (Trigonometri)---------------");

				system("CLS");
				printf("\n\n  ---------------DEMIR Hesap makinesi (Trigonometri)---------------");
				printf("\n\n  derece giriniz : ");
				scanf("%f",&derece);
				gecici=derece;
				
				derece *= PI/180.0;

				system("CLS");
				printf("\n\n  ---------------DEMIR Hesap makinesi (Trigonometri)---------------");
				printf("\n\n  %.2lf Derecenin Ogrenmek istediginiz Trigonometrik degeri\n\n  1) Sinus\n\n  2) Kosinus\n\n  3) Tanjant\n\n  4) Kotanjant\n\n  5) sekant\n\n  6) kosekant\n\n  G) Gelismis Mod\n\n  A) Ana menu\n\n  Q) Cikis\n",gecici);
				printf("\n  Seciminiz= ");
				secim=getch();

				if (secim=='Q' || secim=='q'){
					system("CLS");
					printf(cikb);
					printf(cika);
					exit(2);}//if

				else if(secim=='a' || secim=='A'){
					system("CLS");
					main();}//elseif

				else if(secim=='G' || secim=='g'){
					system("CLS");
					gelismis();	}//else if

				switch(secim){

					case '1':

						system("CLS");
						printf("\n\n  ---------------DEMIR Hesap makinesi (Sinus)---------------");
						printf("\n\n  Sinus %f = %.9f",gecici,sin(derece));
						printf(gelismiss);
						secim=getch();

						if(secim=='A' || secim=='a'){
							system("CLS");
							main();}//if

						else if(secim=='Q' || secim=='q'){
							system("CLS");
							printf(cikb);
							printf(cika);
							exit(2);}//else if

			   			break;

			   		case '2':

						system("CLS");
						printf("\n\n  ---------------DEMIR Hesap makinesi (Kosinus)---------------");
						printf("\n\n  Kosinus %f = %.9f",gecici,cos(derece));
						printf(gelismiss);
						secim=getch();

						if(secim=='A' || secim=='a'){
							system("CLS");
							main();}//if

						else if(secim=='Q' || secim=='q'){
							system("CLS");
							printf(cikb);
							printf(cika);
							exit(2);}//else if

			   			break;

			   		case '3':

						system("CLS");
						printf("\n\n  ---------------DEMIR Hesap makinesi (Tanjant)---------------");
						printf("\n\n  Tanjant %f = %.9f\n",gecici,sin(derece)/cos(derece));
						printf(gelismiss);
						secim=getch();

						if(secim=='A' || secim=='a'){
							system("CLS");
							main();}//if

						else if(secim=='Q' || secim=='q'){
							system("CLS");
							printf(cikb);
							printf(cika);
							exit(2);}//else if

			   			break;

			   		case '4':

						system("CLS");
						printf("\n\n  ---------------DEMIR Hesap makinesi (Kotanjant)---------------");
						printf("\n\n  Kotanjant %f = %.9f",gecici,cos(derece)/sin(derece));
						printf(gelismiss);
						secim=getch();

						if(secim=='A' || secim=='a'){
							system("CLS");
							main();}//if

						else if(secim=='Q' || secim=='q'){
							system("CLS");
							printf(cikb);
							printf(cika);
							exit(2);}//else if

			   			break;
			   		
			   		case '5':

						system("CLS");
						printf("\n\n  ---------------DEMIR Hesap makinesi (sekant)---------------");
						printf("\n\n  sekant %f = %.9f",gecici,1.00/cos(derece));
						printf(gelismiss);
						secim=getch();

						if(secim=='A' || secim=='a'){
							system("CLS");
							main();}//if

						else if(secim=='Q' || secim=='q'){
							system("CLS");
							printf(cikb);
							printf(cika);
							exit(2);}//else if

			   			break;
			   			
			   		case '6':

						system("CLS");
						printf("\n\n  ---------------DEMIR Hesap makinesi (kosekant)---------------");
						printf("\n\n  Kosekant %f = %.9f",gecici,1.00/sin(derece));
						printf(gelismiss);
						secim=getch();

						if(secim=='A' || secim=='a'){
							system("CLS");
							main();}//if

						else if(secim=='Q' || secim=='q'){
							system("CLS");
							printf(cikb);
							printf(cika);
							exit(2);}//else if

			   			break;
			   			
			   		

			   		default:

						printf("\a");
						printf("\n\n  Hatali secim yaptiniz");
						printf(gelismiss);
						secim=getch();

						if(secim=='A' || secim=='a'){
							system("CLS");
							main();}//if

						else if(secim=='Q' || secim=='q'){
							system("CLS");
							printf(cikb);
							printf(cika);
							exit(2);}//else if

			   			break;

				}//switch2
		}//switch1
    }//ana for
}//gelismis
