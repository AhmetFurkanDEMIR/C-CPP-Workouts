// struct giris 1.Ders 

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

}

int main(){

	cout << "\n\n";

	// 1 : erkek, 0 : kadın

	// objemiz
	Ogrenci ogr1 = {18401, "Ahmet Furkan", "Demır", "Bilgisayar Mühendisi", 1};

	// Ogrenci bilgileri
	bilgiler(ogr1);




	cout << "\n\n";
	return 0;
}