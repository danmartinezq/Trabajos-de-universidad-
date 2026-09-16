#include <iostream>
using namespace std;
int main(){
    int num;
    int ContadorDePares = 0;

    for (int i=1; i<=5; i++) {
        cout<<"Ingrese el numero: ";
        cin>>num;
        if (num % 2 ==0) {
            ContadorDePares++;
        
        }
    }
    cout<<"La cantidad de numeros pares es de: "<<ContadorDePares<<endl;
    return 0;
}
