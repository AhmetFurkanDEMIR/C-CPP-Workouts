# include <iostream>

using namespace std;

void degistir(double *x, double *y){

	int temp;

	temp = *x;

	*x = *y;

	*y = temp;


}

int main(){
	system("clear");
	cout << endl; 

	double sayi1,sayi2;


	cout << " Birinci sayiyi gir : ";
	cin >> sayi1;

	cout << " İkinci sayiyi gir  : ";
	cin >> sayi2;

	degistir(&sayi1, &sayi2);


	cout << " Sayi1 = " <<sayi1 << " Sayi2 = "<< sayi2;



	cout << endl << endl;
}