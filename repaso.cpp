#include <iostream>
using namespace std;
//creamos una funcionn para calcar el promedio
float calcular_prom(float n1, float n2, float n3,float n4, float n5) {
    return (n1+n2+n3+n4+n5)/5;
}
//creamos otra funcion sinn valorares de retornrno solo para mostrar el promedio y verificar si aprovo o o noto
void resultado_prom (float prom){
    cout<< "El promedio es: " <<prom<<endl;
//aqui verifica la condicion
    if (prom >= 60) {
    cout<<"Estado: aprovado"<<endl;
    }else {
    cout<< "Estado: Reprovado"<<endl;
    }
}
//luego creamos nyestro programa
int main() {
    float notas[5]; //creamos una lista de ls notas
    //recorremos la lista de la nota con un bubucle
    for (int i=0 ; i<5; i++) {
         cout<<"Ingrese la nota: ";
         cin>> notas[i];//esto nis ayuda a guardar las notad en la lista 
    }
    //llamamos a nuestra funciones para realizae el xalculo 
    //llamamos a ka funcion que va a calcular el promedio
    float prom = calcular_prom(notas[0], notas[1], notas[2], notas[3], notas[4]);
    //llamamos la funcion que va a mostrar el resultado y validar si oaso o noto
    resultado_prom(prom);

    return 0;
}
