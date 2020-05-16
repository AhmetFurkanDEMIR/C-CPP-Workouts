

#include <stdio.h>
#include <math.h>


int main(){
	float sayi;
	printf("sayi gir: ");
	scanf("%f",&sayi);
	int a,d;
	float demr[10]={199999999,5,6,89,56,59000,65,9,98,99};
	int boyut= sizeof(demr)/sizeof(float);
	for(a=0;a<=boyut;a++){
		
		if(demr[a]==sayi){
			printf("sayi bizde var index =%d",a);
			d=6;
			break;
		}
		
		else{
			d=5;
		}
		
		
	}
	
	if(d==5){
		printf("bizde yok");
	}
	
	return 0;
}
