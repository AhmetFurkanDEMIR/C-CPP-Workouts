#include <stdio.h>


int main(){
	
	ucgen();
	
	
}




int ucgen(){
	
	int satirsayisi,a,b;
	
	printf("satir sayisini giriniz: ");
	scanf("%d",&satirsayisi);
	printf("\n");
	
	for(a=1;a<=satirsayisi;a++){
		
		for(b=1;b<=a;b++){
			
			printf(" * ");
			
		}
		
		printf("\n");
	}
	
	
	
	
	
}
