// Fonksiyonlar 3

#include <stdbool.h>
#include <stdio.h>

// define ile fonksiyon tanımladık,
// kod modülleri import ettikten hemen sonra bu fonksiyon tanımlanır.
// önemli bir kontrolü sağlıyorsa böyle tanımlamak daha mantıklıdır.
#define carpa(a,b) a*b

// kod satırları yukarıdan aşağıya okunmaya başlar, carp fonksiyonu main fonksiyonunun altında bir fonksiyondur.
// bu fonksiyon daha tanımlanmamıştır ve hata veriri.
// bazı sürümlerde int deger döndüren fonksiyonlar haricinde hata vermemektedir. (tam hatırlamıyorum derste hoca bahsetmişti.)

int main(){


	//carp();

	printf("%d\n",carpa(5,5));


	return 0;
}

void carp(){

	printf("Hataa");

}