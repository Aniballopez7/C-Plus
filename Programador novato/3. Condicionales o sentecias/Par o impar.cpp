#include <iostream>
using namespace std;
int main(){
    int numero;
    cout<<"Por favor ingresa un numero entero: ";cin>>numero;
    if(numero%2==0){
        cout<<"El numero "<<numero<<" es par\n";
    }
    else{
        cout<<"El numero "<<numero<<" es impar\n";
    }
    system("pause");
    return 0;
}