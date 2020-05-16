#include <iostream>

using namespace std;


void aralik(const int *x, const int *y){


	for(; x !=y ; x++){


		cout << *x << endl;

	}



}

int main(){


	int dizi[] = {8,3,6,9,5,2,20,-5};

	aralik(dizi+1,dizi+6);


	cout << endl << endl;
	return 0;
}