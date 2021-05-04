/*
Pedir al humano que ingrese un texto de más de 10 letras.
si tiene menos de 10 letras regañamos 😈 al humano.
Si tiene más de 10 letras felicitarlo.
*/
#include <iostream>
#include <string.h>
using namespace std; 
int main(){
    char texto[10];
    int longitud=0;
    regreso:
    cout<<"Ingresa un texto con un minimo de 10 letras: ";cin.getline(texto,10,'\n');
    longitud=strlen(texto);
    if(longitud>=10){
        cout<<"Felicidades humano\n";
    }else{
        cout<<"Dije que mas de 10 letras, intentalo de nuevo\n";
        goto regreso;
    }
    system("pause");
    return 0;
}