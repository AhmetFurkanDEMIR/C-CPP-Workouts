#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int id[100];
int sifre[100];
int depozito[100];
int index[100];
int borc[100];
char ana[10000];

int bos_indis(){
	
	int i;
	
	for(i=0;i<101;i++){
		
		if(id[i]==0){
			break;
		}
		
	}
	
	return i;
}

int parcala()
{

    int i;

    char *id1;
    char *sifre1;
    char *depozito1;
    char *index1;
    char *borc1;

    const char split[2]=",";

    strtok(ana,split);

    for(i=0; i<101; i++)
    {

        id1 = strtok(NULL,split);
        id[i] = atoi(id1);

        sifre1 = strtok(NULL,split);
        sifre[i] = atoi(sifre1);

        depozito1 = strtok(NULL,split);
        depozito[i] = atoi(depozito1);

        index1 = strtok(NULL,split);
        index[i] = atoi(index1);

        borc1= strtok(NULL,split);
        borc[i] = atoi(borc1);

    }

    return 0;
}

int kullanici(int x,int y)
{

    while(1)
    {
		
        char secim;
        int i,eski,yeni,yeni1;
        int yindex;

        FILE *ptr;

        ptr = fopen("Veri.demir","w");
        fscanf(ptr,"%s",&"1");
        fprintf(ptr,"%s","1");
        fclose(ptr);

        for(i=0; i<101; i++)
        {

            ptr = fopen("Veri.demir","a");
            fscanf(ptr,"%s",&",");
            fprintf(ptr,"%s",",");
            fclose(ptr);

            ptr = fopen("Veri.demir","a");
            fscanf(ptr,"%d",&id[i]);
            fprintf(ptr,"%d",id[i]);
            fclose(ptr);

            ptr = fopen("Veri.demir","a");
            fscanf(ptr,"%s",&",");
            fprintf(ptr,"%s",",");
            fclose(ptr);

            ptr = fopen("Veri.demir","a");
            fscanf(ptr,"%d",&sifre[i]);
            fprintf(ptr,"%d",sifre[i]);
            fclose(ptr);

            ptr = fopen("Veri.demir","a");
            fscanf(ptr,"%s",&",");
            fprintf(ptr,"%s",",");
            fclose(ptr);

            ptr = fopen("Veri.demir","a");
            fscanf(ptr,"%d",&depozito[i]);
            fprintf(ptr,"%d",depozito[i]);
            fclose(ptr);

            ptr = fopen("Veri.demir","a");
            fscanf(ptr,"%s",&",");
            fprintf(ptr,"%s",",");
            fclose(ptr);

            ptr = fopen("Veri.demir","a");
            fscanf(ptr,"%d",&index[i]);
            fprintf(ptr,"%d",index[i]);
            fclose(ptr);

            ptr = fopen("Veri.demir","a");
            fscanf(ptr,"%s",&",");
            fprintf(ptr,"%s",",");
            fclose(ptr);

            ptr = fopen("Veri.demir","a");
            fscanf(ptr,"%d",&borc[i]);
            fprintf(ptr,"%d",borc[i]);
            fclose(ptr);

        }

        system("cls");
        system("color b4");

        printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ( Id : %d ) ----------",y);
        printf("\n\n  1) Hesap borcu\n\n  2) Kullanim hesapla\n\n  3) Sifre degistir\n\n  H) Hesap sil\n\n  A) Ana menu\n\n  Q) Cikis\n\n   Seciminiz = ");

        secim = getch();

        if(secim=='1')
        {

            if(borc[x]>=depozito[x])
            {

                system("cls");
                Beep(700, 500);
                system("color c0");
                printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
                printf("\n\n  Hesabinizin borcu Depozito ucretinizi gecmistir aboneliginizi sonlandiriyoruz...");

                id[x]=0;
                sifre[x]=0;
                depozito[x]=0;
                index[x]=0;
                borc[x]=0;

                FILE *ptr;

                ptr = fopen("Veri.demir","w");
                fscanf(ptr,"%s",&"1");
                fprintf(ptr,"%s","1");
                fclose(ptr);

                for(i=0; i<101; i++)
                {

                    ptr = fopen("Veri.demir","a");
                    fscanf(ptr,"%s",&",");
                    fprintf(ptr,"%s",",");
                    fclose(ptr);

                    ptr = fopen("Veri.demir","a");
                    fscanf(ptr,"%d",&id[i]);
                    fprintf(ptr,"%d",id[i]);
                    fclose(ptr);

                    ptr = fopen("Veri.demir","a");
                    fscanf(ptr,"%s",&",");
                    fprintf(ptr,"%s",",");
                    fclose(ptr);

                    ptr = fopen("Veri.demir","a");
                    fscanf(ptr,"%d",&sifre[i]);
                    fprintf(ptr,"%d",sifre[i]);
                    fclose(ptr);

                    ptr = fopen("Veri.demir","a");
                    fscanf(ptr,"%s",&",");
                    fprintf(ptr,"%s",",");
                    fclose(ptr);

                    ptr = fopen("Veri.demir","a");
                    fscanf(ptr,"%d",&depozito[i]);
                    fprintf(ptr,"%d",depozito[i]);
                    fclose(ptr);

                    ptr = fopen("Veri.demir","a");
                    fscanf(ptr,"%s",&",");
                    fprintf(ptr,"%s",",");
                    fclose(ptr);

                    ptr = fopen("Veri.demir","a");
                    fscanf(ptr,"%d",&index[i]);
                    fprintf(ptr,"%d",index[i]);
                    fclose(ptr);

                    ptr = fopen("Veri.demir","a");
                    fscanf(ptr,"%s",&",");
                    fprintf(ptr,"%s",",");
                    fclose(ptr);

                    ptr = fopen("Veri.demir","a");
                    fscanf(ptr,"%d",&borc[i]);
                    fprintf(ptr,"%d",borc[i]);
                    fclose(ptr);

                }


                printf("\n\n  Ana menuye donmek icin herhangi bir tusa basiniz.\n\n");
                getch();

                main();
            }

            else
            {

                system("cls");
                printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");

                printf("\n\n  Depozitonuz = %d",depozito[x]);
                printf("\n\n  Borcunuz = %d",borc[x]);
                printf("\n\n  Borcunuz Depozitonuzu gecerse hesabinizi kapatmak zorunda kaliriz !!!");
                printf("\n\n  Bir onceki menuye donmek icin herhangi bir tusa basiniz.\n\n");
                getch();


            }

        }

        else if(secim=='2')
        {

            system("cls");
            printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------\n\n  Eski indexiniz = %d",index[x]);
            printf("\n\n  Yeni index = ");
            scanf("%d",&yindex);

            if(index[x]>=yindex)
            {

                system("cls");
                Beep(700, 500);
                system("color c0");
                printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
                printf("\n\n  Son index ilk indexe esit veya kucuk olamaz!");

                printf("\n\n  Bir onceki menuye donmek icin herhangi bir tusa basiniz.\n\n");
                getch();
                kullanici(x,y);

            }

            int borcc = yindex-index[x];
            borcc=borcc*3;
            borc[x]+=borcc;
            
            system("cls");
            printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
            printf("\n\n  Yeni borcunuz = %d",borcc);
            printf("\n\n  Bir onceki menuye donmek icin herhangi bir tusa basiniz.\n\n");
            getch();

        }
        
        else if(secim=='3'){
        	
        	system("cls");
            printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
            
            printf("\n\n  Eski sifrenizi giriniz = ");
            scanf("%d",&eski);
            
            if(sifre[x]!=eski){
            	
            	system("cls");
                Beep(700, 500);
                system("color c0");
                printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
                printf("\n\n  Sifreler uyusmamaktadir!");

                printf("\n\n  Bir onceki menuye donmek icin herhangi bir tusa basiniz.\n\n");
                getch();
                kullanici(x,y);
            	
			}
			
			printf("\n\n  Yeni sifre = ");
			scanf("%d",&yeni);
			printf("\n\n  Yeni sifre = ");
			scanf("%d",&yeni1);
			
			if(yeni!=yeni1){
				
				system("cls");
                Beep(700, 500);
                system("color c0");
                printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
                printf("\n\n  Yeni Sifreler uyusmamaktadir!");

                printf("\n\n  Bir onceki menuye donmek icin herhangi bir tusa basiniz.\n\n");
                getch();
                kullanici(x,y);
				
			}
			
			else if(yeni<1000){
				
				system("cls");
                Beep(700, 500);
                system("color c0");
                printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
                printf("\n\n  Yeni sifre EN AZ 4 basamakli bir sayi olmali!");

                printf("\n\n  Bir onceki menuye donmek icin herhangi bir tusa basiniz.\n\n");
                getch();
                kullanici(x,y);
			}
			
			else if(sifre[x]==yeni){
				
				system("cls");
                Beep(700, 500);
                system("color c0");
                printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
                printf("\n\n  Eski ve Yeni sifreler Ayni olmamali!");

                printf("\n\n  Bir onceki menuye donmek icin herhangi bir tusa basiniz.\n\n");
                getch();
                kullanici(x,y);
				
			}
			
			else{
			
			
			sifre[x] = yeni;
			
			system("cls");
            printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
            printf("\n\n  Sifre basariyla degistirilmistir...");
            printf("\n\n  Bir onceki menuye donmek icin herhangi bir tusa basiniz.\n\n");
            getch();
        }
			
        	
        	
		}
        
        else if(secim=='h' || secim=='H'){
        	
        	system("cls");
            Beep(700, 500);
            system("color c0");
            printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
            printf("\n\n  Sifre = ");
            scanf("%d",&i);
            
			if(sifre[x]!=i){
			
			Beep(700, 500);	
			system("cls");
            printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
            printf("\n\n  Hatali sifre...");
            printf("\n\n  Bir onceki menuye donmek icin herhangi bir tusa basiniz.\n\n");
            getch();
            kullanici(x,y);
				
			}
			
			printf("\n\n  Hesap silme islemini onayliyormusunuz (E/H) = ");
			scanf("%s",&secim);
			
			if(secim=='h' || secim=='H'){
				kullanici(x,y);
			}
			
			else if(secim=='e' || secim=='E'){
				
				id[x]=0;
                sifre[x]=0;
                depozito[x]=0;
                index[x]=0;
                borc[x]=0;

                FILE *ptr;

                ptr = fopen("Veri.demir","w");
                fscanf(ptr,"%s",&"1");
                fprintf(ptr,"%s","1");
                fclose(ptr);

                for(i=0; i<101; i++)
                {

                    ptr = fopen("Veri.demir","a");
                    fscanf(ptr,"%s",&",");
                    fprintf(ptr,"%s",",");
                    fclose(ptr);

                    ptr = fopen("Veri.demir","a");
                    fscanf(ptr,"%d",&id[i]);
                    fprintf(ptr,"%d",id[i]);
                    fclose(ptr);

                    ptr = fopen("Veri.demir","a");
                    fscanf(ptr,"%s",&",");
                    fprintf(ptr,"%s",",");
                    fclose(ptr);

                    ptr = fopen("Veri.demir","a");
                    fscanf(ptr,"%d",&sifre[i]);
                    fprintf(ptr,"%d",sifre[i]);
                    fclose(ptr);

                    ptr = fopen("Veri.demir","a");
                    fscanf(ptr,"%s",&",");
                    fprintf(ptr,"%s",",");
                    fclose(ptr);

                    ptr = fopen("Veri.demir","a");
                    fscanf(ptr,"%d",&depozito[i]);
                    fprintf(ptr,"%d",depozito[i]);
                    fclose(ptr);

                    ptr = fopen("Veri.demir","a");
                    fscanf(ptr,"%s",&",");
                    fprintf(ptr,"%s",",");
                    fclose(ptr);

                    ptr = fopen("Veri.demir","a");
                    fscanf(ptr,"%d",&index[i]);
                    fprintf(ptr,"%d",index[i]);
                    fclose(ptr);

                    ptr = fopen("Veri.demir","a");
                    fscanf(ptr,"%s",&",");
                    fprintf(ptr,"%s",",");
                    fclose(ptr);

                    ptr = fopen("Veri.demir","a");
                    fscanf(ptr,"%d",&borc[i]);
                    fprintf(ptr,"%d",borc[i]);
                    fclose(ptr);

                }
				
				Beep(700, 500);	
				system("cls");
            	printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
				printf("\n\n  Hesabiniz basariyla silinmistir.");
				printf("\n\n  Ana menuye donmek icin herhangi bir tusa basiniz.\n\n");
            	getch();
            	main();
				
				
			}
        	
        	
        	
		}
        
        else if(secim=='a' || secim=='A'){
        	main();
		}
		
		else if(secim=='Q' || secim=='q'){
        	
        	system("cls");
            Beep(700, 500);
            system("color c0");
            printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
            exit(2);
        	
		}

    }//while


    return 0;

}

