// Konumuz veri tipleri ve printf fonksiyonu.

/* 

C Programlama Dili'nde giriş ve çıkış işlemleri, 
stdio.h başlık dosyasında yer alan C standart giriş ve çıkış kütüphanesindeki fonksiyon, 
değişken, sabit ve diğer değerler kullanılarak yapılır. Bu kitaplık, klavyeler, yazıcılar, 
terminaller gibi fiziksel aygıtlarla veya sistem tarafından desteklenen diğer dosya türleriyle 
çalışmak için akış adı verilenleri kullanır.

Daha fazla bilgi için ; https://www.bilgigunlugum.net/prog/cprog/c_stdkut/stdio

*/
#include <stdio.h>

#define pi 3.14 // pi degiskeni adinda 3.14 degere sahip degistirlemez bir degisken oluşturduk.

// kod ilk çalıştığında modülleri import eder hemen ardından ise define ile tanımlanmış fonksiyon ve degisken varmi diye kontrol edilir.

// int veri tipinde deger donduren ana fonksiyonumuz.
/*
kod bu fonksiyondan derlenmeye başlar ardından kullanıcının yazdığı kodlara göre
diğer fonksiyonlara geçiş yapılır.
*/
// ana fonksiyonumuz herhangi bir parametre almamaktadır.
void main(){


	// Veri tipleri
	/*
	C programlama dilinde tip biçimlemesi vardır, yani yeni bir degisken tanımlarken,
	bu değişkenin türünü belirtmeliyiz ve türü belirlenen bu değişken kod boyunca asla türü degistirilemez.
	*/

	// örnek: int a degiskeni, kod boyunca sadece int veriler tutabilir, aksi halde hata alırsınız
	// her bir veri tipinin byte boyutuyla doğru orantılı olacak şekilde alabileceği değerlerin bir sayı aralığı vardır.
	int a,b=-5; // 4 byte, alt sınır : -32768, üst sınır : 32767

	// büyük boyutlu kayan noktalı sayıları tutabilecek bir degisken, hassaslık : virgülden sonraki 6 basamak.
	double c = 88.8765878978;
	
	// kayan noktalı sayıları tutabilecek bir degisken, hassaslık : virgülden sonraki 6 basamak.
	float z = 73.5;
	
	// karter tutmayı sağlar, C programlama temel seviye bir dil olduğu için String tanımını burada göremezsiniz.
	// 20 adet karekter tutabilecek bir degisken	
	char v [20] = "ahmet\0furkan";
	
	// bir adet karekter tutabilecek bir degisken.
	char f = 'g';

	// Sizeof, C ve C++ programlama dili komutlarından biri de sizeof'dur. Belirtilen veri türünün byte olarak ölçülmesini sağlar.
	  printf("\n -- Veri tiplerinin bellekte kapladıkları boyutları -- \n\n");
	  printf( "char           : %d bayt\n", sizeof(char));
  	printf( "short          : %d bayt\n", sizeof(short));
  	printf( "int            : %d bayt\n", sizeof(int));
  	printf( "long           : %d bayt\n", sizeof(long));
  	printf( "unsigned char  : %d bayt\n", sizeof(unsigned char));
  	printf( "unsigned short : %d bayt\n", sizeof(unsigned short));
  	printf( "unsigned int   : %d bayt\n", sizeof(unsigned int));
  	printf( "unsigned long  : %d bayt\n", sizeof(unsigned long));
  	printf( "float          : %d bayt\n", sizeof(float));
  	printf( "double         : %d bayt\n", sizeof(double));
  	printf( "long double    : %d bayt\n", sizeof(long double));
  	// konsola çıktı çıkartmamızı sağlayan bir fonksiyon
  	// <stdio.h> ile beraber gelir.
    // algoritma sınavlarında genellikle fonksiyonmu ? değilmi ? diye sorular sorulabiliyor.
  	printf("");


  	printf("Benim adim : %s\n",v); // bir char dizisini yazdırmak için %s şeklinde kullanırız, python dakii format metoduna benzer.

  	printf("ugurlu sayim : %d\n",b); // int bir degiskeni ekrana yansıttık. %d

  	printf("Sınav notum : %f\n",z); // float: kayan noktalı sayıyı ekrana yansıtmak. %f

  	printf("öylesine bir sayi : %lf\n",c);

  	printf("deneme : %2.2lf\n", c); // bu şekilde virgülden önce 2 basamak virgülden sonra ise 2 basamak alarak ekrana yazdırır. 

  	printf("\n\n **************************\n");

  	printf("%lf\n", pi); // define degiskenimiz.

  	// pi = 7; hata veiri.

  	printf("\n\n **************************\n");

  	// const parametresi bir degiskeni degistirilemez kılar.

  	// artık program boyunca veria degiskeni 8 olarak kullanılır.
  	// degistirmeye calısılırsa hata veriri.
  	const int veria = 8;

    scanf("%d",&veria);

    printf("%d\n",veria);


  	// main fonksiyonumuz geriye sıfır degeri döndürdügü için bir int fonksiyondur.

}