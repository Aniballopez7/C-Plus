/*
Pedir al humano que ingrese un texto en minúsculas o en mayúsculas.
Pedir al humano que otro texto similar al anterior.
Si no es la misma palabra regañar 😈 al humano de lo contrario felicitarlo.
*/
#include <iostream>
#include <string.h>
using namespace std; 
int main(){
    char texto1[40],texto2[40];
    regreso:
    cout<<"Ingresa un texto: ";cin>>texto1;
    cout<<"Ingresa un texto similar (sin tomar en cuanta mayusculas o minusculas): ";cin>>texto2;
    strupr(texto1);
    strupr(texto2);
    if(strcmp(texto1,texto2)!=0){
        cout<<"Las palabras ("<<texto1<<" "<<texto2<<") no son similares.Intentalo de nuevo:\n";
        goto regreso;
    }
    system("pause");
    return 0;
}

