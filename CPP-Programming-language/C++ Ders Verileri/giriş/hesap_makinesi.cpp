#include <iostream>

using namespace std;

double topla(double x, double y){

    double toplam = x+y;

    return toplam;

}

double cikar(double x, double y){

    double cikar = x-y;

    return cikar;

}

double carp(double x, double y){

    double carp = x*y;

    return carp;

}

double bol(double x, double y){

    double bol = x/y;

    return bol;

}

int main(){

    double ilk_sayi;

    char islem;

    double ikinci_sayi;

    double sonuc = 0;

    cout << " --- DEMIR hesap makinesi ---" << endl;

    cout << "\n İlk sayı = ";

    cin >> ilk_sayi;

    cout << "\n\n Yapılacak işlem = ";

    cin >> islem;

    cout << "\n\n İkinci sayı = ";

    cin >> ikinci_sayi;

    if(islem=='+'){
        sonuc = topla(ilk_sayi,ikinci_sayi);

        cout << ilk_sayi << " + " << ikinci_sayi << " = " << sonuc;

    }

    else if(islem=='-'){

        sonuc = cikar(ilk_sayi,ikinci_sayi);

        cout << ilk_sayi << " - " << ikinci_sayi << " = " << sonuc;

    }

    else if(islem=='*'){

        sonuc = carp(ilk_sayi,ikinci_sayi);

        cout << ilk_sayi << " * " << ikinci_sayi << " = " << sonuc;

    }

    else if(islem=='/'){

        sonuc = bol(ilk_sayi,ikinci_sayi);

        cout << ilk_sayi << " / " << ikinci_sayi << " = " << sonuc;

    }

    else{

        cout << "\n\n HATALI işlem seçimi";

    }


}
