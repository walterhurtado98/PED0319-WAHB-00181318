#include <iostream>

using namespace std;

bool verifyPrimes(int n){
		for(int i=n-1;i>1;i--){
			if(n%i==0){
				return false;
			}
		}
	return true; 
}
int addPrimes(){
	int m = 1, summation=0;
	while(m<=100){
		 if(verifyPrimes(m)){
		 	summation+=m;
		 }
		m++;
	}
	return summation-1;
}
int main(void){
	int num;
	cout<<"La suma de numeros primos del 1 al 10 es: "<<endl;
	cout<< addPrimes();
	return 0;
}