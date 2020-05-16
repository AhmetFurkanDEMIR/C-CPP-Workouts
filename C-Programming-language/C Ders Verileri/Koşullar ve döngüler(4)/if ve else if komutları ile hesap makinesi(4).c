#include <stdio.h>
int main(){
	
	char a;
	float b,c,d,e,f,z;
	
	printf("\n DEMIR ©2019 HESAP MAKINESI");
	
	printf("\n \n \n ilk sayiyi giriniz: ");
	scanf("%f",&b);
	
	printf("\n \n \n yapacaginiz islem: ");
	scanf("%s",&a);
	
	printf("\n \n \n ikinci sayiyi giriniz: ");
	scanf("%f",&c);
	
	
	
	if(a=='+'){
		d = b+c;
		printf("\n sonuc: %f",d);
	}
	
	else if(a=='-'){
		e = b-c;
		printf("\n sonuc: %f",e);
	}
	
	else if(a=='*'){
		f = b*c;
		printf("\n sonuc: %f",f);
	}
	
	else if(a=='/'){
		z = b/c;
		printf("\n sonuc: %f",z);
	}
	
	else{
		printf("\n hatali islem sectiniz");
	}
	return 0;
}
