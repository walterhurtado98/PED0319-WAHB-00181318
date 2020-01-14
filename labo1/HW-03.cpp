#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int array[15];

void fillRandom(){
	for(int i=0;i<15;i++){
		array[i] = 1+rand() % 75;
	}
}
void readArray(){
	for(int i=0; i<15; i++){
		cout<<array[i]<<", ";
	}
}

int addMultiplesOfSeven(){
	int summation = 0;
	for(int i=0; i<15; i++){
		if(array[i] % 7 == 0){
			summation += array[i];
		}
	}
	return summation;
}

int main(void){
	srand(time(NULL));
	fillRandom();
	cout<<"Los elementos generados aleatoreamente y guardados en el arreglo son: ";
	readArray();
	cout<<endl<<endl;
	cout<<"La sumatoria de los elementos en el arreglo que son multiplos de 7 es: "<< addMultiplesOfSeven()<<endl;
	return 0;
}
