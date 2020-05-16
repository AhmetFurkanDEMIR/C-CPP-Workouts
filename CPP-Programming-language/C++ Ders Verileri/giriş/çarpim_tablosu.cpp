#include <iostream>

using namespace std;

int main(){

    int sayi,i,j;

    cout << "sayi = ";

    cin >> sayi;

    for(i=1;i<=sayi;i++){

        for(j=1;j<11;j++){

            cout << j << " * " << i << " = " << i*j << endl;

        }

        cout << endl << endl;

    }

    return 0;
}