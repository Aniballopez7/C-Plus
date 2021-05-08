#include<iostream>
using namespace std; 
int potencia(int base,int exp);
int main()
{
    int base,exp;
    inicio:
    
    cout<<"Ingrese el numero base: ";cin>>base;
    if (base < 1)
    {
        cout<<"La base debe ser mayor a 1"<<endl;
        goto inicio;
    }
    expo:
    cout<<"Ingrese el exponente: ";cin>>exp;
    if (exp < 1)
    {
        cout<<"La base debe ser mayor a 1"<<endl;
        goto expo;
    }
    cout<<"\nResultado: "<<potencia(base,exp)<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
int potencia(int base,int exp){
    int po=0;
    if (exp == 1)
    {
        po= base;
    }
    else{
        po= base * potencia(base,exp-1);
    }
    return po;
}