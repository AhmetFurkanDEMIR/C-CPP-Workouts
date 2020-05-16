# include <iostream>



using namespace std;

void listele(int *ptr){


	for(int i=0;i<10;i++){

		cout << *(ptr+i) << endl;


	}


}

void degistir(int *ptr){


	for(int i=0;i<10;i++){

		*(ptr+i) = i;


	}

}

int main(){
	system("clear");
	cout << endl; 

	int veri[] = {8,5,6,3,4,2,99,-9,5,3}; 

	int *ptr = veri;


	listele(ptr);

	degistir(&veri[0]);

	cout << endl;

	listele(ptr);


	cout << endl << endl;
}