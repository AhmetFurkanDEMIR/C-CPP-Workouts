#include <iostream>

using namespace std;

int main(){

    int sayi;

    int gecici_cift;

    int gecici_tek;

    int tekrar_cift = 0;

    int tekrar_tek = 0;

    while(1){

        cout << "Sayi = ";
        cin >> sayi;

        if (sayi<=0){

            if(gecici_tek>tekrar_tek){
                tekrar_tek = gecici_tek;
            }

            if (gecici_cift>tekrar_cift){
                tekrar_cift = gecici_cift;
            }

            break;
        }

        if (sayi%2==0){

            if(gecici_tek>tekrar_tek){
                tekrar_tek = gecici_tek;
            }

            gecici_tek = 0;

            gecici_cift += 1;

        }

        else{

            if (gecici_cift>tekrar_cift){
                tekrar_cift = gecici_cift;
            }

            gecici_cift = 0;

            gecici_tek += 1;

        }


    }


    cout << "Tekrar eden cift = " << tekrar_cift << endl;
    cout << "Tekrar eden tek = " << tekrar_tek;


    return 0;
}