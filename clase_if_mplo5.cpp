#include <iostream>

using namespace std;

int main(){
    int num;

    cout<<"Ingrese un numero para calcular si es divisible por 5: "<<endl;
    cin>> num;

    if (num % 5 == 0) {
    cout<< "El numero es divisible por 5";
    }

    return 0;
}
