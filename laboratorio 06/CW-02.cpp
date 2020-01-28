#include<iostream>
#include<string>
#include<cctype>
using namespace std;

struct node{
    string product;
    float price;
    node* next;
};

void printMenu(void);

int main(void){
    int option = 0;

    do{
        printMenu(); cin >> option; cin.ignore();

        switch (option){
            case 1: 
                cout << "Ingrese datos del producto" << endl;
                cout << "Nombre:\t"; cin >> product;
                cout << "Precio:\t"; cin >> price;

                list = addElement(list, product, price);
                break;

            case 2:
                   cout << "Ingrese el producto a buscar" << endl;
                   cout << "Producto:\t"; cin >> product;
                   product =  converString(product);

                   auxStock = searchStock(list, product);

                   (auxStock == 0) ? cout << "Sin stock" : cout << "Cantidad en stock:\t" << auxStock;
                   break;
            case 0:
            cout << "Saliendo....." << endl;
            break;
    }

}while(option != 0);

string convertString(string product){
    string aux = "";

    for(int i = 0; i < product.length(); i++)
      aux += toupper(product[i]);

      return aux;
}

void printMenu(void){
    cout << "MENU PRINCIPAL" << endl;
    cout << "1.\tAgregar producto" << endl;
    cout << "2.\tBuscar producto" << endl;
    cout << "0.\tSalir" << endl;
}

node* addElement(node* list, string product, float price){
    node* newNode 
}

int searchStock(node* list, string product){
    if(!list)
    return 0;
    else{
        if(product.compare(list->product) == 0)
        return + searchStock(list->next; product)
    }
}