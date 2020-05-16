#include <stdio.h>
#include <stdlib.h>


int main(){
		
	int d;
	
	printf("\n 1) ilk bahar\n 2) son bahar\n 3) yaz\n 4) kis ");
	
	printf("\n\n sayi gir: ");
	scanf("%d",&d);
	
	switch(d){
		
		case 1:
			printf("\n ilk bahar");
			break;
		
		case 2:
			printf("\n son bahar");
			break;	
		
		case 3:
			printf("\n yaz");
			break;
			
		case 4:
			printf("\n kis");
			break;
		
		default:
			printf("\n hatali secim");
		
	}
	
	
	return 0;
}

