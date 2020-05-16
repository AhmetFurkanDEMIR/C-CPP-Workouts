#include <stdio.h>

typedef struct askerler{
	
	int can;
	int mermi;
	char isim[25];
}asker; // bundan sonra asker yazıp hızlanabiliriz


int main(){
	
	asker piyade;
	
	piyade.can=100;
	piyade.mermi=250;
	printf("can: %d --- mermi sayisi: %d",piyade.can,piyade.mermi);
	
	
	
	return 0;
}
