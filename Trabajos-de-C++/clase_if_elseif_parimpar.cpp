#include <iostream>

using namespace std;

int main(){

    int num;

    cout<< "Ingrese un numero para calcular si es par o impar: ";
    cin>> num;

    if (num % 2 == 0) {
        cout<<"El numero es par";
    
    }else {
        cout<<"El numero es impar";
    }
    return 0;
}
