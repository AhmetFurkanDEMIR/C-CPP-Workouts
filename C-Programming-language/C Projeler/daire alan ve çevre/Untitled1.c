#include <stdio.h>
#include <stdlib.h>


int main(){
	
	float a,b;
	
	printf("\n Dairenin yari capi: ");
	scanf("%f",&a);
	
	b= 3.14159265358979323846*(a*a);
	printf("\n Dairenin alani= %f\n",b);
	
	b= 2*3.14159265358979323846*a;
	printf("\n Dairenin cevresi= %f\n",b);
	
	
	return 0;
}

