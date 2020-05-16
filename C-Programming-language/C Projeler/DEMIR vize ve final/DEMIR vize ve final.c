#include <stdio.h>

int main(){

	
	int secim;
	
	printf("\n DEMIR ©2019 Vize ve Final hesaplari");
	printf("\n\n  1\) Elimde sadece vize notum var\n\n  2) Elimde vize ve Final notlarim var\n\n  seciminiz= ");
	scanf("%d",&secim);
	
	if(secim==1){
		tek();}//if
		
	else if(secim==2){
		hepsi();}//else if
	
	else{
		printf("  hatali secim yaptiniz.");}//else
	
	
	return 0;
}


int tek(){
	
	float vize;
	float final;
	
	printf("\n\n  Vize notunuzu giriniz: ");
	scanf("%f",&vize);
	
	for(final=0;final<=100;final++){
		
		if((vize*0.4)+(final*0.6)>=60){
			break;}//if
		}//for
	
	printf("\n\n  Final den alinmasi gereken minumum puan= %f\n\n",final);
	
}//tek
	
int hepsi(){
	
	float top;
	float vize;
	float final;
	
	printf("\n\n  Vize notunuzu giriniz: ");
	scanf("%f",&vize);
	
	printf("\n\n  Final notunuzu giriniz: ");
	scanf("%f",&final);
	
	top=(vize*0.4)+(final*0.6);
	
	if(vize<=100 && final<=100){
	
	if(top>=60){
			printf("\n\n  Tebrikler Dersi gectiniz\n\n  Notunuz= %f\n\n",top);}//if
			
		else if(top<60){
			printf("\n\n  Malesef dersi gecemediniz\n\n  notunuz= %f\n\n",top);}//else if	
	}//if

	else{
		printf("\n\n  Vize veya Final notlarinizdan herhangi biri 100 den buyuk olamaz\n\n");}//else
	}

