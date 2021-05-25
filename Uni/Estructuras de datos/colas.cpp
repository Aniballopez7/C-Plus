/*
Escriba una función que reciba como parámetro una cola de números
enteros y nos devuelva el mayor y el menor de la cola.
*/
#include<iostream>
using namespace std; 
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
void insertarNodo(Nodo *&front, Nodo *&back,int dato);
void numeroMayorMenor(Nodo *&cola);
void mostrarCola(Nodo *&front);
int main()
{
    Nodo *front = NULL;
    Nodo *back = NULL;
    int dato,mayor,menor;
    char r;
    bool salir = false;
    do
    {
        cout<<"Desea ingresar un numero (s/n): ";cin>>r;
        cout<<"\n";
        if (r == 's' || r == 'S')
        {
            cout<<"Ingrese un numero: ";cin>>dato;
            cout<<"\n";
            insertarNodo(front,back,dato);
            cout<<"\n";
        }
        else
        {
            salir = true;
        }
    } while (salir != true);
    system("clear");
    numeroMayorMenor(front);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void insertarNodo(Nodo *&front, Nodo *&back,int dato)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;
    if (front==NULL)
    {
        front = nuevoNodo;
        back = nuevoNodo;
    }
    else
    {
        back->siguiente = nuevoNodo;
        back = nuevoNodo;
    }
    cout<<"Se inserto un nodo con el dato "<<dato<<endl;
}
void mostrarCola(Nodo *&front)
{
    while (front != NULL)
    {
        cout<<"Datos: "<<front->dato<<endl;
        front = front->siguiente; //TODO: para que pase al siguiente elemento de la cola
    }
}
void numeroMayorMenor(Nodo *&cola)
{
    int auxMayor=-99999,auxMenor=99999;
    while (cola!=NULL)
    {
        if (cola->dato > auxMayor)
        {
            auxMayor = cola->dato;
        }
        if (cola->dato < auxMenor)
        {
            auxMenor = cola->dato;
        }
        cola=cola->siguiente;
    }
    cout<<"El mayor es: "<<auxMayor<<endl;
    cout<<"El menor es: "<<auxMenor<<endl;
}