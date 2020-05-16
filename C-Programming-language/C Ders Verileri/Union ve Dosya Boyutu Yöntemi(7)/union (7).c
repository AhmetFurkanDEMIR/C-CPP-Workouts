#include <stdio.h>

union hafiza{  //union= her þeyi ayný bellekte tutar,en büyük byte yi hafiza olarak alir
	           //struct= herbiri için ayrý hafýza alaný oluþturur, ayný yerde depolar
	int a;     // union daha hizli, ama kullanim alaný az
	float b;
	long long int d;
	char e[30];
	
	
};


int main(){
	
	union hafiza byte;
	
	byte.a=15;
	byte.b=12.5;
	printf("A nin degeri: %d\n",byte.a); // program çöker, 2 veriyi saklayamaz
	printf("b nin degeri: %f\n",byte.b); // ram gibi geçici kullanýlýr
	
	
	
	printf("unionun kapladigi alan: %d",sizeof(byte)); //union'un kapladýðý alaný öðrenmek için.
	
	
	
	
	return 0;
}







