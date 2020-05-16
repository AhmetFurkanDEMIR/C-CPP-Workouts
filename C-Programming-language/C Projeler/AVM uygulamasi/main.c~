#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

float asds;
float gecici[250];



int bilgiler(){

    system("clear");

    char sec;
    printf("\n\n  ---------- DEMIR AVM uygulamasi ----------");

    printf("\n\n  Kasada bulunan toplam tutar = %f ",asds);

    printf("\n\n  Uygulamadan cikmak icin Q\' harfine,\n  Tekrar hesap yapmak icin T\' harfine basiniz = ");
    scanf("%s",&sec);

    if(sec=='t' || sec=='T'){
        system("clear");

    }

    else if (sec == 'q' || sec == 'Q'){
        system("clear");
        printf("\n\n  Hesaplamalar kaydediliyor...\n\n");
        exit(2);}//if quit

}

int server(){


    FILE *ptr;

    ptr = fopen("asd.rtf","r+");
    fscanf(ptr,"%f",&asds);
    fprintf(ptr,"%f",asds);



    return 0;

}

int derle(){

    FILE *ptr;

    ptr = fopen("asd.rtf","w+");
    fscanf(ptr,"%f",&asds);
    fprintf(ptr,"%f",asds);

    fclose(ptr);


    return 0;
}

int parcala(double tpp){

    int gecici=tpp;
    float kusurat=tpp-gecici;
    int tp = gecici;
    float paraustu=tpp;

    int ikiyuz=0,yuz=0,elli=0,yirmi=0,on=0,bes=0,bir=0,ellikr=0,yirmibeskr=0,onkr=0,beskr=0,kontrol;


    for(;;){

        kontrol=tp/200;

        if(kontrol==0){
            break;
        }

        else{
            ikiyuz=ikiyuz+kontrol;
            tp=tp-ikiyuz*200;
        }

    }

    for(;;){

        kontrol=tp/100;

        if(kontrol==0){
            break;
        }

        else{
            yuz=yuz+kontrol;
            tp=tp-yuz*100;
        }

    }

    for(;;){

        kontrol=tp/50;

        if(kontrol==0){
            break;
        }

        else{
            elli=elli+kontrol;
            tp=tp-elli*50;
        }

    }

    for(;;){

        kontrol=tp/20;

        if(kontrol==0){
            break;
        }

        else{
            yirmi=yirmi+kontrol;
            tp=tp-yirmi*20;
        }

    }

    for(;;){

        kontrol=tp/10;

        if(kontrol==0){
            break;
        }

        else{
            on=on+kontrol;
            tp=tp-on*10;
        }

    }

    for(;;){

        kontrol=tp/5;

        if(kontrol==0){
            break;
        }

        else{
            bes=bes+kontrol;
            tp=tp-bes*5;
        }

    }

    for(;;){

        kontrol=tp/1;

        if(kontrol==0){
            break;
        }

        else{
            bir=bir+kontrol;
            tp=tp-bir*1;
        }

    }

    for(;;){

        kontrol=kusurat/0.5;

        if(kontrol==0){
            break;
        }

        else{
            ellikr=ellikr+kontrol;
            kusurat=kusurat-ellikr*0.5;
        }

    }

    for(;;){

        kontrol=kusurat/0.25;

        if(kontrol==0){
            break;
        }

        else{
            yirmibeskr=yirmibeskr+kontrol;
            kusurat=kusurat-yirmibeskr*0.25;
        }

    }

    for(;;){

        kontrol=kusurat/0.10;

        if(kontrol==0){
            break;
        }

        else{
            onkr=onkr+kontrol;
            kusurat=kusurat-onkr*0.10;
        }

    }

    for(;;){

        kontrol=kusurat/0.05;

        if(kontrol==0){
            break;
        }

        else{
            beskr=beskr+kontrol;
            kusurat=kusurat-beskr*0.05;
        }

    }


    system("clear");
    printf("\n\n  ---------- DEMIR AVM uygulamasi ----------");
    printf("\n\n   Para ustu    = %.2f Tl ",paraustu);
    printf("\n\n   ikiyuz Tl    = %d ",ikiyuz);
    printf("\n\n   Yuz Tl       = %d ",yuz);
    printf("\n\n   Elli Tl      = %d ",elli);
    printf("\n\n   Yirmi Tl     = %d ",yirmi);
    printf("\n\n   On Tl        = %d ",on);
    printf("\n\n   Bes Tl       = %d ",bes);
    printf("\n\n   Bir Tl       = %d ",bir);
    printf("\n\n   Elli KR      = %d ",ellikr);
    printf("\n\n   Yirmibes KR  = %d ",yirmibeskr);
    printf("\n\n   On KR        = %d ",onkr);
    printf("\n\n   Bes KR       = %d ",beskr);

    char sec;

    printf("\n\n  Uygulamadan cikmak icin Q\' harfine,\n  Tekrar hesap yapmak icin T\' harfine basiniz = ");
    scanf("%s",&sec);

    if(sec=='t' || sec=='T'){
        system("clear");
        main();
    }

    if (sec == 'q' || sec == 'Q'){
        system("clear");
        printf("\n\n  Hesaplamalar kaydediliyor...\n\n");
        exit(2);}//if quit
    return 0;
}

