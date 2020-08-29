// Fonksiyonlar 1

#include <stdbool.h>
#include <stdio.h>

// fonksiyonlar her programlama dillerinde bulunur.
// kod okunabilrigi arttırır ve kod tekrarının önüne geçer. Çok önemlidir.

// fonksiyonun geriye döndüreceği deger türü ve fonksiyon adı ile bir fonksiyon oluştururuz.

// C programlamada Overloading (aşırı yüklenme) bulunmamakta, C++ ile kullanabilrisiniz.

// int bir deger döndürülecekse ; int ad(){}
// double bir deger döndürülecekse ; double(){}
// float bir deger döndürecekse ; float(){}
// bu şekilde geriye döndüreceği değer tipine göre fonksiyonun tipini belirleriz.

// geriye herhangi birşey döndürmediği için void olarak belirledik.
void ad(){

	printf("ad fonksiyonuna ilerlendi.");

}

// bo fonksiyon iki adet parametre almakta.
// int a ve int b.
// alınan parametrenin türü bu fonksiyonda belirtilmeli.
// eger belirtilen türe dönüştürme yapılamayan bir veri aktarılırsa hata verir.
void carp(int a, int b){

	// a*b
	printf("\n carpim sonucu = %d\n",a*b );

}


// bu fonksiyon geriye bir double türünde veri döndürmekte.
double ortalamaa(double a, double b, double c){

	// return parametresi geriye bir deger döndürmek için kullanılır.
	return (a+b+c)/3;

}

int main(){


	// iç içe fonksiyonlar (nested / inner functions)
	int asd(int c){

		return c/2;

	}

	ad(); // ad fonksiyonuna ilerlenir.
	// Geriye hiçbir deger döndürmedigi için bir degiskene atamadık.


	carp(8,9);

	// geriye dönen degeri ortalama adlı degisken almakta.
	double ortalama = ortalamaa(88.8, 7, 5);

	int v = asd(80);

	printf(" Bolum sonucu = %d\n", v);


	return 0;
}