server()
{

    FILE *ptr;

    int i;

    ptr = fopen("Veri.demir","r");

    fscanf(ptr,"%s",&ana);
    fprintf(ptr,"%s",ana);

    fclose(ptr);

    return 0;
}

int main()
{
	
	system("title DEMIR Elektrik A.Þ");
	
    server();

    parcala();

    main1();

    return 0;
}

int main1()
{

    while(1)
    {

        int gecici,gecici1;
        char secim;
        char ds[10];
        int i,j;
        system("cls");
        system("color b0");

        printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
        printf("\n\n  1) Giris yap\n\n  2) Kayit ol\n\n  3) Teknik Destek\n\n  Q) Cikis\n\n   Secim = ");
        secim=getch();

		if(secim=='Q' || secim=='q'){
        	
        	system("cls");
            Beep(700, 500);
            system("color c0");
            printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
            exit(2);
        	
		}

        switch(secim)
        {

        case '1':

            system("cls");
            printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
            printf("\n\n  Kullanici id : ");
            scanf("%d",&gecici);

            if(gecici<=0)
            {

                system("cls");
                Beep(700, 500);
                system("color c0");
                printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
                printf("\n\n  ID sifirdan dan kucuk veya esit olamaz...");
                printf("\n\n  Ana menuye donmek icin herhangi bir tusa basiniz1\n");
                getch();
                main();

            }

            for(i=0; i<101; i++)
            {


                if(id[i]==gecici)
                {
                    j=i;
                    break;
                }

                else
                {
                    j=-3;
                }

            }

            if(j==-3)
            {

                system("cls");
                Beep(700, 500);
                system("color c0");
                printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
                printf("\n\n  %d Numarali ID Sistemimizde bulunmamaktadir.",gecici);
                printf("\n\n  Ana menuye donmek icin herhangi bir tusa basiniz.\n");
                getch();
                main();

            }

            else
            {

                system("cls");
                printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
                printf("\n\n  %d ID li hesabinizin sifresini giriniz. ",gecici);
                printf("\n\n  Sifre : ");
                scanf("%d",&gecici1);
                j=0;

                for(i=0; i<101; i++)
                {


                    if(sifre[i]==gecici1)
                    {
                        j=i;
                        break;
                    }

                    else
                    {
                        j=-3;
                    }

                }

                if(j==-3)
                {

                    system("cls");
                    Beep(700, 500);
                    system("color c0");
                    printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
                    printf("\n\n  %d ID li hesap sifresini yanlis girdiniz",gecici);
                    printf("\n\n  Ana menuye donmek icin herhangi bir tusa basiniz.\n");
                    getch();
                    main();


                }
                else
                {

                    kullanici(j,gecici);

                }
            }
            
            break;
            
        case '2':
        	
        	system("cls");
            printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
            printf("\n\n  Olusturulacak hesap icin EN AZ 4 basamakli benzersiz bir sayi giriniz...\n\n   ID = ");
            scanf("%d",&gecici);
            
            for(i=0; i<101; i++)
                {


                    if(id[i]==gecici)
                    {
                        j=-3;
                        break;
                    }

                    else
                    {
                        j=0;
                    }

                }
                
            if(j==-3)
                {

                    system("cls");
                    Beep(700, 500);
                    system("color c0");
                    printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
                    printf("\n\n  %d ID li hesap Sistemimizde mevcuttur benzersiz bir ID bulunuz",gecici);
                    printf("\n\n  Ana menuye donmek icin herhangi bir tusa basiniz.\n");
                    getch();
                    main();


                }
                
            else if(gecici<1000){
            	
            	system("cls");
                Beep(700, 500);
                system("color c0");
                printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
                printf("\n\n  EN AZ 4 basamakli bir ID bulunuz");
                printf("\n\n  Ana menuye donmek icin herhangi bir tusa basiniz.\n");
                getch();
                main();
            	
			}
			
			system("cls");
            printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
            printf("\n\n  %d ID li hesaba EN AZ 4 basamakli bir sifre giriniz (sayi)...",gecici);
            printf("\n\n  Sifre = ");
            scanf("%d",&gecici1);
            
            if(gecici1<1000){
            	
            	system("cls");
                Beep(700, 500);
                system("color c0");
                printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
                printf("\n\n  EN AZ 4 basamakli bir Sifre bulunuz");
                printf("\n\n  Ana menuye donmek icin herhangi bir tusa basiniz.\n");
                getch();
                main();
            	
			}
			
			int indis = bos_indis();
			
			id[indis] = gecici;
			sifre[indis]= gecici1;
			depozito[indis] = 460;
			borc[indis] = 0;
			index[indis] = 700;
			
			FILE *ptr;

                ptr = fopen("Veri.demir","w");
                fscanf(ptr,"%s",&"1");
                fprintf(ptr,"%s","1");
                fclose(ptr);
			
			for(i=0; i<101; i++)
        {

            ptr = fopen("Veri.demir","a");
            fscanf(ptr,"%s",&",");
            fprintf(ptr,"%s",",");
            fclose(ptr);

            ptr = fopen("Veri.demir","a");
            fscanf(ptr,"%d",&id[i]);
            fprintf(ptr,"%d",id[i]);
            fclose(ptr);

            ptr = fopen("Veri.demir","a");
            fscanf(ptr,"%s",&",");
            fprintf(ptr,"%s",",");
            fclose(ptr);

            ptr = fopen("Veri.demir","a");
            fscanf(ptr,"%d",&sifre[i]);
            fprintf(ptr,"%d",sifre[i]);
            fclose(ptr);

            ptr = fopen("Veri.demir","a");
            fscanf(ptr,"%s",&",");
            fprintf(ptr,"%s",",");
            fclose(ptr);

            ptr = fopen("Veri.demir","a");
            fscanf(ptr,"%d",&depozito[i]);
            fprintf(ptr,"%d",depozito[i]);
            fclose(ptr);

            ptr = fopen("Veri.demir","a");
            fscanf(ptr,"%s",&",");
            fprintf(ptr,"%s",",");
            fclose(ptr);

            ptr = fopen("Veri.demir","a");
            fscanf(ptr,"%d",&index[i]);
            fprintf(ptr,"%d",index[i]);
            fclose(ptr);

            ptr = fopen("Veri.demir","a");
            fscanf(ptr,"%s",&",");
            fprintf(ptr,"%s",",");
            fclose(ptr);

            ptr = fopen("Veri.demir","a");
            fscanf(ptr,"%d",&borc[i]);
            fprintf(ptr,"%d",borc[i]);
            fclose(ptr);

        }
        
        system("cls");
        printf("\n\n  ---------- DEMIR Elektrik Dagitim A.S ----------");
        printf("\n\n  Hesabiniz basariyla olusmustur...");
        printf("\n\n  Ana menuye donmek icin herhangi bir tusa basiniz.\n");
        getch();
        main();
        break;
        
        case '3':
        	
        	system("cls");
        	
        	char secim;
	
	system("cls");
	printf("\n\n  ---------- DEMIR (Teknik destek) ----------");
	printf("\n\n  Web sitemize yonlendiriyoruz onayiniz E/H = ");
	scanf("%s",&secim);
	
	if(secim=='E' || secim=='e'){
		
		system("cls");
		printf("\n\n  ---------- DEMIR (Teknik destek) ----------");
		printf("\n\n  Uygulama versiyonu = V1.38\n\n  Uygulama versiyonunu Web sitemizden kontrol ederek, guncel olup olmadiginizi kontrol ediniz.");
		printf("\n\n  1) Chrome\n\n  2) internet explorer\n\n  A) Ana menuye don\n\n  Hangi tarayiciyi kullanmak istersiniz = ");
		scanf("%s",&secim);
		
		if(secim=='A' || secim=='a'){
			main();
		}
		
		if(secim=='1'){
		
			system("cls");
			printf("\n\n  ---------- DEMIR (Teknik destek) ----------");
			printf("\n\n  Yonlendiriliyorsunuz....");
			Sleep(700);
			system("start Chrome https://1demir.tr.gg/");
			main();
		
		}
		
		if(secim=='2'){
			
			system("cls");
			printf("\n\n  ---------- DEMIR (Teknik destek) ----------");
			printf("\n\n  Yonlendiriliyorsunuz....");
			Sleep(700);
			system("start Explorer https://1demir.tr.gg/");
			main();
		}
		
	}
        
        
        
        }
    }
    return 0;
}
