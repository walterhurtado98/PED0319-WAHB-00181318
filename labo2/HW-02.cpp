/*El #include<iostream>: sirve para entrada y salida en consola
  El #include<string>: sirve para la manipulacion de cadenas de caracteres*/

#include <iostream>
#include <string.h>

using namespace std;

struct sellers{
	string name, ID;
	int yearOfHiring, monthlySalary, totalSalary;
};
void fillRecord();
void calculateTotalSalary();
void showTotalSalary();

int cant = 3;
sellers company[3];


int main(void){
	
	fillRecord();
	calculateTotalSalary();
    showTotalSalary();
    
	return 0;
}

void fillRecord(){
	for(int i=0; i<cant;i++){
		cout<<"Empleado N."<< i+1<<endl;
		cout<<"Ingrese el nombre: ";cin>> company[i].name;
		cout<<"Ingrese el dui: ";cin>> company[i].ID;
		cout<<"Ingrese el anio de contratacion: ";cin>> company[i].yearOfHiring;
		cout<<"Ingrese el salario mensual: "<< "$";cin>> company[i].monthlySalary;
		cout<<endl;
	}
}

void calculateTotalSalary(){
	for(int i=0;i<cant;i++){
		company[i].totalSalary = (((2020 - company[i].yearOfHiring)*12)*company[i].monthlySalary);
	}
}

void showTotalSalary(){
	for(int i=0; i<cant;i++){
		cout<<"Empleado N."<< i+1<<endl;
		cout<<"Empleado: "<< company[i].name <<endl;
		cout<<"Salario total: "<< "$" <<company[i].totalSalary<<endl;
		cout<<endl;
	}
}