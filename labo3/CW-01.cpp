#include<iostream>
using namespace std;



long int main(int n);

int main(void){
   cout << factorial(4) << endl;
}

long int factorial(int n){
    if(n == 0 || n == 1)
    return 1;
else
    return n * factorial( n - 1);

  }