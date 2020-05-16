#include <stdio.h>
#include <stdlib.h>


int main(){
	
	float a,b;
	
	printf("\n kubun bir kenar uzunlugu: ");
	scanf("%f",&a);
	
	b= 6*(a*a);
	printf("\n kubun alani= %f\n",b);
	
	b= a*a*a;
	printf("\n kubun hacmi= %f\n",b);
	
	
	return 0;
}

