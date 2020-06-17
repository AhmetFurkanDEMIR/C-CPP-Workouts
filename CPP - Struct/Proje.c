// C programlama dili ile Pointers, Strucks kullanarak ogrenci bilgi sistemi programi

#include <stdio.h>
#include <stdlib.h>

struct dersler{
	
	char ders_adi[10];
	float final;
	float vize;
	
};

typedef struct{
	
	char ad[20];
	char soy_ad[20];
	int numara;
	int ders_sayisi;
	
	struct dersler *ders;
	
}ogrenci_bilgi_sistemi;

void durum(ogrenci_bilgi_sistemi a){
	
	int i;
	
	printf("\n\n   --- Ogrenci Ad, Soyad = %s %s ---",a.ad,a.soy_ad);
	
	for(i=0;i<a.ders_sayisi;i++){
		
		printf("\n\n      --- %d. Ders ---",i+1);
		
		printf("\n\n      Ders adi = %s ",(a.ders+i)->ders_adi);
		
		float final = (a.ders+i)->final*0.6;
		float vize = (a.ders+i)->vize*0.4;
		float toplam =vize+final;
		
		if(toplam<60){
			printf("\n\n      Dersi Gecemedi X - Ders ortalamasi = %.2f -\n",toplam);
		}
		
		if(toplam>=60){
			printf("\n\n      Dersi Gecti + - Ders ortalamasi = %.2f -\n",toplam);
		}
	
	}
}

int araa(char *test,ogrenci_bilgi_sistemi a,int boyut){
	
	int tekrar=0;
	int k=0,i=0,z=0;
	
	for(z=0;*(a.ad+z)!='\0';z++){
				
		}
			
	for(i=0;i<boyut+2;i++){
							
		if(z!=boyut){
			break;
		}
						
		if(k==boyut){
			tekrar++;
			break;
		}
						
		if(*(a.ad+i)==*(test+i)){
							
			k++;
		}
						
		if(*(a.ad+i)!=*(test+i)){
							
			k=0;
		}
						
		if(tekrar==1){
							
			break;
		}
						
	}
							
	if(tekrar==1){
		return 1;
								
	}
	
	return 0;
}

void listele(ogrenci_bilgi_sistemi a){
	
	int i;
	
	printf("\n\n   Ad = %s ",a.ad);
	printf("\n\n   Soyad = %s ",a.soy_ad);
	printf("\n\n   Ogrenci numara = %d ",a.numara);
	printf("\n\n   Ders sayisi = %d",a.ders_sayisi);
	
	printf("\n");
	
	for(i=0;i<a.ders_sayisi;i++){
		
		printf("\n\n      --- %d. Ders ---",i+1);
		
		printf("\n\n      Ders adi = %s ",(a.ders+i)->ders_adi);
		
		printf("\n\n      Final notu = %.2f",(a.ders+i)->final);
		
		printf("\n\n      Vize notu = %.2f\n",(a.ders+i)->vize);
		
	}
	
}

int main(){
	
	system("title Öðrenci Bilgi sistemi");
	system("color 30");
	Beep(850, 600);
	
	int ogrenci_sayi,i,j,secim;
	ogrenci_bilgi_sistemi *obs;
	char *test;
	
	test = (char *)calloc(sizeof(char),20);
	
	printf("\n\n   Kac adet ogrenci girmek istiyorsunuz = ");
	scanf("%d",&ogrenci_sayi);
	
	obs = (ogrenci_bilgi_sistemi *)calloc(sizeof(ogrenci_bilgi_sistemi),ogrenci_sayi);
	
	system("cls");
	
	for(i=0;i<ogrenci_sayi;i++){
		
		system("cls");
		
		printf("\n\n   --- %d. Ogrenci bilgileri girisi ---",i+1);
		
		printf("\n\n      Ad = ");
		scanf("%s",(obs+i)->ad);
		
		printf("\n\n      SoyAd = ");
		scanf("%s",(obs+i)->soy_ad);
		
		printf("\n\n      Numara = ");
		scanf("%d",&(obs+i)->numara);
		
		printf("\n\n      Ders sayisi = ");
		scanf("%d",&(obs+i)->ders_sayisi);
		
		(obs+i)->ders = calloc(sizeof(*obs->ders),(obs+i)->ders_sayisi);
		
		for(j=0;j<(obs+i)->ders_sayisi;j++){
			
			printf("\n\n         --- %d. ders ---",j+1);
			
			printf("\n\n         Ders Adi = ");
			scanf("%s",((obs+i)->ders+j)->ders_adi);
			
			printf("\n\n         Final Notu = ");
			scanf("%f",&((obs+i)->ders+j)->final);
			
			printf("\n\n         Vize Notu = ");
			scanf("%f",&((obs+i)->ders+j)->vize);
		}
	}
	
	for(;;){
		
		system("cls");
		
		printf("\n\n   --- Ogrenci bilgi sistemi ---\n\n   1) Ogrenci ara\n\n   2) Durum goster\n\n   3) Listele\n\n   Q) cikis\n\n   Secim =");
		secim = getch();
		
		int kontrol=0,boyut,c=0;
		
		switch(secim){
			
			case '1':
				
				system("cls");
				
				printf("\n\n   Aramak istediginiz ogrenci adi = ");
				scanf("%s",test);
				
				for(i=0;*(test+i)!='\0';i++){
				
				}
				
				boyut =i;
				system("cls");
				printf("\n\n   ----------------------------------");
				
				for(i=0;i<ogrenci_sayi;i++){
					
				kontrol = araa(test,*(obs+i),boyut);
				
				if(kontrol==1){
					c++;
					listele(*(obs+i));
					printf("\n\n   ----------------------------------");
					
				}
				
					}
					
				if(c==0){
					printf("\n\n      Aradiginiz kriterde ogrenci bulunamadi");
				}
					
				printf("\n\n\n      --- Ana menuye donmek icin herhangi bir tusa basiniz --- ");
				getch();
				
				
				break;
				
			case '2':
				
				system("cls");
				
				for(i=0;i<ogrenci_sayi;i++){
					
					durum(*(obs+i));
					
				}
				
				printf("\n\n\n      --- Ana menuye donmek icin herhangi bir tusa basiniz --- ");
				getch();
				
				break;
			
			
			case '3':
				
				system("cls");
				
				for(i=0;i<ogrenci_sayi;i++){
					
					printf("\n\n   ------ %d. Ogrenci Bilgileri ------",i+1);
					
					listele(*(obs+i));
					
				}
				
				printf("\n\n\n      --- Ana menuye donmek icin herhangi bir tusa basiniz --- ");
				getch();
				
				break;
				
			case 'q':
				
				system("cls");
				exit(2);
				
				break;
				
			case 'Q':
				
				system("cls");
				exit(2);
				
				break;
				
		}
	}
	
}
