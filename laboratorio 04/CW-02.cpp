#include<iostream>
#include<string>
using namespace std;

struct dataStudents{
    string name, report;
    float grade;
};

void fillArray(dataStudents* array, int size, int aux);

int main(void){
    int size = 0;
    cin >>  size;

    dataStudents* students;
    students = new dataStudents[size];

    fillArray(students, size, 0);
    printArray(students, size, 0);

    return 0;
}

void fillArray(dataStudents* array, int size, int aux){

}

void printArray(dataStudents* array, int size, int aux){
    if(size == aux)
    return;
 else{
     cout << "Nombre: " << array[aux].name << endl;
     cout << "Comentarios: " << array[aux].report << endl;
     cout << "Nota: " << array[aux].grade << endl;

  }
}