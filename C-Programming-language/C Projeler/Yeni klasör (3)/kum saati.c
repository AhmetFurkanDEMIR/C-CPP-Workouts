 #include <stdio.h>
 #include <conio.h>
 

 
 
int main(){
    
    int satir, boslukSayisi, yildizSayisi, i, j;
    

    satir = 23;
 

    boslukSayisi = 0;
    

    yildizSayisi = satir;
    

    for(i=0; i<satir; i++){
        

        for(j=0; j<yildizSayisi;j++)
            printf("*");        
 

        if( i < (satir / 2) ){
            yildizSayisi-=2;
            boslukSayisi++;
        }
            

        else{
            yildizSayisi+=2;
            boslukSayisi--;
        }
 

        printf("\n");
        for(j=0; j<boslukSayisi;j++)    
            printf(" ");
        
    }
    
    
    getch();
    return 0;
    
}
