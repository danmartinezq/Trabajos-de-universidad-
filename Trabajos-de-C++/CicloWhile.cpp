#include <iostream>
using namespace std;

int main(){
    int num;
    int contador = 0;

    cout<<"ingrese un numero y el nimero 0 para salir: ";
    cin>>num;
    while (num!=0) {
        contador++;
        cout<<"Ingrese otro numero: ";
        cin>>num;
    
    }
    cout<<"Se ingresaron: "<<contador<<" de numeros"<<endl;
    return 0;
}
