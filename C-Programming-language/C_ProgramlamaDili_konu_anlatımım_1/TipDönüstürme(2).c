// Tip dönüstürme

#include <stdio.h>

// oluşturduğumuz verinin içindeki degeri başka bir veri tipinie dönüştürebiliriz.
// ama degiskenin türü degismez, içindegi degerin türü degisir.

// double => int (doble bir deger int bir veriye dönüsebilir.) -1
// int => double (int bir deger double bir veriye dönüsebilir.) -2

int main(){

	// -1
	int a = 80;
	double b = (double)a;
	printf("%lf", b);


	//-2
	// int veri tipi, içersinde tam sayıları barındırdığı için, virgülden sonraki sayıları alamayız.
	double c = 88.9;
	int d = (int)c;
	printf("\n%d", d);

	// aynı şekilde int ve float birbirine dönüşebilir veya float ve double birbirine dönüşebilir.


	int ass = 8;

	float vv = (float)ass;
	printf("\n%f", vv);




	return 0;
}
