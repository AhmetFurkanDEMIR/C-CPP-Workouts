// AD,SOYAD: Ahmet Furkan DEMÝR  NO: 19010011019
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <conio.h>

int Zharf(int x){
	
	int i,j,yboyut,a;
	
	yboyut=x-2;
	if(x%2!=0){
		yboyut=x-1;
	}
	
	for(i=0;i<yboyut/2+1;i++){
		printf(" * *");
		
	}
	printf("\n");
	
	for(i=0;i<yboyut/2+1;i++){
		printf(" * *");
		
	}
	a=yboyut;
	printf("\n");
	
	for(i=0;i<yboyut;i++){
		
		for(j=0;j<a;j++){
			printf("  ");
		}
		a=a-1;
		
		printf(" * *");
		
		printf("\n");
	}
	
	for(i=0;i<yboyut/2+1;i++){
		printf(" * *");
		
	}
	printf("\n");
	
	for(i=0;i<yboyut/2+1;i++){
		printf(" * *");
		
	}
	
	printf("\n\n");
	
	return 0;
}

int Yharf(int q){
	
	int yboyut,i,j,a,s,x,y,z;
	
	
	yboyut=q;
	if(q%2!=0){
		yboyut=q+1;
	}
	
	a=yboyut/2;
	s=yboyut/4-(yboyut*2/8);
	z=yboyut/2+(yboyut*8/15);
    
	for(i=0; i<a; i++)
    {
    	z=z-2;
		y=z;        
        for(j=0; j<s; j++)
        {
            printf("  ");
        }
        
        s=s+1;
        
		printf(" * *");
		
		while(y>0){
			printf("  ");
			y=y-1;
		}
		printf(" * *");
		
		
        printf("\n");
    }
	for(i=0;i<s-1;i++){
		printf("  ");
	}
	printf("\n");
	for(i=0;i<yboyut;i++){
		
		for(j=0;j<yboyut/2;j++){
		printf("  ");
	}
	printf(" * *");
	printf("\n");
		
	}
	
	printf("\n\n");
	
	return 0;
}

