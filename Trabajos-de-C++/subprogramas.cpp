#include <iostream>
using namespace std;

float calcularPromedio (float nota1, float nota2, float nota3, float nota4) {
    return (nota1+nota2+nota3+nota4)/4;
}

void mostrarResultado (float promedio) {
    cout<< "Promedio = " <<promedio<<endl;

    if (promedio>=60) {
    cout<<"Estado: Aprovado"<<endl;
    }else {
    cout<<"Estado: Reprovado"<<endl;
    }
}

int main() {
    float notas [4];
    float promedio;

    for (int i=0; i<4; i++) {
    cout<<"Ingrese la nota "<<i+1<<": "<<endl;
    cin>>notas[i];
    };
    for (int i=0; i<4; i++) {
        cout<<"Notas "<<notas[i]<<endl;
    };

    promedio = calcularPromedio(notas[0], notas[1], notas[2],notas[3]);
    mostrarResultado(promedio);
    
    return 0;
}
