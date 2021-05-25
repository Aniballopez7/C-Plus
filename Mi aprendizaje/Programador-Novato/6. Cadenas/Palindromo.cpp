#include <iostream>
#include <string.h>
using namespace std; 
int main(){
    char texto[40],textoRev[40];
    regresa:
    cout<<"Escribe una palabra palindromo: ";
    cin>>texto;
    strcpy(textoRev,texto);
    strrev(textoRev);
    if(strcmp(texto,textoRev)!=0){
        cout<<"Esto ("<<texto<<" "<<textoRev<<") no es un palindromo\n";
        goto regresa;
    }
    cout<<"Esto ("<<texto<<" "<<textoRev<<") es un palindromo\n";
    system("pause");
    return 0;
}