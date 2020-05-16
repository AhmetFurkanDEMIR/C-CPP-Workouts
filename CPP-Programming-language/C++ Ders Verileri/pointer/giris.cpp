# include <iostream>

using namespace std;


int main(){
	system("clear");
	cout << endl; 





	int sayi = 8;

	int *ptr = &sayi;

	cout << " Sayi = " << sayi << endl << " Adresi = " << ptr << "\n\n";
	cout << " Referansı kırarsak = "<< *ptr << "\n\n";

	cout << " Adresi bir artırırsak yeni adres = " << ++ptr << "\n\n";

	cout << " Yeni adres içindeki değer\n (Bellekteki eski veriler bulunur) = " << *ptr;










	cout << endl << endl;
}