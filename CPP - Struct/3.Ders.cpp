// struct 3.Ders - Pointer ve Struct iliskisi

#include <iostream>

using namespace std;

struct Ogrenci{


	int numara;

	string isim;
	string soy_isim;
	string bolum;

	bool cinsiyet;

};

void bilgiler(Ogrenci ogr){


	cout << "\n\n Ogrenci Adi      : " << ogr.isim;
	cout << "\n\n Ogrenci Soyisım  : " << ogr.soy_isim;
	cout << "\n\n Ogrenci Bolum    : " << ogr.bolum;

	string cinsiyet;

	if(ogr.cinsiyet==1){
		cinsiyet = "Erkek";
	}

	else{
		cinsiyet = "Kadın";
	}

	cout << "\n\n Ogrenci Cinsiyet : " << cinsiyet;

	cout << "\n\n Ogrenci No : " << ogr.numara;

}

// Ogrenci nesnesini geriye döndürür.
Ogrenci create_ogrenci0(){


	Ogrenci ogr1 = {8181, "Ahmet Furkan", "DEMIR", "Bilgisayar Mühendisliği", 1};

	return ogr1;

}

// Gelen Ogrenci pointer ında degisiklikler yapar.
void create_ogrenci1(Ogrenci *ogr2){


	*ogr2 = {8181, "Ahmet Furkan Poyraz", "DEMIR", "Bilgisayar Mühendisliği", 1};

	ogr2->numara = 8282;

	
}

int main(){

	cout << "\n\n";

	Ogrenci ogr1 = create_ogrenci0();

	bilgiler(ogr1);

	Ogrenci ogr2;

	cout << endl << endl ;

	create_ogrenci1(&ogr2);

	bilgiler(ogr2);




	cout << "\n\n";
	return 0;
}