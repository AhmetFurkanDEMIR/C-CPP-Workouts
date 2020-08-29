// Fonksiyonlar 2

#include <stdbool.h>
#include <stdio.h>


// özyineli fonksiyonlar. (Kendisini tekrar eden fonksiyonlar) (Recursive Functions)
double faktoryel(int a, double b){


	b = b * a;

	a -= 1;

	// eger a != 1 ise kendi fonksiyonunu tekrar çaığırır.
	// bir nevi for döngüsü yerine geçti
	if(a!=1){
		faktoryel(a,b);
	}

}


int main(){


	int a = 5;

	double b = 1;

	// 5 faktöryeli hesaplamak için yazdığımız fonksiyon.
	double va = faktoryel(a,b);

	printf("%lf",va);


	return 0;
}

