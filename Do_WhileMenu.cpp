#include <iostream>
using namespace std;

int main(){
    int option;
    do {

        cout<<"___Menu___"<<endl;
        cout<<"1.Saludar."<<endl;
        cout<<"2. Mostrar un mensaje."<<endl;
        cout<<"3. Salir."<<endl;

        cout<<"Seleccionar una opción: ";
        cin>>option;
        if (option==1) {
            cout<<"Hola usuario"<<endl;
        }else if (option==2) {
            cout<<"Ayuda no puedo mas :( "<<endl;
        }else if (option==3) {
            cout<<"Saliendo..."<<endl;
        }else {
            cout<<"Opcion no valida intente otra vez";
        }
    }while (option!=3);

    return 0;
}
