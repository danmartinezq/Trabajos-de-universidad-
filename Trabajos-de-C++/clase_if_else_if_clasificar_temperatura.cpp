#include <iostream>

using namespace std;

int main(){

    int temperatura;

    cout<<"Ingrese la temperatura";
    cin>>temperatura;

    if (temperatura < 15) {
        cout<<"La temperatura es fria";
    
    }else if (temperatura > 25) {
        cout<<"La temperatura es calurosa";

    
    }else if (temperatura >= 15) {
        cout<<"La temperatura es agradable";
    
    }
    return 0;
}  