int Mharf(int x)
{   
    int i,j,yboyut;
	
	yboyut=x-x/2-1;

    if(x%2!=0)
    {
        yboyut=x+1-x/2-1;
    }
    
    if(x<9){
    	yboyut=x-2;
	}
    
    for (i = 0; i < yboyut+2; i++)
    {
        for (j = 0; j < yboyut; j++)
        {
            if (j==0 || i==j && j<yboyut/2 && i<yboyut/2 || i==yboyut-j-1 && i<yboyut/2 && j<yboyut &&  j>yboyut/2+-1 || j==yboyut-1 || i==j && i==yboyut/2-1 && j==yboyut/2-1)
            {
                printf(" * *");
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
    printf("\n\n");

    return 0;
}

int Nharf(int x){
	
	int i,j,yboyut;
	
	yboyut=x;

    if(x%2!=0)
    {
        yboyut=x+1;
    }
	
	for (i=0;i<yboyut-2;i++) 
    {
        for (j=0;j<yboyut;j++)
        {
            if (j==0||j==yboyut-1||i==j-1)
            {
                printf(" * *");
               
            }
            else
            {
                printf("  ");
            }
          
            
        }
         
        printf("\n");
    }
    
    printf("\n\n");
	
	
	return 0;
}

int Vharf(int q){
	
	int yboyut,i,j,a,s,x,y,z;
	
	
	yboyut=q;
	if(q%2!=0){
		yboyut=q+1;
	}
	
	a=yboyut/2;
	s=yboyut/4-(yboyut*2/8);
	z=yboyut/2+(yboyut*8/15);
    for(i=0; i<a; i++)
    {
    	z=z-2;
		y=z;        
        for(j=0; j<s; j++)
        {
            printf("  ");
        }
        
        s=s+1;
        
		printf(" * *");
		
		while(y>0){
			printf("  ");
			y=y-1;
		}
		printf(" * *");
		
		
        printf("\n");
    }
	for(i=0;i<s-1;i++){
		printf("  ");
	}
	printf(" * *");
	printf(" * *");
	printf("\n\n");
 	
	return 0;
}

int Sharf(int x){
	
	
	int i,yboyut,a,j;

    yboyut=x;

    if(x%2!=0)
    {
        yboyut=x+1;
    }
  
  	for(i=0;i<yboyut/2;i++){
  		printf(" * *");
  		
	  }
	printf("\n");
	for(i=0;i<yboyut/2;i++){
  		printf(" * *");
  		
	  }
	printf("\n");
	for(i=0;i<yboyut/4+1;i++){
		printf(" * *");
		printf("\n");
	}
	for(i=0;i<yboyut/2;i++){
  		printf(" * *");
  		
	  }
	printf("\n");
	
	for(i=0;i<yboyut/2;i++){
  		printf(" * *");
  		
	  }
	 printf("\n");
	
	a=yboyut/2-1;
	
	for(i=0; i<yboyut/4+1; i++)
    {
        
        for(j=0; j<yboyut-2; j++)
        {
            printf("  ");
        }
        printf(" * *");
        printf("\n");
    }
	
	
	for(i=0;i<yboyut/2;i++){
  		printf(" * *");
  		
	  }
	
	printf("\n");
	
	for(i=0;i<yboyut/2;i++){
  		printf(" * *");
  		
	  }
	  
	  printf("\n\n");
	  
	return 0;
}

int Pharf(int x){
	
	
	int i,yboyut,a,j;

    yboyut=x-3;

    if(x%2!=0)
    {
        yboyut=x+1-3;
    }
    printf("  ");
    for(i=0;i<yboyut/2+1;i++){
    	
		printf(" * *");
	}
	printf("\n");
	printf("  ");
	
	for(i=0;i<yboyut/2+1;i++){
    	
		printf(" * *");
	}
	
	a=yboyut;

    for(i=0; i<a; i++)
    {
        printf("\n");
        printf(" * *");
        for(j=0; j<yboyut; j++)
        {
            printf("  ");
        }
        printf(" * *");
    }
    
	printf("\n");

    
	for(i=0;i<yboyut/2+2;i++){
    	
		printf(" * *");
	}
	
	printf("\n");
    
	for(i=0;i<yboyut/2+2;i++){
    	printf(" * *");
	}
	printf("\n");
	for(i=0;i<a/2+2;i++){
		printf(" * *");
		printf("\n");
	}
    
    printf("\n\n");
	
	return 0;
}

int Oharf(int x){
	
	int i,yboyut,a,j;

    yboyut=x-3;

    if(x%2!=0)
    {
        yboyut=x+1-3;
    }
    printf("  ");
    for(i=0;i<yboyut/2+1;i++){
    	
		printf(" * *");
	}
	printf("\n");
	printf("  ");
	
	for(i=0;i<yboyut/2+1;i++){
    	
		printf(" * *");
	}
	
	a=yboyut;

    for(i=0; i<a; i++)
    {
        printf("\n");
        printf(" * *");
        for(j=0; j<yboyut; j++)
        {
            printf("  ");
        }
        printf(" * *");
    }
    
	printf("\n");
    printf("  ");
    
	for(i=0;i<yboyut/2+1;i++){
    	
		printf(" * *");
	}
	
	printf("\n");
	printf("  ");
    
	for(i=0;i<yboyut/2+1;i++){
    	printf(" * *");
	}
    
    printf("\n\n");
	
	return 0;
}

int Kharf(int x){
	
	int i,yboyut,a,j;

    yboyut=x;

    if(x%2!=0)
    {
        yboyut=x+yboyut/2;
    }
    a=yboyut/2;
    	
	for(i=0;i<yboyut/2-1;i++){
		printf(" * *");
		for(j=0;j<a;j++){
			printf("  ");
		}
		a=a-1;
		
		printf(" * *");
		printf("\n");
	}
	
	for(i=0;i<yboyut/2-1;i++){
		printf(" * *");
		for(j=0;j<a;j++){
			printf(" ");
		}
		a=a+2;
		
		printf(" * *");
		printf("\n");
	}
	printf("\n\n");
	
	
	return 0;
}

int Aharf(int x)
{

    int i,yboyut,a,j;

    yboyut=x;

    if(x%2!=0)
    {
        yboyut=x+1;
    }

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    a=yboyut/2-1;

    for(i=0; i<a; i++)
    {
        printf("\n");
        printf(" * *");
        for(j=0; j<yboyut-4; j++)
        {
            printf("  ");
        }
        printf(" * *");
    }

    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    for(i=0; i<a; i++)
    {

        printf("\n");
        printf(" * *");

        for(j=0; j<yboyut-4; j++)
        {

            printf("  ");
        }

        printf(" * *");
    }
    printf("\n\n");

    return 0;
}

int Gharf(int x)
{

    int i,yboyut,a,j;
    yboyut=x;

    if(x%2!=0)
    {
        yboyut=x+1;
    }

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    a=yboyut/2;
    printf("\n");

    for(i=0; i<a; i++)
    {

        printf(" * *");
        printf("\n");
    }
    if(yboyut>15)
    {
        a=a-3;
    }

    printf(" * *");

    for(i=0; i<a; i++)
    {
        printf(" ");
    }

    for(i=0; i<yboyut-a; i++)
    {
        printf(" *");
    }

    printf("\n");
    printf(" * *");

    for(i=0; i<a; i++)
    {
        printf(" ");
    }

    for(i=0; i<yboyut-a; i++)
    {
        printf(" *");
    }

    for(i=0; i<a-1; i++)
    {

        printf("\n");
        printf(" * * ");

        for(j=0; j<yboyut-4; j++)
        {

            printf("  ");

        }
        printf(" * * ");

    }
    printf("\n");
    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }
    printf("\n\n");
    return 0;
}

int Uharf(int x)
{

    int i,yboyut,a,j;
    yboyut=x;

    if(x%2!=0)
    {
        yboyut=x+1;
    }


    a=yboyut;

    for(i=0; i<a; i++)
    {

        printf("\n");
        printf(" * *");



        for(j=0; j<yboyut-2; j++)
        {


            printf("  ");


        }
        printf(" * *");

    }
    printf("\n");

    for(i=0; i<yboyut+2; i++)
    {
        printf(" *");
    }
    printf("\n");
    for(i=0; i<yboyut+2; i++)
    {
        printf(" *");
    }
    printf("\n\n");

    return 0;
}

int Lharf(int x)
{

    int yboyut,i,j,a;
    yboyut=x;

    if(x%2!=0)
    {
        yboyut=x+1;
    }

    for(i=0; i<yboyut; i++)
    {
        printf(" * *");
        printf("\n");
    }

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }
    printf("\n\n");

    return 0;
}

int Rharf(int x)
{

    int i,yboyut,a,j;


    if(x%2!=0)
    {
        yboyut=x+1;
    }

    yboyut=x;

    for(i=0; i<x+1; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<x+2; i++)
    {
        printf(" *");
    }

    a=yboyut/2-1;

    for(i=0; i<a; i++)
    {
        printf("\n");
        printf(" * *");
        for(j=0; j<yboyut-2; j++)
        {
            printf("  ");
        }
        printf("  * *");
    }

    printf("\n");

    for(i=0; i<x+1; i++)
    {
        printf(" *");
    }

    printf("\n");

    for(i=0; i<x+1; i++)
    {
        printf(" *");
    }

    for(i=0; i<a; i++)
    {
        printf("\n");
        printf(" * *");
        for(j=0; j<yboyut-2; j++)
        {

            printf("  ");
        }

        printf("* *");
    }
    printf("\n\n");

    return 0;
}

int Hharf(int x)
{

    int yboyut,i,j,a;
    yboyut=x;

    if(x%2!=0)
    {
        yboyut=x+1;
    }

    a=yboyut/2-1;

    for(i=0; i<a; i++)
    {
        printf("\n");
        printf(" * *");
        for(j=0; j<yboyut-4; j++)
        {

            printf("  ");
        }
        printf(" * *");

    }
    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    for(i=0; i<a; i++)
    {
        printf("\n");
        printf(" * *");
        for(j=0; j<yboyut-4; j++)
        {

            printf("  ");
        }
        printf(" * *");

    }
    printf("\n\n");


    return 0;
}

int Iharf(int x)
{

    int yboyut,i,j,a;
    yboyut=x;

    if(x%2!=0)
    {
        yboyut=x+1;
    }

    for(i=0; i<yboyut/4; i++)
    {

        for(j=0; j<yboyut-1/2; j++)
        {
            printf(" ");
        }
        printf(" * *");
        printf("\n");
    }
    printf("\n\n");

    for(i=0; i<yboyut; i++)
    {

        for(j=0; j<yboyut-1/2; j++)
        {

            printf(" ");
        }
        printf(" * *");
        printf("\n");
    }
    printf("\n");

    return 0;
}

int Jharf(int x)
{

    int yboyut,i,j,a;
    yboyut=x;

    if(x%2!=0)
    {
        yboyut=x+1;
    }

    for(i=0; i<yboyut/4; i++)
    {

        for(j=0; j<yboyut-1/2; j++)
        {
            printf(" ");
        }
        printf(" * *");
        printf("\n");
    }
    printf("\n\n");

    for(i=0; i<yboyut-3; i++)
    {

        for(j=0; j<yboyut-1/2; j++)
        {

            printf(" ");
        }
        printf(" * *");
        printf("\n");
    }


    for(i=0; i<yboyut/4; i++)
    {
        printf("  ");
    }
    a=yboyut/3+1;
    if(yboyut<11)
    {
        a=yboyut/3+2;
    }
    for(i=0; i<a; i++)
    {
        printf(" *");
    }
    printf("\n");
    for(i=0; i<yboyut/4; i++)
    {
        printf("  ");
    }

    for(i=0; i<a; i++)
    {
        printf(" *");
    }
    printf("\n\n");

    return 0;
}

int Bharf(int x)
{

    int yboyut,i,j,a,sayac;
    yboyut=x;

    if(x%2!=0)
    {
        yboyut=x+1;
    }

    for(i=0; i<yboyut-1; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    a=yboyut/2-1;

    for(i=0; i<a; i++)
    {
        printf("\n");
        printf(" * *");
        for(j=0; j<yboyut-4; j++)
        {


            printf("  ");
            sayac=sayac+1;

        }
        printf(" * *");

    }
    printf("\n");
    for(i=0; i<yboyut-1; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    for(i=0; i<a; i++)
    {
        printf("\n");
        printf(" * *");
        for(j=0; j<yboyut-4; j++)
        {


            printf("  ");
            sayac=sayac+1;

        }
        printf(" * *");

    }
    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut-1; i++)
    {
        printf(" *");
    }

    printf("\n\n");

    return 0;
}

int Charf(int x)
{

    int i,yboyut;
    yboyut=x;

    if(x%2!=0)
    {
        yboyut=x+1;
    }

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    for(i=0; i<yboyut; i++)
    {
        printf("\n");

        printf(" * *");
    }

    for(i=0; i<yboyut-2; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    printf("\n\n");

    return 0;
}

int Dharf(int x)
{

    int yboyut,i,j,a;
    yboyut=x;

    if(x%2!=0)
    {
        yboyut=x+1;
    }

    for(i=0; i<yboyut-1; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    a=yboyut/2-1;

    for(i=0; i<a+7; i++)
    {
        printf("\n");
        printf(" * *");
        for(j=0; j<yboyut-4; j++)
        {


            printf("  ");


        }
        printf(" * *");

    }
    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut-1; i++)
    {
        printf(" *");
    }

    printf("\n\n");

    return 0;
}

int Eharf(int x)
{

    int i,yboyut;

    yboyut=x;
    if(x%2!=0)
    {
        yboyut=x+1;
    }

    for(i=0; i<yboyut; i++)
    {

        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut; i++)
    {

        printf(" *");
    }

    printf("\n");
    for(i=0; i<x-4; i++)
    {

        printf(" * *");
        printf("\n");
    }
    for(i=0; i<yboyut; i++)
    {
        printf(" *");

    }

    printf("\n");

    for(i=0; i<yboyut; i++)
    {

        printf(" *");
    }

    printf("\n");
    for(i=0; i<x-4; i++)
    {

        printf(" * *");
        printf("\n");
    }
    for(i=0; i<yboyut; i++)
    {

        printf(" *");

    }

    printf("\n");

    for(i=0; i<yboyut; i++)
    {

        printf(" *");
    }

    printf("\n\n");

    return 0;
}

int Fharf(int x)
{

    int yboyut,i,j,a;
    yboyut=x;

    if(x%2!=0)
    {
        yboyut=x+1;
    }

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    a=yboyut/2;

    for(i=0; i<a; i++)
    {

        printf("\n");
        printf(" * *");

        for(j=0; j<yboyut; j++)
        {

            printf("  ");
        }
    }

    printf("\n");

    for(i=0; i<yboyut-3; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut-3; i++)
    {
        printf(" *");
    }

    for(i=0; i<a; i++)
    {

        printf("\n");
        printf(" * *");

        for(j=0; j<yboyut; j++)
        {


            printf("  ");
        }

    }
    printf("\n\n");

    return 0;
}

int bosluk(int x)
{

    int i;

    for(i=0; i<x; i++)
    {
        printf("\n");
    }

    return 0;
}

int Tharf(int x)
{


    int yboyut,c=0;
    yboyut=x;
    if(x%2!=0)
    {
        yboyut=x+1;
    }

    int i;

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }
    printf("\n");

    for(i=0; i<yboyut; i++)
    {
        printf(" *");
    }

    int b=yboyut/2-1;

    printf("\n");
de :
    for(i=0; i<b; i++)
    {

        printf("  ");

    }
    for(i=0; i<yboyut; i++)
    {
        c=c+1;
        printf(" * *");
        printf("\n");
        if(yboyut==c+2)
        {
            break;
        }
        else if(c!=yboyut)
        {
            goto de;
        }

    }
    printf("\n");

    return 0;
}


int calistir(int sayi, int k)
{
	
	
    int i,j;
    char yazi[20];
    char gecicii;
    
	
	system("cls");
    printf("\n  ----------DEMIR----------");

    printf("\n\n  yazi veya karekter giriniz (30 karekter hakkiniz var, Turkce karekterler girmeyiniz!!)\n  = ");
	gets(yazi);
    
    system("cls");

    printf("---------------------------");
    printf("\n\n");

    for(i=0; yazi[i]!='\0'; i++)
    {


        if(yazi[i]==' ')
        {
            bosluk(sayi);
        }

        else if(yazi[i]=='e' || yazi[i]=='E')
        {
            Eharf(sayi);
        }

        else if(yazi[i]=='t' || yazi[i]=='T')
        {
            Tharf(sayi);
        }

        else if(yazi[i]=='a' || yazi[i]=='A')
        {
            Aharf(sayi);
        }

        else if(yazi[i]=='b' || yazi[i]=='B')
        {
            Bharf(sayi);
        }

        else if(yazi[i]=='c' || yazi[i]=='C')
        {
            Charf(sayi);
        }

        else if(yazi[i]=='d' || yazi[i]=='D')
        {
            Dharf(sayi);
        }

        else if(yazi[i]=='f' || yazi[i]=='F')
        {
            Fharf(sayi);
        }

        else if(yazi[i]=='i' || yazi[i]=='I')
        {
            Iharf(sayi);
        }

        else if(yazi[i]=='h' || yazi[i]=='H')
        {
            Hharf(sayi);
        }

        else if(yazi[i]=='l' || yazi[i]=='L')
        {
            Lharf(sayi);
        }

        else if(yazi[i]=='u' || yazi[i]=='U')
        {
            Uharf(sayi);
        }

        else if(yazi[i]=='r' || yazi[i]=='R')
        {
            Rharf(sayi);
        }

        else if(yazi[i]=='g' || yazi[i]=='G')
        {
            Gharf(sayi);
        }

        else if(yazi[i]=='j' || yazi[i]=='J')
        {
            Jharf(sayi);
        }
        
        else if(yazi[i]=='k' || yazi[i]=='K')
        {
        	
            Kharf(sayi);
        }
        
        else if(yazi[i]=='o' || yazi[i]=='O')
        {
            Oharf(sayi);
        }
        
        else if(yazi[i]=='p' || yazi[i]=='P')
        {
            Pharf(sayi);
        }
        
        else if(yazi[i]=='s' || yazi[i]=='S')
        {
            Sharf(sayi);
        }
        
        else if(yazi[i]=='v' || yazi[i]=='V')
        {
            Vharf(sayi);
        }
	
		else if(yazi[i]=='n' || yazi[i]=='N')
        {
            Nharf(sayi);
        }
        
        else if(yazi[i]=='y' || yazi[i]=='Y')
        {
            Yharf(sayi);
        }
		
		else if(yazi[i]=='m' || yazi[i]=='M')
        {
            Mharf(sayi);
        }
        
        else if(yazi[i]=='z' || yazi[i]=='Z')
        {
            Zharf(sayi);
        }
		
    }
	
	if(k==1){
		main1(sayi);
	}
    printf("---------------------------");
    
	printf("\n\n  Ana menuye donmek icin herhangi bir harfe, calistir fonksiyonunda kalmak icin C\' harfine basiniz.");
    gecicii=getch();

    if(gecicii=='c' || gecicii=='C')
    {
        calistir(sayi,i);
    }


    return 0;
}

int main(){

	int sayi;
	
	
	
	FILE *ptr;
	ptr = fopen("settings.demir","r"); 
		
	fscanf(ptr,"%d",&sayi);

	fprintf(ptr,"%d",sayi);
	
	main1(sayi);

	
}

int main1(int sayi)
{

    int kontrol,i=0;
	
	while(1)
    {

        char secim,secim1,renk1;
ana :
        system("cls");
		Beep(750, 300);
        printf("\n  ----------DEMIR----------");
        printf("\n\n  1) Calistir");
        printf("\n\n  2) Uygulama ayarlari");
        printf("\n\n  3) Yazilim hakkinda");
        printf("\n\n  Q) cikis");
        printf("\n\n   Secim= ");
        secim=getch();

        switch(secim)
        {

        case '1':
            
			calistir(sayi,i);
			
            break;

        case '2':


uygu :
            system("cls");
            printf("\n  ----------DEMIR (Uygulama ayarlari)----------");
            printf("\n\n  1) yazi boyutu\n\n  2) yazi renkleri\n\n  A) Ana menu\n\n  Q) cikis ");
            printf("\n\n  Secim= ");
            secim1=getch();

            if(secim1=='q' || secim1=='Q')
            {
            	system("cls");
				printf("\n  ----------DEMIR----------\n\n");
                exit(2);
            }

            else if(secim1=='A' || secim1=='a')
            {
                goto ana;
            }

            switch(secim1)
            {


            case '1':
                
				system("cls");
                printf("\n  ----------DEMIR (Uygulama ayarlari - Yazi boyutu)----------");
                printf("\n\n  Suanki yazi boyutu = %d",sayi);
                printf("\n\n  yazi boyutu= ");

                scanf("%d",&kontrol);
			
                if(kontrol<7)
                {
                	Beep(500, 600);
                    printf("\n\n  HATA!! (yazi boyutunu minimum 7 yapabilirsiniz. Devam etmek icin herhangi bir tusa basiniz.)");
                    kontrol=0;
                    getch();
                    i=i+1;
					calistir(sayi,i);
                }
                

                else
                {
                    sayi=kontrol;
                    printf("\n\n  Islem basarili :) \n\n  yazi boyutu %d olarak degistirilmistir. Devam etmek icin herhangi bir tusa basiniz. ",sayi);
                    getch();
					FILE *ptr;
					
					ptr = fopen("settings.demir","w+"); 
					
					fscanf(ptr,"%d",&sayi);

					fprintf(ptr,"%d",sayi);
					fclose(ptr);
					i=i+1;
					
					calistir(sayi,i);
                            
                }
            
                printf("\n\n  Ana menuye donmek icin herhangi bir harfe, Uygulama ayarlarinda kalmak icin U\' harfine basiniz.");
                secim1=getch();
                
				if(secim1=='u' || secim1=='U')
                {
                    goto uygu;
                }

                break;

            case '2':


                system("cls");
                printf("\n  ----------DEMIR (Uygulama ayarlari - Yazi renkleri)----------");
                printf("\n\n  Y) Yesil\n\n  D) Deniz mavisi\n\n  K) Kirmizi\n\n  M) Mor\n\n  S) Sari\n\n  B) Beyaz");
                printf("\n\n  Yazi renginizi seciniz= ");
                renk1=getch();

                if(renk1=='y' || renk1=='Y')
                {

                    system("color a");
                    printf("\n\n  Yazi renginiz %s olarak degistirildi :)","yesil");
                }

                else if(renk1=='D' || renk1=='d')
                {
                    system("color b");
                    printf("\n\n  Yazi renginiz %s olarak degistirildi :)","Deniz mavisi");
                  
                }

                else if(renk1=='K' || renk1=='k')
                {
                    system("color c");
                    printf("\n\n  Yazi renginiz %s olarak degistirildi :)","kirmizi");
                }

                else if(renk1=='M' || renk1=='m')
                {
                    system("color d");
                    printf("\n\n  Yazi renginiz %s olarak degistirildi :)","mor");
                }

                else if(renk1=='s' || renk1=='S')
                {
                    system("color e");
                    printf("\n\n  Yazi renginiz %s olarak degistirildi :)","sari");
                }

                else if(renk1=='b' || renk1=='B')
                {
                    system("color f");
                    printf("\n\n  Yazi renginiz %s olarak degistirildi :)","beyaz");
                }

                else
                {	
                	Beep(500, 600);
                    printf("\n\n  HATA (Menude istenilen karekterleri giriniz)");
                }

                printf("\n\n  Ana menuye donmek icin herhangi bir harfe, Uygulama ayarlarinda kalmak icin U\' harfine basiniz.");
                secim1=getch();
                if(secim1=='u' || secim1=='U')
                {
                    goto uygu;
                }


                break;

            default:
                
				goto uygu;
                break;

            }

            break;
	
		case '3':
			
			system("cls");
			printf("\n  ----------DEMIR (Yazilim Hakkinda)----------\n\n");
			printf("  Tanimli harfler: z, m, y, n, v, s, p, o, k, j, g, r, u, l, h, i, f, d, c, b, a, t, e");
			printf("\n\n  Yazi boyutununu tanimlanabilmesi icin dosya konumunda settings.demir adli dosya bulunmalidir.");
			printf("\n\n  Yazi boyutu minimum 7 olarak ayarlanmistir.\n\n");
			printf("\n\n  Daha fazlasi icin https://1demir.tr.gg/ adresini ziyaret ediniz.");
			
			printf("\n\n  Ana menuye donmek icin herhangi bir harfe, Uygulamadan cikmak icin Q\' harfine basiniz.");
                secim1=getch();
                if(secim1=='q' || secim1=='Q')
                {
                    system("cls");
					printf("\n  ----------DEMIR----------\n\n");
               		exit(2);
                }
			break;
			
        case 'q':
			system("cls");
			printf("\n  ----------DEMIR----------\n\n");
            exit(2);
            

        }
    }

    return 0;
}
