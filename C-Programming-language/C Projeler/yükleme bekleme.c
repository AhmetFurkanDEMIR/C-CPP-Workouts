#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void giris(){
	
	system("color c3");
	
	int i,j;
	j=0;
	
	for(i=0;i<65;i++){
		
		if(i>=0 && i<=9){
			
			system("cls");
			printf("\n\n   ");
			printf("%d",j);
			Sleep(20);
			j++;
			
			
		}
		
	
		
		if(i>=9 && i<=18){
		
			system("color c5");
			if(i==9){
				j=0;
			}
			
			system("cls");
			printf("\n\n   ");
			printf("#");
			printf(" %d",j);
			Sleep(20);
			j++;
			
		}
		
		if(i>=18 && i<=27){
		
			system("color c6");
			if(i==18){
				j=0;
			}
			
			system("cls");
			printf("\n\n   ");
			printf("# #");
			printf(" %d",j);
			Sleep(20);
			j++;
			
		}
		
		if(i>=27 && i<=36){
		
			system("color c3");
			if(i==27){
				j=0;
			}
			
			system("cls");
			printf("\n\n   ");
			printf("# # #");
			printf(" %d",j);
			Sleep(20);
			j++;
			
		}
		
		if(i>=36 && i<=45){
		
			system("color c8");
			if(i==36){
				j=0;
			}
			
			system("cls");
			printf("\n\n   ");
			printf("# # # #");
			printf(" %d",j);
			Sleep(20);
			j++;
			
		}
		
		if(i>=45 && i<=54){
		
			system("color c0");
			if(i==45){
				j=0;
			}
			
			system("cls");
			printf("\n\n   ");
			printf("# # # # #");
			printf(" %d",j);
			Sleep(20);
			j++;
			
		}
		
		if(i>=54 && i<=63){
			
			system("color c9");
			if(i==54){
				j=0;
			}
			
			system("cls");
			printf("\n\n   ");
			printf("# # # # # #");
			printf(" %d",j);
			Sleep(20);
			j++;
			
			if(i==63){
				
				system("cls");
				printf("\n\n   ");
				printf("# # # # # # #");
			}
			
		}
		
	}
		
	
}

int main(){
	
	giris();
	
	
	
	
	
	
	
	
	return 0;
}
