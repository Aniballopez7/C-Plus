#include<iostream>
using namespace std; 
void pedirDatos(int *num,int nElementos);
int menor(int *num,int nElementos);
int main()
{
    int nElementos=0;
    int num[nElementos];
    pedirDatos(num,nElementos);
    int menorq = menor(num,nElementos);
    cout<<"El menor es: "<<menorq<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void pedirDatos(int *num,int nElementos){
    cout<<"Ingrese cuantos elementos tendra su arreglo: ";cin>>nElementos;
    cout<<"\n";
    for (int i = 0; i < nElementos; i++)
    {
        cout<<"Numero "<<i+1<<": ";cin>>num[i];
    }
    cout<<"\n";
}
int menor(int *num,int nElementos){
    int menor=999999;
    for (int i = 0; i < nElementos; i++)
    {
        if (*(num+1)<menor)
        {
            menor = *(num+1);
        }
    }
    return menor;
}