// Fonksiyonlar ilsikisi

#include <stdio.h>

int takas(int a, int b){

	int temp = a;

	a = b;

	b = temp;

	printf("Takas fonksiyonunda a = %d, b = %d",a,b);


}

int main(){

	int a = 5;

	int b = 99;

	takas(a,b);

	// main fonksiyonunda degismemesinin sebebi, fonksiyonlarda yeni bir degisken yaratıp o degiskenlerde degisiklik yaptık.
	// yapılan işlemler oluşturulan degiskenler fonksiyonlara özgündür main fonksiyonunda kullanamazsınız.
	// başka bir fonksiyonda direk degiskenlerle islem yapabilmek icin pointer kavramını ögrenmelisiniz.
	printf("\n\n Main fonksiyonunda a = %d, b = %d",a,b);

	// printf("%D\n", temp); hata verir.


}