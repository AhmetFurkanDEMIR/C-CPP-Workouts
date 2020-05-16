#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

//  

int main(){
	
	int boyut,i,temp,j;
	double toplam =0;
	
	printf("\n dizi boyutu giriniz (tek) = ");
	scanf("%d",&boyut);
	
	if(boyut%2==0){
		boyut++;
	}
	
	int dizi[boyut];
	
	int *ptr=dizi;
	
	srand(time(NULL));
		
	for(i=0;i<boyut;i++){
		
		*(ptr+i)=rand()%25;
		
		printf(" %d ",*(ptr+i));
		
		toplam = toplam+*(ptr+i);
		
	}
	
	int gecici;
	
	for(i=0;i<boyut;i++){
    	
		for(j=0;j<boyut;j++){
            
			if(*(ptr+i)<*(ptr+j)){
               
			    gecici=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=gecici;
				
				}
            }
        }
	
	printf("\n\n");
	
	
	for(i=0;i<boyut;i++){
		printf(" %d ",*(ptr+i));
	}
	
	int byt=boyut/2;
	
	
	printf("\n\n  toplam = %lf\n\n  ortanca = %d",toplam/boyut,*(ptr+byt));
	
	
	
	return 0;
}
