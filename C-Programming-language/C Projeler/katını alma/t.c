#include <stdio.h>

#define kare(x)	(x*x)

#define kup(x) (x*x*x)
	
#define dort(x)	(x*x*x*x)

#define bes(x) (x*x*x*x*x)
	
#define alti(x) (x*x*x*x*x*x)
	
#define asd(x) (x*x*x*x*x*x*x)
	
#define sekiz(x) (x*x*x*x*x*x*x*x)
	
#define dokuz(x) (x*x*x*x*x*x*x*x*x)
	
#define on(x) (x*x*x*x*x*x*x*x*x*x)

int main(){
	
	float x;
	float z;
	printf("\n\n sayi giriniz: ");
	scanf("%f",&x);
	
    printf("\n\n kacinci kuvvetini almak istersiniz?(sayi ile ornek: '1')(1'den 10'a kadar kuvvet alabilirsiniz):\n\n ");
	scanf("%f",&z);
	
	if(z==1){
		printf("\n %f 'in birinci kuvveti: %f",x,x);
	}
	
	else if(z==2){
		printf("\n %f 'in karesi: %f",x,kare(x));
	}
	
	else if(z==3){
		printf("\n %f 'in kubu: %f",x,kup(x));
	}
	
	else if(z==4){
		printf("\n %f 'in dorduncu kuvveti: %f",x,dort(x));
	}
	
	else if(z==5){
		printf("\n %f 'in besinci kuvveti: %f",x,bes(x));
	}
	
	else if(z==6){
		printf("\n %f 'in altinci kuvveti: %f",x,alti(x));
	}
	
	else if(z==7){
		printf("\n %f 'in yedinci kuvveti: %f",x,asd(x));
	}
	
	else if(z==8){
		printf("\n %f 'in sekizinci kuvveti: %f",x,sekiz(x));
	}
	
	else if(z==9){
		printf("\n %f 'in dokuzuncu kuvveti: %f",x,dokuz(x));
	}
	
	else if(z==10){
		printf("\n %f 'in onuncu kuvveti: %f",x,on(x));
	}
	
	else{
		printf("\n\n\n hata: 1'den 10'a kadar kuvvet alabilirsiniz");
	}
	
}
