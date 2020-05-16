#include <iostream>

using namespace std;

int main(){

    int sayi;
    int i;
    int tek;
    int cift;

    cout << "\n sayi gir = ";

    cin >> sayi;

    for(i=1;i<=sayi;i++){

        if (i%2==0){
            cift += i;

            cout << "Çift sayi = " << i << endl;
        }

        else{
            tek += i;

            cout << "Tek sayi = " << i << endl;
        }


    }

    cout << endl << endl << "Çift sayilar toplamı = " << cift << endl;

    cout << "Tek sayılar toplamı = " << tek;


    return 0;
}