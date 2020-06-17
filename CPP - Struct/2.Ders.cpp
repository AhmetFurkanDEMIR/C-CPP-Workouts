// struct 2.Ders - Pointer ve Struct iliskisi

#include <iostream>

using namespace std;

struct Ogrenci{


	int numara;
	string isim;
	

};

void degistir(Ogrenci ogr1, string yeni_ad){


	cout << " Fonksiyondaki eski ad : " << ogr1.isim << endl;

	ogr1.isim = yeni_ad;

	cout << " Fonksiyondaki Yeni ad : " << ogr1.isim << endl;

}


void pointer_degistir(Ogrenci *ogr1, string yeni_ad){

	ogr1->isim = yeni_ad;

}


int main(){

	cout << "\n\n";

	Ogrenci ogr1 = {8181, "Ahmet Furkan DEMIR"};

	degistir(ogr1, " - Ahmet Poyraz DEMIR");

	// isimin degistirilmeme sebebi, fonksiyon paremetresi olarak strucu verdik.
	// Ram de klonu yaratılır.
	// Eger pointer verseydik, struct un bellek bölgelerindeki degerleri degistirecekti. 
	cout << " Fonksiyon çağrıldıktan sonra main fonksiyonunda ad : " << ogr1.isim << endl;

	pointer_degistir(&ogr1, " - Ahmet Poyraz DEMIR");

	cout << " Fonksiyon çağrıldıktan(Pointer) sonra main fonksiyonunda ad : " << ogr1.isim << endl;



	cout << "\n\n";
	return 0;
}