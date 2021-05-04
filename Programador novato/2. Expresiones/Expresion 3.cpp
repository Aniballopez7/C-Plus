#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float x,y,res,yCuadradaMenosUno;
    cout<<"Digita lo que se te pida \n";
    cout<<"Valor de x: ";cin>>x;
    ingresaYdeNuevo:
    cout<<"Valor de y: ";cin>>y;
    yCuadradaMenosUno=(pow(y,2)-1);
    if(yCuadradaMenosUno==0){
        cout<<"El valor de y no es valido ingresa de nuevo el valor de y\n";
        goto ingresaYdeNuevo;
    }
    res=(sqrt(x)) / yCuadradaMenosUno;
    cout<<"Aqui esta tu resultado: "<<res<<"\n";
    system("pause");
    return 0;
}