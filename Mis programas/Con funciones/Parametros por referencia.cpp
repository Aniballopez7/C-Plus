#include<iostream>
using namespace std; 

void cambio(int&,int&);

int main()
{
    int n1,n2;
    cout<<"Ingresa el valor de n1: ";cin>>n1;
    cout<<"Ingresa el valor de n1: ";cin>>n2;
    cout<<"\nValores ingresados:\n"<<endl;
    cout<<n1<<endl;
    cout<<n2<<endl;
    cambio(n1,n2);
    cout<<"\nValores cambiados:\n"<<endl;
    cout<<n1<<endl;
    cout<<n2<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}

void cambio(int& n1,int& n2){
    int aux;
    aux = n1;
    n1 = n2;
    n2 = aux;
}