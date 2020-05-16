# include <iostream>



using namespace std;


int main(){
	system("clear");
	cout << endl; 

	
	string takimlar[] = {"fenerbahce", "galatasaray", "trabzonspor"};

	string *takimlar_adres = takimlar; // ilk elemanı alır

	cout << " Takımlar adresi = " << takimlar_adres << " İşaretçinin içeriği = " << *takimlar_adres << endl;

	cout << " Takımlar adresi = " << ++takimlar_adres << " İşaretçinin içeriği = " << *takimlar_adres << endl;

	cout << " Takımlar adresi = " << ++takimlar_adres << " İşaretçinin içeriği = " << *takimlar_adres;



	cout << endl << endl;
}