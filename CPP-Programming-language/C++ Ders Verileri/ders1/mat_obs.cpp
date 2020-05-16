#include <iostream>

using namespace std;

string isim_soyisim[100];
float vize[100];
float final[100];


void hesapla(){

    system("clear");
    cout << "\n --- DEMIR MATEMATİK OBS ---\n\n";

    int i,toplam;
    string sec;

    for(i=0;i<100;i++){

        if(isim_soyisim[i] == "\0"){
            break;
        }

        toplam = (vize[i]*0.4) + (final[i]*0.6);

        cout << " Ad = " << isim_soyisim[i] << " Ders geçme notu = " << toplam << endl; 
    }

    cout << "\n\n   Ana menüye dönmek için herhangi tuşa basınız.";

    cin >> sec;

}

void listele(){

    int i,j;
    string sec;

    system("clear");
    cout << "\n --- DEMIR MATEMATİK OBS ---\n\n";

    for(i=0;i<100;i++){

        if(isim_soyisim[i] == "\0"){
            break;
        }

        cout << " Ad = "+isim_soyisim[i] << " | " << "Vize = " << vize[i] << " | " << "Final = " << final[i] << endl << endl;

    }

    cout << "\n\n   Ana menüye dönmek için herhangi tuşa basınız.";

    cin >> sec;

}

int ekle(int indis){

    string ad_soyad;
    float vize0;
    float final0;
    string secim;

    

    while(1){

        system("clear");

        cout << "\n --- DEMIR MATEMATİK OBS ---";
        cout << "\n\n   İsim soyisim = ";

        cin >> ad_soyad;

        cout << "\n\n   Vize notu = ";

        cin >> vize0;

        cout << "\n\n   Final notu = ";

        cin >> final0;

        if((final0 >=0 && final0 <= 100) && (vize0 >=0 && vize0 <=100)){

            isim_soyisim[indis] = ad_soyad;

            vize[indis] = vize0;

            final[indis] = final0;

            system("clear");

            cout << "\n --- DEMIR MATEMATİK OBS ---";

            cout << "\n\n   Öğrenci başarıyla eklendi.";

            indis += 1;

            cout << "\n\n   Yeni öğrenci eklemek için Y ana menü için herhangi bir tuşa basınız.";

            cin >> secim;

            if (secim == "Y" || secim == "y" ){

                continue;

            }


            return indis;
        }

        else{

            cout << "\n --- DEMIR MATEMATİK OBS ---" << endl << endl;

            cout << "   Vize veya final değer hatası";

            cout << "\n\n   Yeni öğrenci eklemek için Y ana menü için herhangi bir tuşa basınız.";

            cin >> secim;

            if (secim == "Y" || secim == "y" ){

                continue;

            }

            else {

                return indis;
            }
        }

    }

}

int main(){

    int secim;
    int indis = 0;

    

    while(1){

        system("clear");

        cout << "\n --- DEMIR MATEMATİK OBS ---" << endl << endl;

        cout << "   1-) Öğrenci ekle" << endl;
        cout << "   2-) Tüm öğrencileri görüntüle" << endl;
        cout << "   3-) Sınıfın geçme durumu" << endl;
        cout << "   4-) Çıkış" << endl << endl;
        cout << "       Seçim = ";

        cin >> secim;

        switch (secim){

            case 1:

                indis = ekle(indis);
                break;


            case 2:

                listele();
                break;

            case 3:

                hesapla();
                break;


            case 4:
                return 0;

        }

    }

}