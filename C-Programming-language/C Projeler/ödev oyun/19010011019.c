// 19010011019 Ahmet Furkan DEMÝR
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <locale.h>

char ana[400];

int id[100];

int skor[100];

void kaydet(){
	
	int i;
	
	FILE *ptr;

    ptr = fopen("Veri.demir","w");
    fscanf(ptr,"%s",&"1");
    fprintf(ptr,"%s","1");
    fclose(ptr);
	
	for(i=0; i<101; i++){

    	ptr = fopen("Veri.demir","a");
        fscanf(ptr,"%s",&",");
        fprintf(ptr,"%s",",");
        fclose(ptr);

        ptr = fopen("Veri.demir","a");
        fscanf(ptr,"%d",&*(id+i));
        fprintf(ptr,"%d",*(id+i));
        fclose(ptr);

        ptr = fopen("Veri.demir","a");
        fscanf(ptr,"%s",&",");
        fprintf(ptr,"%s",",");
        fclose(ptr);

        ptr = fopen("Veri.demir","a");
        fscanf(ptr,"%d",&*(skor+i));
        fprintf(ptr,"%d",*(skor+i));
        fclose(ptr);
        
    }
	
}

int server(){
	
	FILE *ptr;

    int i;

    ptr = fopen("Veri.demir","r");

    fscanf(ptr,"%s",&ana);
    fprintf(ptr,"%s",ana);

    fclose(ptr);
	
	
	return 0;
}

void parcala(){
	
	int i;

    char *id1;
    char *skor1;
	
	const char split[2]=",";

    strtok(ana,split);

    for(i=0; i<101; i++)
    {

        id1 = strtok(NULL,split);
        *(id+i) = atoi(id1);

        skor1 = strtok(NULL,split);
        *(skor+i) = atoi(skor1);
        
	}
	
}

int goster(){
	
	int i;
	
	for(i=0;skor[i]!=0;i++){
				
		printf("\n\n   %d id = %d skor",*(id+i),*(skor+i));
				
		}
			
	return 0;
}

int bos_indis(){
	
	int i=0;
	
	for(;;i++){
		
		if(*(skor+i)==0){
			break;
		}
		
	}
	
	return i;
}

int harfi(int sayi){

	char harfi;
		
	if(sayi==0){
		system("color b0");
		harfi='A';}
	
	else if(sayi==1){
		system("color b1");
		harfi='B';}
	
	else if(sayi==2){
		system("color b2");
		harfi='C';}
	
	else if(sayi==3){
		system("color b4");
		harfi='D';}
	
	else if(sayi==4){
		system("color b5");
		harfi='E';}
	
	else if(sayi==5){
		system("color b6");
		harfi='F';}
	
	else if(sayi==6){
		system("color b7");
		harfi='G';}
	
	else if(sayi==7){
		system("color b9");
		harfi='H';}
	
	else if(sayi==8){
		system("color b0");
		harfi='I';}
	
	else if(sayi==9){
		system("color b2");
		harfi='J';}
	
	else if(sayi==10){
		system("color b3");
		harfi='K';}
	
	else if(sayi==11){
		system("color b4");
		harfi='L';}
	
	else if(sayi==12){
		system("color b5");
		harfi='M';}
	
	else if(sayi==13){
		system("color b6");
		harfi='N';}
	
	else if(sayi==14){
		system("color b7");
		harfi='O';}
	
	else if(sayi==15){
		system("color b0");
		harfi='R';}
	
	else if(sayi==16){
		system("color b1");
		harfi='S';}
	
	else if(sayi==17){
		system("color b3");
		harfi='T';}
	
	else if(sayi==18){
		system("color b3");
		harfi='U';}
	
	else if(sayi==19){
		system("color b5");
		harfi='V';}
	
	else if(sayi==20){
		system("color b6");
		harfi='Y';}
	
	else if(sayi==21){
		system("color b7");
		harfi='Z';}
	
	return harfi;
}

