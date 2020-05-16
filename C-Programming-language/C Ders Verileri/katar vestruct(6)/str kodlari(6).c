#include <stdio.h>




int main(){

	char a[20]="benim adim ";
	char b[30]=" ahmet furkan DEMÝR";
	char c[20];
	
	strcat(a,b); //a ve b yi arka arkaya yazdýrdýk.
	printf("%s\n",a);
	
	strcpy(c,b); // string veri tipini bir yere toplar.
	
	printf("%s\n",c);
	
	int d = strlen(a); //yazýda kaç karekter kullandýk öðrenmek için.
	
	printf("%d\n",d);
	
	printf("%d",strcmp(a,b)); //a b den büyük olduðu için 1, olmazsa -1 olur.
	
	return 0;
}
