#include <stdio.h>

struct{
	
	unsigned int a : 2;
	
}kisi; //sýnýf oluþturduk




int main(){
	
	kisi.a =1;  // 2 bytes in üstünü alamaz.
	printf("a nin degeri %d\n",kisi.a);
	printf("a nin dosya boyutu: %d",sizeof(kisi)); // 4 olarak gözüküyor ama aslýnda 2 byte
	
	



	
	return 0;
}







