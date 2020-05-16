#include <stdio.h>
#include <stdlib.h>


int main(){
	
	float a,x,c,b,Fx;
	
	printf("\n Fonksiyon Cozme uygulamasi\n\n  ax*x+b*x+c");
	
	printf("\n\n  x\' nin kat sayiysi: ");
	scanf("%f",&x);
	
	
	printf("\n\n  a\' nin kat sayiysi: ");
	scanf("%f",&a);
	
	printf("\n\n  b\' nin kat sayiysi: ");
	scanf("%f",&b);
	
	printf("\n\n  c\' nin kat sayiysi: ");
	scanf("%f",&c);
	
	Fx= a*x*x+b*x+c;
	
	printf("sonuc = %f",Fx);
	
	

	
	
	return 0;
}

