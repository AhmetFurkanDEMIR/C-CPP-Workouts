#include <stdio.h>

int main(){
	
	
	int a=55;
	int *ptr;
	ptr=&a;
	

	printf("a nin konumu: %x",ptr);
	printf("\na nin konumu: %p",ptr);	
	printf("\ndegisken degeri: %d",*ptr);
	
	
	return 0;
}
