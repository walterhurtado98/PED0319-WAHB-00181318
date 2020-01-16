/*El #include<iostream>: sirve para entrada y salida en consola
  El #include<string>: sirve para la manipulacion de cadenas de caracteres*/

#include <iostream>
#include <string>
using namespace std;

struct employee{
    int age, salary, workingYears;
    string name;
};
typedef struct employee Employee;

int main(){
    int EmployeesQuantity = 5;
    Employee portfolio[EmployeesQuantity];
    for (int i = 0; i < EmployeesQuantity; i++) {
        cout << "Nombre del empleado #" << (i+1) << ": ";
        getline(cin, portfolio[i].name);
        cout << "Edad del empleado: ";
        cin >> portfolio[i].age;
        cout << "Salario del empleado: ";
        cin >> portfolio[i].salary;
        cout << "Anios laborales del empleado: ";
        cin >> portfolio[i].workingYears;
        cin.ignore();
        cout << "\n" << endl;
    }
   
    for (int i = 0; i < EmployeesQuantity; i++){
        if(portfolio[i].age > 60)
        cout << portfolio[i].name << " esta listo para jubilarse" << endl;
    }

    return 0;
}