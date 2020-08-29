// Sart blokları ve aritmatik operatorler

// boolen degerler icin
#include <stdbool.h>

#include <stdio.h>

int main(){

	// Sart blokları her programlama dilinde bulunur ve sadece söz dizimi farklı olabilir.

	/* If */

	int a = 9;

	// a eger 9 a esit olursa, if blogunun ici 1 olur yani True olur, buda bu bloğa girmesini sağlar.
	if(a==9){
		printf("\n evet a=9 dogru");
	}

	if(1){
		printf("\n True");
	}
 	
 	// bu bloğa giremez. boolen degeri false.
 	if(0){
		printf("\n False");
	}

	// bu bloga girer.
	if(true){

		printf("\n Yess");
	}

	// girmez
	if(false){

		printf("\n Noo");
	}

	printf("\n boolen deger = %d \n",(a==9));

	// aritmatik operatorler
	// aritmetik operatörlerimiz klasik matematik simgeleri ile aynıdır.
	// > büyüktür
	// < küçüktür
	// == eşittir
	// != eşit değildir.

	// kücüktür

	int b = 7;
	// eger b, a dan küçükse deger 1 olur ve bu bloga girer.
	// eger degilse, deger 0 olur ve bu bloga giremez.
	if(b<a){

		printf(" b<a dogrudur");
	}

	// büyüktür

	// eger a, b den büyükse deger 1 olur ve bu bloga girer.
	// eger degilse, deger 0 olur ve bu bloga giremez.
	if(a>b){

		printf("\n a>b dogrudur");
	}

	// esittir

	b = 9;

	// eger a, b ye eşitse deger 1 olur ve bu bloga girer.
	// eger degilse, deger 0 olur ve bu bloga giremez.
	if(a==b){

		printf("\n a=b dogrudur");
	}

	// esit degildir.

	b = 999;

	// eger a, b ye eşitdegilse deger 1 olur ve bu bloga girer.
	// eger degilse, deger 0 olur ve bu bloga giremez.
	if(a!=b){

		printf("\n a!=b dogrudur");
	}

	printf("\n\n **************************\n");

	/* else if */

	// ilk şart yani ilk if bloğu sağlanmadıysa daha sonra bu blok kontrol edilir.


	if(a==b){
		printf("\n ilk");
	}

	else if(a!=b){

		printf("\n else if blogundayiz.");
	}

	// ilk bloga girilirse else if kontrol edilmez.

	// ancak iki kere if blogu yazarsanız ilki dogru olsa bile ikinciside kontrol edilir.
	if(a!=b){
		printf("\n ilk blok girildi");
	}
	if(a<b){
		printf("\n ikinci blok girildi");
	}

	printf("\n\n **************************\n");


	/* else */

	// eger if ve else if bloklarına girilemediyse yani hiç biri olmadıysa bu bloğa girilir.
	// herhangi bir bloga girildiyse bu bloga girilmez.

	// şart bloklarını bu şekilde kullanmanızı öneririm. (ideal)
	// ilk önce if blogunu kontrol eder girerse digerlerini kontol etmez giremezse else if blogunu kontrol eder.
	// bu bloklara girmediyse en son else bloğuna girer.
	if(a==b){
		printf("\n ilk");
	}

	else if(a>b){

		printf("\n else if blogundayiz.");
	}

	else{
		printf("\n else blogu");
	}

	// tüm blokları if ile yazarsanız ilk şart sağlansa bile diger blokları da kontrol eder.
	// bu size hız kaybı ve gereksiz güç tüketimi olarak geri döner.
	// Kullanacağınız yerler olur lakin verimsiz olur.
	printf("\n\n **************************\n");


	/* % mod operatörü */

	// bir sayının bir sayıya bölümünden kalanı öğreniriz.
	// eger geriye dönen deger 0 degilse o sayıya tam bölünemez.

	a = 20;

	if(a%20==0){

		printf("bu sayı 20 ye tam bölünüyor.");
	}

	if(a%3==0){

		printf("bu sayı 3 e tam bölünemez..");
	}

	printf("\n\n **************************\n");


	/* arttırma ve azaltma operatörleri */

	// ++, bir arttırır.
	// --, bir azaltır.
	// +=X, degiskeni X kadar arttırır.
	// -=Y, degiskeni Y kadar azaltır.

	printf("\n a ilk deger = %d",a);

	a += 19;

	printf("\n a += 19 = %d",a);

	a -= 10;

	printf("\n a -= 10 = %d",a);

	/* ++ */

	// ++ operatörü degiskenin sag tarfında olursa yani X++ olursa bulundugu satırda degisken artmaz
	// bir alt satırda degiskende artma gözlemlenir.

	printf("\n ilk satır a++ = %d",a++);
	printf("\n a++ yapıldıktan sonraki satır = %d",a);

	// ++ oeratörü solda olursa yani ++X olursa degisken bulundugu satırda bir arttırılır.

	printf("\n ++a = %d",++a);


	/* -- */

	// -- operatörü degiskenin sag tarfında olursa yani X-- olursa bulundugu satırda degisken azalmaz
	// bir alt satırda degiskende azalma gözlemlenir.

	printf("\n ilk satır a-- = %d",a--);
	printf("\n a-- yapıldıktan sonraki satır = %d",a);

	// -- oeratörü solda olursa yani --X olursa degisken bulundugu satırda bir azaltılır.

	printf("\n --a = %d",--a);

	printf("\n\n **************************\n");

	/* ve(&&), veya(||) */

	// veya
	// ilk ifade true, ikinci ifade false
	// ama yinede bir şart sağlandığından dolayı bu bloğa girilir.
	// ikiside false yani saglanmazsa girilmez.
	if(8==8 || 7==6){

		printf("sartın birinin saglanması yeterli olacaktır.");
	}


	// ve
	// bu bloga giremez içerisinin tamamen true olması gerekli.
	// tamamen false veya bir tane false olması yeterli degildir.
	// tüm sartların saglanması gerekli
	if(8==8 && 7==6){

		printf("\nsartın birinin saglanması yeterli olamaz.");
	}

	// içersi tamamen true olur ve bu bloga girilir.
	if(8==8 && 7!=6){

		printf("\nsartların hepsi saglanır ve bu bloga girer.");
	}


	return 0;
}