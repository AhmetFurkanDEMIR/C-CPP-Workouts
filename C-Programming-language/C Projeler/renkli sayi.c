#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

char dizi[100];

void renk(x){

	
	int random=x;
	
	switch(random){
		
		case 1:
			system("color b0");
			break;
			
		case 2:
			system("color b1");
			break;
		
		case 3:
			system("color b2");
			break;
		
		case 4:
			system("color b3");
			break;
			
		case 5:
			system("color b4");
			break;
			
		case 6:
			system("color b5");
			break;
			
		case 7:
			system("color b6");
			break;
			
		case 8:
			system("color b7");
			break;
			
		case 9:
			system("color b8");
			break;
			
		case 10:
			system("color b9");
			break;
	
	
}
	
	
}

int main(){
	
	srand(time(NULL));
	int random=rand()%11;
	int i;
	printf("\n\n   Metin giriniz: ");
	gets(dizi);
	
	for(i=0;dizi[i]!='\0';i++){
		
		printf("% c",dizi[i]);
		
		renk(random);
		Sleep(200);
		random=rand()%11;
		
		
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