int oyun_basla(char *add, int idd){
	
	int toplam=0;
	
	srand(time(NULL));
	system("color b4");
	system("cls");
	
	printf("\n\n   ---------- MisFortune ----------");
	printf("\n\n   Merhaba %s,\n\n   Bu bolumde 4x4 'luk (16 harften olusan) bir matriste bir harf tahmin edeceksin.",add);
	printf("\n\n   Her dogru tahminine +8 puan ile carparak, yanis tahminine ise -3 puan alarak bolumu tamamlayacaksin.");
	printf("\n\n   Devam etmek icin herhangi bir tusa basiniz. ");
	getch();
	
	char harf[1];
	

	int tekrar=0;
	
	system("cls");
	printf("\n\n   ---------- MisFortune ----------");
	printf("\n\n   Bir harf giriniz (Buyuk kucuk harf hassaligi yoktur A=a) = ");
	scanf("%s",&harf);
	
	int fark = 'a' - 'A';
	
	int i=0,j=0,k=0;

        
    if (*(harf) >= 'a' && *(harf) <= 'z') {
        *(harf) -= fark;
	}
        
      
    
	char matris1[4][4];
	
	system("cls");
	printf("\n\n   ---------- MisFortune ----------");
	printf("\n\n");
	
	for(i=0;i<4;i++){
		
		for(j=0;j<4;j++){
			
			*(*(matris1+i)+j) = harfi(rand()%22);
			
			printf("   %c",*(*(matris1+i)+j));
			
			if(*(*(matris1+i)+j)==*(harf+0)){
				tekrar++;
			}
			
			
		}
		
		printf("\n\n");
		
	}
	
	system("color b4");
	printf("\n\n   Girdigin harf = %c",harf[0]);
	
    if(tekrar>0){
    	
    	printf("\n\n   Tebrikler. %d defa dogru tahmin yaptiniz :)",tekrar);
    	printf("\n\n   Bu bolumden kazandiginiz puan = %d",tekrar*8);
    	toplam=toplam+tekrar*8;
    	getch();
	}
    
    else{
    	
    	printf("\n\n   Malesef hic dogru tahmininiz yok :(");
    	printf("\n\n   Bu bolumden kazandiginiz puan = %d",-3);
    	toplam=toplam-3;
    	getch();
    	
	}
	
	char tahmin1[2];
	char matris2[6][6];
	
	int *ptrmatris2=matris2;
	int *ptrtahmin1=tahmin1;
	
	system("cls");
	printf("\n\n   ---------- MisFortune ----------");
	printf("\n\n   Bu bolumde 2 harfli bir kelime tahmin edeceksin.\n\n   Her dogru tahmini 10 ile carparak, yanlis tahminde ise -5 puan alacaksiniz Matris boyutu 6x6 (36 harf)");
    printf("\n\n   Devam etmek icin herhangi bir tusa basiniz. ");
    getch();
    
    system("cls");
	printf("\n\n   ---------- MisFortune ----------");
	printf("\n\n   iki harfli bir kelime giriniz (Buyuk kucuk harf hassaligi yoktur A=a) = ");
	scanf("%s",tahmin1);
	
    
	system("cls");
	printf("\n\n   ---------- MisFortune ----------");
	printf("\n\n");
    
    for(i=0;i<6;i++){
		
		for(j=0;j<6;j++){
			
			*(*(matris2+i)+j) = harfi(rand()%22);
			
			printf("   %c",*(*(matris2+i)+j));
			
			}
		
		printf("\n\n");
		
	}
	
	i=0;
	
	while (*(tahmin1+i) != '\0') {
        
        if (*(tahmin1+i) >= 'a' && *(tahmin1+i) <= 'z') {
            *(tahmin1+i) -= fark;
        }
        
        i++;
    }
    
    i=0;
    j=0;
    k=0;
    int c=0;
    tekrar=0;
	
	for(i=0;i<6;i++){
		
		for(j=0;j<6;j++){
			
			if(c==2 || j==6){
				c=0;
			}
			
			if(*(*(matris2+i)+j)==*(tahmin1+c)){
				k++;
				}
				
			if(*(*(matris2+i)+j)!=*(tahmin1+c)){
				k=0;
				}
			
			if(k==2){
				tekrar++;
				printf("\n\n   %d. satir %d. sutun, Soldan saga",i+1,j);
			}
			
				
			c++;
			
			}
			
		
	}
	
	c=1;
	k=0;
	
	for(i=0;i<6;i++){
		
		for(j=0;j<6;j++){
			
			if(c<0 || j==5){
				c=1;
			}
			
			if(*(*(matris2+i)+j)==*(tahmin1+c)){
				k++;
				}
				
			if(*(*(matris2+i)+j)!=*(tahmin1+c)){
				k=0;
				}
			
			if(k==2){
				tekrar++;
				printf("\n\n   %d. satir %d. sutun, Sagdan sola",i+1,j+1);
			}
			
			c--;	
			
			}
		
	}
	
	c=0;
	k=0;
	
	
	for(i=0;i<6;i++){
		
		for(j=0;j<6;j++){
			
			if(c==2 || j==5){
				c=0;
			}
			
			if(*(*(matris2+j)+i)==*(tahmin1+c)){
				k++;
				}
				
			if(*(*(matris2+j)+i)!=*(tahmin1+c)){
				k=0;
				}
			
			if(k==2){
				tekrar++;
				printf("\n\n   %d. satir %d. sutun, Yukardan asagiya",j+1,i+1);
			}
				
			c++;
			
			}
			
	}
	
	
	c=1;
	k=0;
	
	for(i=0;i<6;i++){
		
		for(j=0;j<6;j++){
			
			if(c<0 || j==5){
				c=1;
			}
			
			if(*(*(matris2+j)+i)==*(tahmin1+c)){
				k++;
				}
				
			if(*(*(matris2+j)+i)!=*(tahmin1+c)){
				k=0;
				}
			
			if(k==2){
				tekrar++;
				printf("\n\n   %d. satir %d. sutun, asagidan yukari",j+1,i+1);
			}
			
			c--;	
			
			}
		
	}
	
	system("color b4");
	printf("\n\n   Tahmin ettiginiz kelime = %s ",tahmin1);
	
	if(tekrar>0){
    	
    	toplam=toplam+tekrar*10;
    	
    	printf("\n\n   Tebrikler. %d defa dogru tahmin yaptiniz :)",tekrar);
    	printf("\n\n   Toplam puan = %d",toplam);	
    	getch();
	}
    
    else{
    	
    	toplam=toplam-5;
    	
    	printf("\n\n   Malesef hic dogru tahmininiz yok :(");
    	printf("\n\n   Toplam puan = %d",toplam);
    	getch();
	}
	
	system("cls");
	printf("\n\n   ---------- MisFortune ----------");
	printf("\n\n   Son bolumde ise, istediginiz bir kelime (en az 2 harften olusan!!),\n\n   istediginiz boyuttaki bir matriste aranacaktir.");
	printf("\n\n   Matris boyutu ve kelime uzunlugu ile dogru orantili puan alacaksiniz.");
	printf("\n\n   Devam etmek icin herhangi bir tusa basiniz. ");
	getch();
	
	int satir,sutun;
	char tahminson[10];
	
	system("cls");
	printf("\n\n   ---------- MisFortune ----------");
	printf("\n\n   Matris satir boyutu = ");
	scanf("%d",&satir);
	
	printf("\n\n   Matris sutun boyutu = ");
	scanf("%d",&sutun);
	
	printf("\n\n   Matriste aramak istediginiz kelime = ");
	scanf("%s",&tahminson);
	
	i=0;
	
	while (*(tahminson+i) != '\0') {
        
        if (*(tahminson+i) >= 'a' && *(tahminson+i) <= 'z') {
            *(tahminson+i) -= fark;
        }
        
        i++;
    }
	
	int tahm=i;
	
	if(tahm<2){
		
		printf("\n\n   en az 2 harften olusan!! harf girecektiniz.");
		printf("\n\n   Ana menuye donmek icin herhangi bir harfe basiniz.");
		getch();
		main();

	}
	
	char matriss[satir][sutun];
	
	system("cls");
	printf("\n\n   ---------- MisFortune ----------");
	
	printf("\n\n");
	
	for(i=0;i<satir;i++){
		
		for(j=0;j<sutun;j++){
			
			*(*(matriss+i)+j) = harfi(rand()%22);
			
			printf("   %c",*(*(matriss+i)+j));
		}
		
		printf("\n\n");
		
	}
	
	
	i=0;
    j=0;
    k=0;
    c=0;
    tekrar=0;
	
	for(i=0;i<satir;i++){
		
		for(j=0;j<sutun;j++){
			
			if(c==tahm || j==sutun){
				c=0;
			}
			
			if(*(*(matriss+i)+j)==*(tahminson+c)){
				k++;
				}
				
			if(*(*(matriss+i)+j)!=*(tahminson+c)){
				k=0;
				}
			
			if(k==tahm){
				tekrar++;
				
			}
			
				
			c++;
			
			}
			
		
	}
	
	c=1;
	k=0;
	
	for(i=0;i<satir;i++){
		
		for(j=0;j<sutun;j++){
			
			if(c<0 || j==sutun){
				c=tahm;
			}
			
			if(*(*(matriss+i)+j)==*(tahminson+c)){
				k++;
				}
				
			if(*(*(matriss+i)+j)!=*(tahminson+c)){
				k=0;
				}
			
			if(k==tahm){
				tekrar++;
				printf("\n\n   %d. satir %d. sutun, Sagdan sola",i+1,j+1);
			}
			
			c--;	
			
			}
		
	}
	
	c=0;
	k=0;
	
	
	for(i=0;i<satir;i++){
		
		for(j=0;j<sutun;j++){
			
			if(c==tahm || j==sutun){
				c=0;
			}
			
			if(*(*(matriss+j)+i)==*(tahminson+c)){
				k++;
				}
				
			if(*(*(matriss+j)+i)!=*(tahminson+c)){
				k=0;
				}
			
			if(k==tahm){
				tekrar++;
				printf("\n\n   %d. satir %d. sutun, Yukardan asagiya",j+1,i+1);
			}
				
			c++;
			
			}
			
	}
	
	c=1;
	k=0;
	
	for(i=0;i<satir;i++){
		
		for(j=0;j<sutun;j++){
			
			if(c<0 || j==5){
				c=tahm;
			}
			
			if(*(*(matriss+j)+i)==*(tahminson+c)){
				k++;
				}
				
			if(*(*(matriss+j)+i)!=*(tahminson+c)){
				k=0;
				}
			
			if(k==tahm){
				tekrar++;
				printf("\n\n   %d. satir %d. sutun, asagidan yukari",j+1,i+1);
			}
			
			c--;	
			
			}
		
	}
	
	system("color b4");
	
	printf("\n\n   Tahmin ettiginiz kelime = %s ",tahminson);
	
	if(tekrar>0){
		
		printf("\n\n   Tebrikler %d defa dogru tahmin yaptiniz :)",tekrar);
		toplam=(toplam+(tekrar*(tahm*10)))/(satir+sutun);
		printf("\n\n   Toplam puaniniz = %d",toplam);
		printf("\n\n   Oyun bitmistir. Ana menuye donmek icin herhangi bir harfe basiniz.");
		getch();
		
	}
	
	else{
		
		printf("\n\n   Malesef hic dogru tahmin yapamadin :)");
		toplam=toplam-5;
		printf("\n\n   Toplam puaniniz = %d",toplam);
		
		int indis = bos_indis();
		
		*(id+indis) = idd;
		*(skor+indis) = toplam;
		
		kaydet();
		
		printf("\n\n   Oyun bitmistir. Ana menuye donmek icin herhangi bir harfe basiniz.");
		Beep(900, 900);
		getch();
	}
    
}


