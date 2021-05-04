#include <iostream>
#include <math.h>
using namespace std;
int main(){
    float n,suma=0,potencia=0;
    do
    {
        cout<<"Ingresa un numero mayor a 1: ";cin>>n;
    } while (n<1);
    for (int i = 1; i <= n; i++)
    {
        potencia=pow(2,i);
        suma += potencia;
        cout<<"2^"<<i<<"+";
    }
    cout<<"\nSumatoria: "<<suma<<"\n";
    system("pause");
    return 0;
}