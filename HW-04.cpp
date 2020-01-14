#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int longiCadena, resultado=0, numeros=0, letras=0, espacio=0;;
string cadena;

int longitudCadena(){
	int i=0;
	while(cadena[i] != '\0'){
		i++;
	}
	return i;
}
void verificarCadena(){
	
	for(int i=0;i<longiCadena;i++){
		if(cadena[i] >= 48 && cadena[i] <= 57){
			numeros=numeros+1;
		}
		else if((cadena[i] >= 97 && cadena[i] <= 122) || (cadena[i] >= 65 && cadena[i] <= 90)){
			letras=letras+1;;
		}
	}
	if(numeros == longiCadena){
		resultado = 1;
	}
	else if(numeros + letras == longiCadena && ((numeros !=0) && (letras != 0))){
		resultado = 0;
	}
	else if(letras == longiCadena){
		resultado = -1;
	}
}

int main(void){
	cout<<"Ingrese la cadena de caracteres a verificar (no mas de 40 caracteres, y sin espacios): "<<endl;
	getline(cin, cadena);
	longiCadena=longitudCadena();
	cout<<longiCadena<<endl;
	verificarCadena();
	cout<<"Numeros: "<< numeros<<endl;
	cout<<"Letras: "<< letras<<endl;
	cout<<"Respuesta: "<<resultado<<endl;
	return 0;
}
