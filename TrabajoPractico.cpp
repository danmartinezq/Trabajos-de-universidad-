#include <iostream>

using namespace std;

int main() {
	//Declaramos las variables para los campos que utilizaremos
	string nom;//Para nombre
	int nota_1,nota_2,nota_3;//Para las notas
	int promedio;//Para guardar nuestro calculo de promedio
	int opcion;
	do{
		/*Mostraremos un menu interactivo*/
		cout<<"____MENU____"<<endl;
		cout<<"1.Calculadora de promedio"<<endl;
		cout<<"2.Salir de la calculadora."<<endl;
		
		cout<<"Selecciona una opcion: ";
		cin>>opcion;//Pediremos que seleccione una oppcion
		
		if(opcion==1){//Al selecciona una opcion entraremos en este codigo
			cout<<"Ingrese el nombre del alumno: ";//Pediremos el nombre
			cin>>nom;
			//pediremos las notas
			cout<<"Ingrese la nota: ";
			cin>>nota_1;
			cout<<"Ingrese la nota: ";
			cin>>nota_2;
			cout<<"Ingrese la nota: ";
			cin>>nota_3;
			//Calcularemos el promedio y guardaremos en una variable
			promedio=(nota_1+nota_2+nota_3)/3;
			//A continuacion entraremos en una condicional si se cumple la nota
			
			//Si aprobo
			if(promedio>=60) {
				cout<<"El alumno aprobo."<<endl;
			}else {//Si no aprobo
				cout<<"El alumno no aprobo."<<endl;
			}
		}else if(opcion==2){//Si quiere salir
			cout<<"Saliendo...";
		}
		//Si pulsa otra opccion que no sea la correcta
	}while(opcion != 2);
	return 0;
} 
