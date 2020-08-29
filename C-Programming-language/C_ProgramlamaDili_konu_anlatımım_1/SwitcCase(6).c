// Switc case

#include <stdio.h>

/*

switch - case, if - else if yapısına oldukça benzer bir ifadedir. 
Ancak aralarında iki fark vardır. Birincisi, switch - case yapısında, aralık değeri girmezsiniz. 
Direkt olarak ifadelerin bir şeylere eşit olup olmadığına bakarsınız. 
İkinci farksa, switch - case yapılarında, illa ki uygun koşulun sağlanmasıyla yapının kesilmek zorunda olmayışıdır. 
'break' komutu kullanmadığınız takdirde, diğer şartların içindeki işlemleri de yapma imkanınız olabilir. 
switch case en tepeden başlayarak şartları tek tek kontrol eder. 
Uygun şart yakalanırsa, bundan sonra ki ifadeleri kontrol etmeden doğru kabul eder. 
Ve şayet siz break koymamışsanız, eşitlik uygun olsun olmasın, alt tarafta kalan case'lere ait komutlarda çalıştırılacaktır. 
if - else if ise daha önce söylemiş olduğumuz gibi böyle değildir. Uygun koşul sağlandığında, yapı dışarsına çıkılır. 

*/

void main(){


	printf(" 8 e esit olan bir sayi giriniz = ");

	int sekiz;

	scanf("%d",&sekiz);


	// esitlik kontrol edilecek degisken
	switch(sekiz){

		// şart blogu, sekiz degisken == 1 ise bu bloga girer
		case 1:
			printf("Bu bloga giremez");
			break; // eger break kullanmazsak hemen sonraki case girer.

		case 8:

			printf("Bu bloga girer");
			//break; // eger break kullanmazsak hemen sonraki case girer.

		default:
			// else
			printf("Hic bir bloga giremezse bu bloga girer.");
			break;

	}

	getchar();
	printf("\n\n \"c\" Cıkmak için karekteri giriniz : ");
	char cik;
	scanf("%c",&cik);

	switch(cik){

		case 'a':
			printf("Hatalı secenek, buraya girmez.");
			break;

		case 'c':

			printf("\nCıkıs yapılıyor...");
			break;

		default:
			printf("cıkıs yapılamadı");
			break;

	}


}