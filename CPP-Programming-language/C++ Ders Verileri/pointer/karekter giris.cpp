# include <iostream>
# include <stdio.h>


using namespace std;


int main(){
	system("clear");
	cout << endl; 

	char veri[8] = {"dsadsa"};

	int i;

	char *veri_adres = veri;

	for(i=0;i<10;i++){

		cout << " = " << *(veri_adres+i) << endl;


	}


	string veri0 = "ahmed";

	string *ptr = &veri0; 

	cout << *ptr; // tamaını alır String.



	cout << endl << endl;
}