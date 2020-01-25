/*El include iostream sirve para entrada y salida de datos en consola
  El include string sirve para utilizar cadenas de texto*/
#include<iostream>
#include<string>
#include<stack>
using namespace std;

//Creando el registro para cada producto
struct product{
	string name;
	int quantity;
	float price;
};
typedef struct product P; //Dandole un "alias" a nuestro registro

stack<P>stackOfProducts; //Creando nuestra pila 

int main(){
	
	P aux; //Declarando la variable aux de tipo P que almacenará los datos del producto
	
	bool next = true;         /*Declaramos la variable booleana next y le asignamos el valor de verdadero
	                          esto para realizar el bloque de instrucciones en caso de que el usuario
						      decida ingresar los datos de un producto*/
    
	do{                                                                              
		char option = 's';
		cout << "\nCantidad de productos actual: " << stackOfProducts.size();      //Usamos el bucle Do/while para preguntar si se desea ingresar otro producto
        cout << "\nDesea ingresar un producto? (s/n): ";
        cin >> option; cin.ignore();
        
        if(option == 's'){       //Con este condicional estamos verificacndo que la opcion ingresada fue (si)
            
			P aux;
            
        cout << "\n*****Ingrese los datos del producto*****" << endl;   //Le pedimos al usuario los datos del producto
	    cout << "\nNombre: ";
	    getline(cin,aux.name);
	    cout << "Cantidad: ";                                 
	    cin >> aux.quantity;
	    cout << "Precio: $";
	    cin >> aux.price;
	    stackOfProducts.push(aux); //Con el comando push metemos a la pila los datos digitados  
    }
    else if(option == 'n')         /*Si el usuario decide no ingresar otro producto
                                    el programa termina su ejecucion*/
			next = false;      
}while(next);
	
	return 0;
}