int hesapla(){



    int i,j;
    float toplam=0,mup;
    char sec;
    int secimm;

    printf("  ");
    for(i=0;gecici[i]!=0;i++){
        toplam=toplam+gecici[i];}//for

    for(j=0;j<i;j++){

        if(j==i-1){

            printf("%.2f = %.2f Tl",gecici[i-1],toplam);
            break;
        }

        printf(" %.2f + ",gecici[j]);

    }

    printf("\n\n  İslemi onayliyormusunuz E/H = ");
    scanf("%s",&sec);

    if(sec=='H' || sec=='h'){

        toplam=0;

        for(i=0;i<251;i++){
            gecici[i]=0;
        }//for
    }//if


    else if(sec=='E' || sec=='e'){

        for(;;){

            system("clear");
            printf("\n\n  ---------- DEMIR AVM uygulamasi ----------");

            printf("\n\n  1) Kredi karti / Banka karti ile odeme\n\n  2) Nakit odeme");
            printf("\n\n  Secim = ");
            scanf("%d",&secimm);

            if(secimm==1){

                char sec;

                printf("\n\n  Uygulamadan cikmak icin Q\' harfine,\n  Tekrar hesap yapmak icin T\' harfine basiniz = ");
                scanf("%s",&sec);

                if(sec=='t' || sec=='T'){
                    system("clear");
                    main();
                }

                else if (sec == 'q' || sec == 'Q'){
                    system("clear");
                    printf("\n\n  Hesaplamalar kaydediliyor...\n\n");
                    exit(2);}//if quit

            }

            else if(secimm==2){

                asds=asds+toplam;
                derle();

                break;
            }

        }

        system("clear");
        for(;;) {

            printf("\n\n  ---------- DEMIR AVM uygulamasi ----------");

            printf("\n\n  Kullanicidan alinaca ücret = %.2f",toplam);
            printf("\n\n  Musterinin verdigi para = ");
            scanf("%f", &mup);

            if(mup>=toplam){

                float ty=mup-toplam;

                parcala(ty);
                break;
            }

            else{
                printf("\n\n  Lutfen %.2f den esit veya fazla para aliniz!!",toplam);
            }
        }


    }// else if

    return 0;
}

int musteri(){

    int i;
    float kontrol;

    for(i=0;i<251;i++){
        gecici[i]=0;
    }//for

    for(i=0;;i++){

        system("clear");
        printf("\n\n  ---------- DEMIR AVM uygulamasi ----------");
        printf("\n\n  negatif sayi girerseniz kaideye alinmaz. 0 değerini girerseniz hessaplama islemi baslar!!");
        printf("\n\n   Urun fiyati = ");
        scanf("%f",&kontrol);

        if(kontrol==0){
            hesapla();
            break;}//kontrol

        else if(kontrol>0){
            gecici[i]=kontrol;}//else

    }


    return 0;
}

int main() {

    while(1){

        char secim;
        system("clear");
        printf("\n\n  ---------- DEMIR AVM uygulamasi ----------");
        printf("\n\n  1) Müsteri al\n\n  2) Kasadaki toplam bakiye\n\n  Q) Cikis ");
        printf("\n\n   Secim = ");

        server();
        scanf("%s", &secim);

        if (secim == 'q' || secim == 'Q'){
            system("clear");
            printf("\n\n  Hesaplamalar kaydediliyor...\n\n");
            exit(2);}//if quit

        else if(secim=='1'){

            musteri();

        }

        else if(secim=='2'){

            bilgiler();

        }

    }// while sonsuz döngü



    return 0;

}
