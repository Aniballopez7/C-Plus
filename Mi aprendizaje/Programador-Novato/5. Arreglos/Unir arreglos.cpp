/*
Declarar el arreglo uno y dos con un tamaño de rango de 5 elementos cada uno.
Pedir al humano que ingrese 5 valores del arreglo uno y dos.
Unir el arreglo uno y dos en un tercer vector.
*/
#include <iostream>
using namespace std;
int main()
{
    int arreglo1[5],arreglo2[5],arreglo3[10];
    for (int i = 0; i < 5; i++)
    {
        cout<<"Ingresa en el arreglo 1 el valor "<<i+1<<": ";cin>>arreglo1[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<"Ingresa en el arreglo 2 el valor "<<i+1<<": ";cin>>arreglo2[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if(i < 5){
            arreglo3[i]=arreglo1[i];
        }
        if(i >= 5){
            arreglo3[i]=arreglo2[i-5];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<i+1<<".- "<<arreglo3[i]<<"\n";
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
    return 0;
}