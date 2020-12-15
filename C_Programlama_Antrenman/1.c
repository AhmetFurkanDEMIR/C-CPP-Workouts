#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int add(int s11, int s22){

	return s11 + s22;
}

int sub(int s11, int s22){

	return s11 - s22;
	
}

int mult(int s11, int s22){
	return s11*s22;
}

int module(int s11, int s22){

	return s11%s22;
}

int divv(int s11, int s22){
	
	return s11/s22;
}

int main() {
	
	int snc=0;

	while(1){

		int i,j=0,k=0,secim,kontrol=0, s11, s22;
		char parcala[20], s1[10], s2[10], islem[3];
		s2[0] = '\0';

		printf("\nHESAP MAKINESINESI");
		printf("\nIslem->");
		scanf("%s",&parcala);
		
		for(i=0;parcala[i]!='\0';i++){

			if(parcala[i]=='+' || parcala[i]=='-' || parcala[i]=='*' || parcala[i]=='%'){
				
				if(kontrol==0){
					islem[0] = parcala[i];
					islem[1] = '\0';
					islem[2] = '\0';
					kontrol+=1;

					continue;
				}

				else{
					islem[1] = '*';
					islem[2] = '\0';
					continue;
				}
			}

			if(kontrol==0){

				s1[j]=parcala[i];
				j++;
			
			}

			if(kontrol==1){

				s1[j] = '\0';

				s2[k]=parcala[i];
				k++;
				
			}
		}


		if(s2[0]=='\0'){

			s11 = snc;
			s22 = atoi(s1);

		}

		else{

			s11 = atoi(s1);
			s22 = atoi(s2);

		}
		
		for(i=0;islem[i]!='\0';i++){

			if(islem[i]=='%'){
				
				snc = module(s11, s22);

			}

			else if(islem[i]=='+'){

				snc = add(s11, s22);
				
			}


			else if(islem[i]=='-'){
				snc = sub(s11, s22);
			}


			else if(islem[i]=='/'){
				snc = divv(s11, s22);
			}

			else if(islem[i]=='*'){

				if(islem[i+1]=='*'){
					snc = (int)pow((double)s11, (double)s22);
					printf("dsa\n");
				}

				else{

					snc = mult(s11, s22);

				}
			}

		}

		printf("%d\n", snc);

		}

	return 0;
}
