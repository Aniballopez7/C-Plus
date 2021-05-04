#include <iostream>
using namespace std;
int main(){
    char letra;
    regresar:
    cout<<"Por favor ingresa una letra vocal: ";
    cin>>letra;
    switch (letra){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout<<"Precionado una vocal\n";
        break;
    default:
        cout<<"No es una vocal\n";
        goto regresar;
        break;
    }
    system("pause");
    return 0;
}