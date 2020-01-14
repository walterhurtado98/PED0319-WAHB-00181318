#include<iostream>
#include<string>
using namespace std;

struct Address{
    int houseNumber;
    string city, state;
};

void printInfo(Address printAdd);

int main(void){
    Address ad1;

    cout << "Numero de casa: "; cin >> ad1.houseNumber;
    cout << "Ciudad: "; cin >> ad1.city;
    cout << "Departamento: "; cin >> ad1.state;
    cout<< endl;

    printInfo(ad1);

   return 0;
}

void printInfo(Address printAdd){
    cout << "No. casa:\t" << printAdd.houseNumber << endl;
    cout << "Ciudad:\t" << printAdd.city << endl;
    cout << "Departamento:\t" << printAdd.state<< endl;

}