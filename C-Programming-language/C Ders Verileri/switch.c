#include <stdio.h>

int main(){

	int a;
	int ind;
	
	printf("sayi:");
	scanf("%d",&a);
	
	switch(a){
		
		case 1: case 99:
				printf("pazartesi");
				break;
		 
		case 2 :
				printf("sali");
				break;
		 
		case 3 :
				printf("çrþmb");
				break;
		 
		case 4 :
				printf("perþ");
				break;
		 
		case 5 :
				printf("cuma");
				break;
		 
		case 6 :
				printf("cmt");
				break;
		 
		case 7 :
				printf("pazar");
				break;
		 
		default :
			printf("yanlis gun");
			break;
		
		
		
	}
	

	return 0;
}