int main(){
	
	system("color b4");
	Beep(800, 400);
	
	system("title MisFortune game");
	
	server();
	
	parcala();
	
	while(1){
	
	int i,j;
	
	system("cls");
	
	int secim;
	char ad[20];
	int *add=ad;
	int idd;
	
	while(idd<=999){
	
		asd : system("cls");
		printf("\n\n   ---------- MisFortune ----------");
		printf("\n\n   Sizi diger oyunculardan ayirabilmek icin bagimsiz bir id giriniz (en az 4 basamkali) = ");
		scanf("%d",&idd);
		
		if(idd==*(id+i)){
			goto asd;
		}
		
		i++;
		
	}
	
	printf("\n\n   Size nasil hitap edeyim = ");
	scanf("%s",ad);
	
	system("cls");
	printf("\n\n   ---------- MisFortune ----------");
	
	printf("\n\n   1) Basla\n\n   2) Oyun hakkinda\n\n   3) Skorlar\n\n   Q) Cikis\n\n   Secim = ");
	secim = getch();
	
	switch(secim){
		
		case '1':
			
			oyun_basla(add,idd);
			break;
			
		case '2':
			
			system("cls");
			printf("\n\n   ---------- MisFortune ----------");
			printf("\n\n   Oyun tahmine ve sansa dayali bir oyundur.\n\n\n   1. bolumde bir harf tahmin edeceksiniz her dogru yanit icin +8 puan alacaksiniz,\n\n   yanlis yanitta ise -3 puan alacaksiniz.");
			printf("\n\n\n   2. bolumde 2 harfli bir kelime gireceksiniz\n\n   her dogru tahminde +5 puan alacaksiniz,\n\n   yanlis tahminde ise -5 puan alacaksiniz.");
			printf("\n\n\n   3. soruda puanlama soyle yapilmaktadir (tekrar_etme*(kelime_uzunlugu*10)))/(satir+sutun)");
			printf("\n\n\n   Devam etmek icin herhangi bir harfe basiniz.");
			getch();
			
			break;
			
		case '3':
			
			system("cls");
			printf("\n\n   ---------- MisFortune ----------");
			goster();
			printf("\n\n\n   Devam etmek icin herhangi bir harfe basiniz.");
			
			getch();
			
			break;
			
		case 'q':
			
			system("cls");
			printf("\n\n   ---------- MisFortune ----------");
			system("color 4b");
			printf("\n\n   :\( ");
			break;
			
		case 'Q':
			
			system("cls");
			printf("\n\n   ---------- MisFortune ----------");
			system("color 4b");
			printf("\n\n   :\( ");
			break;
		
	}
	
}
	
	return 0;
}
