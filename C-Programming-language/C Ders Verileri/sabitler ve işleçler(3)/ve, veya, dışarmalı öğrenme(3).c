#include <stdio.h>
int main(){
	
	int a;
	int b;
	int c;
	int d;
	int s;
	
	printf("ilk sayiyi giriniz: ");
	scanf("%d",&a);
	printf("ikinci sayiyi giriniz: ");
	scanf("%d",&b);
	
	d = a & b;
	printf("\n ve baglaci sonucu: %d",d);
	
	c = a | b;
	printf("\n veya baglaci sonucu: %d",c);
	
	s = a ^ b;
	printf("\n disarmali metodu sonucu: %d",s);
	
	
	
	
	return 0;
}
