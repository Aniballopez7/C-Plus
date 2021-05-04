#include <iostream>
using namespace std;
int main(){
    int numero;
    regresar:
    cout<<"Ingresa un numero entre 1 y 5 o 6 para terminar: ";
    cin>>numero;
    switch (numero)
    {
    case 1:
        cout<<"Presionaste el numero uno\n";
        goto regresar;
        break;
    case 2:
        cout<<"Presionaste el numero dos\n";
        goto regresar;
        break;
    case 3:
        cout<<"Presionaste el numero tres\n";
        goto regresar;
        break;
    case 4:
        cout<<"Presionaste el numero cuatro\n";
        goto regresar;
        break;
    case 5:
        cout<<"Presionaste el numero cinco\n";
        goto regresar;
        break;
    case 6:
        cout<<"Humano te voy a extrañar\n";
        system("pause");
        return 0;
        break;    
    default:
        cout<<"Humano estupido te dije que entre 1 y 5 o 6 para salir\n";
        goto regresar;
        break;
    }
    system("pause");
    return 0;
}