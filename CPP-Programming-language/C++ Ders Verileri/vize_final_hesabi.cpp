#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


float hesapla(float vize, float final){

	float toplam = vize*0.4 + final*0.6;

	return toplam;

}


string harf(float sonuc){

	string harff;

	if (sonuc <= 100 && sonuc > 80){

		harff = "A";

	}

	else if (sonuc <= 80 && sonuc > 60){

		harff = "B";

	}

	else if (sonuc <= 60 && sonuc > 40){

		harff = "C";

	}

	else if (sonuc <= 40 && sonuc > 20 ){

		harff = "D";

	}

	else if (sonuc <= 20){


		harff = "E";

	}


	return harff;


}

int main(){

	int secim;

	float vize,final, sonuc;

	string harff;

	while(1){

		system("clear");

		cout << "\n  DEMIR Vize - Final Hesaplaması" << endl << endl;

		cout << "    1-) Hesapla\n    2-) Çıkış" << endl << endl<< "     Seçim = ";

		cin >> secim;

		switch(secim){

			case 1:

				system("clear");

				cout << "\n  DEMIR Vize - Final Hesaplaması" << endl << endl;

				cout << "    Vize notunuz = ";

				cin >> vize;

				if (vize < 0 || vize > 100){

					cout << "     Hatalı vize sonucu girildi";

					continue;

				}


				cout<< endl << endl << "    Final notunuz = ";

				cin >> final;

				if (final < 0 || final > 100){

					cout << "     Hatalı Final sonucu girildi";

					continue;

				}


				sonuc = hesapla(vize, final);

				harff = harf(sonuc);

				cout << "\n Ders ortalamanız =  " <<sonuc << "  Ders harfi =  " <<harff;

				break;



			case 2:

				return 0;


		}


	}


	cout << endl << endl;
	return 0;
}