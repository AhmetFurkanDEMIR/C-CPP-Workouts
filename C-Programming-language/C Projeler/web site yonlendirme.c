#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void tarayici(){
	
	char secim;
	
	system("cls");
	printf("\n\n  ---------- DEMIR (Teknik destek) ----------");
	printf("\n\n  Web sitemize yonlendiriyoruz onayiniz E/H = ");
	scanf("%s",&secim);
	
	if(secim=='E' || secim=='e'){
		
		system("cls");
		printf("\n\n  ---------- DEMIR (Teknik destek) ----------");
		printf("\n\n  1) Chrome\n\n  2) internet explorer\n\n  A) Ana menuye don\n\n  Hangi tarayiciyi kullanmak istersiniz = ");
		scanf("%s",&secim);
		
		if(secim=='A' || secim=='a'){
			main();
		}
		
		if(secim=='1'){
		
			system("cls");
			printf("\n\n  ---------- DEMIR (Teknik destek) ----------");
			printf("\n\n  Yonlendiriliyorsunuz....");
			Sleep(700);
			system("start Chrome https://1demir.tr.gg/");
			main();
		
		}
		
		if(secim=='2'){
			
			system("cls");
			printf("\n\n  ---------- DEMIR (Teknik destek) ----------");
			printf("\n\n  Yonlendiriliyorsunuz....");
			Sleep(700);
			system("start Explorer https://1demir.tr.gg/");
			main();
		}
		
	}
	
}

int main(){
	
	system("cls");
	
	tarayici();
	
	return 0;
}
