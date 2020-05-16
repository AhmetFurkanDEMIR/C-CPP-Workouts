#include <iostream>

using namespace std;

int main(){

    int sayilar[5] = {8,4,5,6,2};
    int i,j;

    for(i=0;i<5;i++){

        cout << sayilar[i] << endl;


    }

    float veri[2][2] = {{5,9},{1,3}};

    cout << "\n\n";

    for(i=0;i<2;i++){

        for(j=0;j<2;j++){

            cout << veri[i][j] << endl;

        }

    }



}