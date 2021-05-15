#include<iostream>
using namespace std; 
#define TAMPILA 100
int pila [TAMPILA];
int tope;
void apilar(int n);
int main()
{

    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void apilar(int n)      //Apilar
{
    if (pilallena()==true)
    {
        cout<<"Pila llena";
    }
    else
    {
        tope++;
        pila[tope]=n;
    }
}
int desapilar ( void ) //desapilar
{
    int aux;
    if ( pilavacia() == true )
    {
        cout<<"Pila Vacia";
    }
    else
    {
    aux=pila[cima];
    tope- -;
    return aux;
    }
}
int tope ( void ) //cima
{
    return pila[tope];
}
int pilavacia ( void ) //Pila vacia
{
    if ( tope==-1 )
    return 1;
    else
    return 0;
}
int pilallena ( void ) //Pila llena
{
    if ( tope==TAMPILA-1 )
    return 1;
    else
    return 0;
}
void inicializarpila ( void ) //iniciar pila
{
    tope=-1;
}