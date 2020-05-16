#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


int main(){

	srand(time(0));

	int x,y,z,t,a;

	x = 100;

	y = 9;


	t = (x<y) ? x:y;

	cout<< "Şarta göre t = " <<t << endl;
	

	for(x=0;x<8;x++){

		a = rand() % 20;

		cout << "Rastgele sayi " << x << " = " << a << endl;

	}


	cout << endl << endl;

	string veri = "ahmedfurkandemir";

	// for i in veri:

	for(char karakter : veri){


		cout << "Veri stringinin karekterleri = " << karakter << endl;



	}

	cout << endl << endl;
	return 0;
}
