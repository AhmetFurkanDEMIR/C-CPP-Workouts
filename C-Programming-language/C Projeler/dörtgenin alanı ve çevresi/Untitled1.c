#include <stdio.h>


int main(){

	int dortgen,g;
	float a,b,c,d;
	
	while(g<50){
		
		printf("\n\n  alan ve cevre hesaplama programi");
		printf("\n\n  alani ve cevresi hesaplanacak cisim kare ise 1\'e dikdortgen ise 2\'ye basiniz: ");
		scanf("%d",&dortgen);
	
	
		if(dortgen==1){
			printf("\n\n  karenin bir kenari giriniz: ");
			scanf("%f",&a);
			c = a*a;
			printf("\n\n  karenin alani= %f",c);
			d= a*4;
			printf("\n\n  karenin cevresi= %f\n\n",d);
		}
	
		else if(dortgen==2){
			printf("\n\n  dikdortgenin kisa kenarini giriniz: ");
			scanf("%f",&a);
			printf("\n\n  dikdotgenin uzun kenarini giriniz: ");
			scanf("%f",&b);
			c = a*b;
			printf("\n\n  dikdortgenin alani= %f",c);
			d= (a+b)*2;
			printf("\n\n  dikdortgenin cevresi= %f\n\n",d);
		
		}
	
		else{
			printf("\n\n  hatali secim yaptiniz\n");
		}
	}
	return 0;
}



