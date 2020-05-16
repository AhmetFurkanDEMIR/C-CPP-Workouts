#include <stdio.h>

int a=10;
void test();

int main(){
	
	int a=15;
	
	printf("ana fonksiyon icin a degeri: %d",a);   
    
    test();
    
    
	
	return 0;
}

void test(){ //test fonksiyonu, globalde yada ana fonksiyonda belirtmeliyiz
	
	int a=20;
	printf("\n test fonksiyon için a degeri: %d",a);
	
}







