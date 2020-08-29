// konumuz input fonksiyonları.

// input fonksiyonları bu modül içerisinde yer almaktadır.
#include <stdio.h>

// kodun derlenmeye başlandığı ana fonksiyonumuz.
int main(){

	// scanf

	int yas;
	float kilo;
	char ad [25];

	printf(" Merhaba adınızı girebilirmisiniz : ");

	// bu fonksiyon, terminalden girilen bir verinin istenilen degiskene atanmasını sağlar.
	// kısaca klavyeniz dinlenir, veri çekilir.
	// girilen veri tipi ile degisken veri tipi birbirine dönüştürülemezse hata alırsınız.
	/* 
	buradaki "&"(ampersant) işareti önemli, 
	ampersant, alınan bir veriyi bellekteki istenilen degiskenin adresinin içindeki kutuya yazmamızı sağlar.
	Bunun daha ayrıntısı C programlama dili pointer kavramı ile öğreneceksiniz.
	*/
	// kalveyeden girilen metni ad degiskenine atar.
	// ampersat işaretini kullanmazsanız segmantasyon hatası alırsınız.
	/*
	bosluk karekteri kullanırsanız yani ("\0") tespit edilirse metnin tamamını alamaz.
	yani; metni "Ahmet Furkan" olarak girerseniz sadece "Ahmet" kısmını alır, "Ahmet\0Furkan" şeklinde okur. 
	*/
	scanf("%s",&ad);

	printf("\n Kilonuzu girebilirmisiniz : ");
	// girilen veriyi float degiskene atadık.
	scanf("%f",&kilo);

	printf("\n Yasınızı girebilirmisiniz : ");
	scanf("%d",&yas);

	float oran = yas/kilo;

	// aldıgımız bilgileri ekrana yazdırdık.
	printf("%s kişisinin yas/kilo oranı = %2.2f ",ad,oran);


	// getchar
	// C kütüphanesi işlevi int getchar (void), stdin'den bir karakter (işaretsiz bir karakter) alır. Bu, argümanı stdin ile getc ile eşdeğerdir.

	// üstekki scanf 'e veriyi girip enter basınca buradaki getchar o ener kendisine yazmakta. "\n"
	// aşağıdaki örneklere sorunsuzca devam etmek için bu getchar() fonksiyonu kendisini feda etmekte :)
	getchar();

	printf("\n\n **************************\n");

	char harf;

	printf("\n\n\n  Bir karekter giriniz : ");

	// istediginiz uzunlukta karakter giriniz, lakin sadece ilk karekteri alacaktır.
	harf = getchar();

	printf("Karakter : ");
	// Char parametresi ile gösterilen değeri standart çıkışa (stdout) yazar.
	putchar(harf); // girilen karekteri direk olarak ekrana yazdırır.
	getchar();

	
	char cumle[40];

	printf("\n\n **************************\n");

	printf("\n\n Bugun hava çok güzel (tekrar yazınız) = ");
	
	// gets, C11 ile itibaren compiler dan kaldırıldı, yeni kullanımı artık böyledir (fgets).
	/*
	scanf ile benzer işi yapar lakin bu fonksiyon yazılan cümlenin tamamnını almakta,
	yani '\0' görünce kesmeden devam etmekte.
	*/
	// degiskenimiz, degisken boyutu, konsol(terminal)
	fgets(cumle, sizeof(cumle), stdin);

	printf("\n yazdığınız cümle = ");
	puts(cumle); // cümlenin tamanını ekrana yazdıran fonksiyon.
 
 	printf("\n\n **************************\n");

	return 0;
}