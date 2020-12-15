#include <stdio.h>
#include <stdlib.h>
#define boyut 39

void kntt(){


    if(boyut<5){
        printf(" Boyutu beş(5) 'e eşit veya büyük olmali...\n");
        exit(0);
    }

}

int main(){

    kntt();
    
	int i, j, boslukSayisi, yildizSayisi, kn=0, kc=0;
    
    boslukSayisi = boyut / 2 ;

    yildizSayisi = 1;

    if(boyut%2==0){
        kc=1;
    }

    
    for(i=0; i<boyut+2; i++){

        for(j=0; j<boslukSayisi; j++)

            printf(" ");

        if(i==0){

            printf("/¯|¯\\");

        }

        else if(kc==1 && i==boyut+1){

                printf("\\_|_/");

        }

        else if(kc==0 && i==boyut){


            printf("\\_|_/");

        }


        else{

            for(j=0; j<yildizSayisi; j++){


            if(j==0){

                if(i>boyut/2){

                    printf("\\ \\");

                }

                else{

                    printf("/ /");

                }

            }

            else if(j==yildizSayisi-1){

                if(i>boyut/2){

                    printf("/ /");

                }

                else{

                    printf("\\ \\");

                }

                
            }

            else{
                printf("*");
            }

        }


        }
        
        
        if(i < boyut / 2){

            boslukSayisi--;
            yildizSayisi+=2;
            kn=1;
        }

        else{

            if(kn==1){
                kn++;
            }
            else{
                boslukSayisi++;
                yildizSayisi-=2;
            }


        }

        printf("\n");
 
    }
    
    return 0;
}