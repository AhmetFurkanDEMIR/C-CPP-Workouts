#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main(){
	
	int sayi1=5;
	int fakt=1;
	int a=1;
	
	for(a=1;a<=sayi1;a++){
		fakt=fakt*a;
	}
	
	printf("%d",fakt);
	
	return 0;
}
