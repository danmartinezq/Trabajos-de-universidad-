/* Desarrolla un programa en C++ que muestre un menú con las siguientes opciones: suma,, resta, multiplicación, división y salir. El usuario deberá ingresar dos números y el  programa realizará la operación elegida utilizando una estructura switch. El menú debe  repetirse hasta que se elija la opción de salir.

* Temas aplicados: operadores aritméticos, switch, bucle while o do...while.*/

#include <iostream>

using namespace std;

int main() {
    //crearrmos las variables 
    int opcion; //este para nuesto menu interactivo

    double num1, num2; //seran nuestras variables para los nimeros ingresados

    double suma, resta, multiplicación, division;//seran las variables para guardar los resultados de las operaciones

    do { //Mostraremos el menu
        cout<<"_____CALCULADORA_____"<<endl;
        cout<<"1. Suma "<<endl;
        cout<<"2. Resta "<<endl;
        cout<<"3. Miltiplicacion "<<endl;
        cout<<"4. Division "<<endl;
        cout<<"5. Salir "<<endl;

        //pediremos que seleccione una opcion
        cout<<"Seleccione una opcion: ";
        cin>>opcion;

        //abriremos un switch para que el usuario seleccione la opcion
        switch (opcion) {
        case 1://si selecciona suma
            cout<<"Ingrese el primer numero : ";//pediremos que ingresen lis numeros
            cin>>num1;
            cout<<"Ingrese el segundo numero: ";
            cin>>num2;

            //realizaremos la operacion
            suma=num1+num2;
            //mostraremos el resultado
            cout<<"El resultado es: "<<suma<<endl;
            break;
        //si es resta
        case 2://si selecciona resta
            cout<<"Ingrese el primer numero: ";//para la entrade de los numeros
            cin>>num1;
            cout<<"Ingrese el segundo numero: ";
            cin>>num2;

            //se realiza la operacion
            resta=num1+num2;
            //mostramos el resultado
            cout<<"El resultado es: "<<resta<<endl;
            break;
        //si es multiplicación
        case 3:
            //pediremos los datos
            cout<<"Ingrese el primer numero: ";
            cin>>num1;
            cout<<"Ingrese el segundo numero: ";
            cin>>num2;

            //realizamos la operacion
            multiplicación=num1*num2;
            //mostramos el resultado
            cout<<"El resultado es: "<<multiplicación<<endl;
            break;
        //si es division
        case 4:
            //pediremos los numeros
            cout<<"Ingrese el primer numero: ";
            cin>>num1;
            cout<<"Ingrese el segundo numero: ";
            cin>>num2;

            //realizamos la division y lo guardamos en la variable
            division=num1/num2;
            //mostemos el resultado
            cout<<"El resultado es: "<<division<<endl;
            break;
        //si quiere salir
        case 5:
            cout<<"saliendo..."<<endl;
        default:
            if (opcion!=5) {
                cout<<"Error intente nuevamente..."<<endl;
                }
        }


    } while(opcion!=5);

    return 0;
}
