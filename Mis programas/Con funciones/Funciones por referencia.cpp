#include<iostream>
using namespace std; 
void insertarNumero(int n);
void sumar(int n);
void mostrar(int);
int main()
{
    int n;
    insertarNumero(n);
    sumar(n);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void insertarNumero(int n)
{
    cout<<"Ingresa un numero: ";cin>>n;
    cout<<n<<endl;
}
void sumar(int n)
{
    n += 5;
    cout<<n<<endl;
}
