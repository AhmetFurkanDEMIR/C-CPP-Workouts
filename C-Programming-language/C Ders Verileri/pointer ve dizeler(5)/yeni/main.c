#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
	
	int i,j;
	
	int *ptrdizi[]={};
	
	for(i=0;i<3;i++){
		
		printf("\n\n  kelime veya metin giriniz : ");
		scanf("%s",&ptrdizi+i);
		
		/*if(ptrdizi[i]=='*'){
			break;
		}*/
	}
	
	printf("%s",*ptrdizi+0);
	
	/*j=i;
	
	for(i=0;i<j;i++){
		
		printf("%s",*(ptrdizi+i));
		
	}*/
	
	
	
	return 0;
}
