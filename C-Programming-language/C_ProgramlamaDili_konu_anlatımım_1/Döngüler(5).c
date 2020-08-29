// Döngüler

// boolen degerler icin
#include <stdbool.h>
#include <stdio.h>

int main(){

	// Döngüler, bir işlemin art arda yapılması için hızlı ve kolay bir yöntem sunarlar

	// Döngülerimiz; for, while ve do while.

	// döngülerde süslü parantez içerisine yazılan her işlem X kez tekrar eder.

	/* for */

	// degisken ve degeri, döngünün durdurulma şartı, degiskenin artış şekli.
	// döngünün şart kısmı true olduğu sürece kod çalışmaya devam eder, şart kısmı false olursa döngü son bulur.
	// degiskeni C11 den sonra ki sürümlerde döngü içersinde tanımlayabilirsiniz. C99 da bunu gerçekleştiremezsiniz.
	// i, 8 den büyük veya eşit olduğunda artık bu döngü çalışmaz.
	// döngü false olarak başlarsa bu bloğa hiç girmez.
	for(int i = 0; i<8; i++){

		// 1 den 8 e kadar sayıları yazdırdık.
		printf("%d\n", i);
	}

	printf("\n\n *********************** \n");

	// printf("%d\n", i);, bu kod hata verir int i degiskeni sadece döngü için tanımlanmıştır.

	int i;


	for(i = 10; i>0; i--){

		// 10 dan bire kadar ekrana yazdırdık.
		printf("%d\n", i);
	}

	printf("\n\n *********************** \n");

	/*
	// şart kısmı true olduğu için sonsuza kadar döngü devam eder.
	for(i = 10; true; i--){

		// 10 dan bire kadar ekrana yazdırdık.
		printf("%d\n", i);
	}
	*/

	int c = -9;

	// sıfırdan büyük bir sayı girilmezse döngü sonsuza kadar yeni sayı ister.
	for(i = 0; c < 0; i--){

		
		printf("0 dan büyük c harfi giriniz : ");
		scanf("%d",&c);
	}

	printf("\n\n *********************** \n");

	for(i = 0; i<100; i+=5){

		// 5 er 5 er elemanları yazdırıyoruz.
		printf("%d\n", i);
	}

	printf("\n\n *********************** \n");

	c = 0;

	for(i = 0; i<10; i+=2){

		c+=1;
		// 0, 2, 4, 6, 8 için calisir.
	}

	printf("döngü %d kere çalisti.\n", c);

	// bu döngü çalışamaz.
	for(i = 0; false; i+=2){

		printf("dsaddddd\n");
		// 0, 2, 4, 6, 8 için calisir.
	}

	/* while */

	printf("\n\n *********************** \n");

	i = 0;

	// sadece döngüyü kırma şartı vardır.
	// şart sağlanmazsa true olursa döngü çalışmaya devam eder.
	// döngü false olarak başlarsa bu bloğa hiç girmez.
	// dögü şartı sağlanırsa durum false olur ve döngü biter.
	// degisken arttırma vb. işlemler blok içersinde yapılır.

	while(i<5){

		printf("%d\n", i);

		// durdurma şartımız için degiskeni arttırmaktayız.
		i+=1;

	}

	/*
	// bu döngü sonsuza kadar çalışmaya devam eder.
	while(true){

		printf("fds\n");
	}

	return 0;
	*/

	printf("\n\n *********************** \n");

	// bu döngüye giremez.
	while(false){

		printf("fds\n");
	}

	i = 0;

	// break, döngüden çıkmamızı sağlar, keser.
	// continue, döngünün başa alınmasını sağlar ve alttaki işlemlerin gerçekleşmesini engeller.

	while(true){

		i += 1;

		printf("%d\n", i);

		if(i==9) break; // istersek döngümüzü şart ile kırabiliriz.

	}
	i = 0;

	printf("\n\n *********************** \n");

	while(true){

		i += 1;

		// mod alma operatörü
		// 5 in katlarını ekrana yazdırmamak için aşağıdaki işlemleri gerçekleştirmemekteyiz.
		if(i%5==0){
			continue;
		}

		printf("%d\n", i);

		if(i>20) break; // istersek döngümüzü şart ile kırabiliriz.

	}

	printf("\n\n *********************** \n");

	/* do while */

	// while döngüsü ile aynı mantığa sahiptir lakin en başta şart kısmımız false olsa dahi en az bir kere döngü çalışır.
	// şart false olursa döngü durur.
	// true olursa devam eder.

	i = 90;

	do{

		printf("i = 90 lakin do while ne olursa olsun en başta döngüyü bir kez tekrar eder.");


	}while(i<20);


	do{

		printf("\n\n False");

	}while(false);


	/*
	// bu döngü ömür boyu çalışır.
	do{

		printf("\n\n true");

	}while(true);
	*/

	return 0;
}