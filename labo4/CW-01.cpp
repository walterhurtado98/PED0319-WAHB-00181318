#include<iostream>
using namespace std;


int main(void){
      personalInfo p1;

      cout << "Nombre: "; cin >> p1.name;
      cout << "Edad: "; cin >> p1.age;
      cout << "Num casa: "; cin >> p1.personalAddress.houseNumber;
      cout << "Ciudad: "; cin >> p1.personalAddress.city;
      cout << "Estado: "; cin >> p1.personalAddress.state;
    
    
    
    return 0;
}