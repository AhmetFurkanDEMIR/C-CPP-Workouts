# include <iostream>



using namespace std;

void degistir(int &sayi1, int &sayi2){

	int temp;

	temp = sayi1;

	sayi1 = sayi2;

	sayi2 = temp;


}

int main(){
	system("clear");
	cout << endl; 


	// değistilemez sadece okunabilir.
	const int veri = 8;

	int veri1 = 900;

	int veri0 = 30;

	int &referans = veri0;

	// veri++; bu işlem hata verir.

	referans++; // referans üzerinden değeri artırdık

	//cout << referans;

	degistir(veri1, veri0); // daha basit değistirme yöntemi

	cout << " sayi1 = " << veri1 << " sayi2 = " << veri0;



	cout << endl << endl;
}