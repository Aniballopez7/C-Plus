#include<iostream>
using namespace std; 
struct Nodo
{
    int dato;
    Nodo *siguiente;
};
struct Nodo2
{
    int dato;
    Nodo2 *siguiente;
};
void insertarCola(Nodo *&front, Nodo *&back, int dato);
void mostrarCola(Nodo *&front);
void insertarCola2(Nodo2 *&front2, Nodo2 *&back2, int dato);
void mostrarCola2(Nodo2 *&front2);
void menu();
int main()
{
    menu();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void menu()
{
    Nodo *front = NULL;
    Nodo *back = NULL;
    Nodo2 *front2 = NULL;
    Nodo2 *back2 = NULL;
    int opc;
    char r;
    bool salir = false;
    do
    {
        system("clear");
        cout<<"*********************"<<endl;
        cout<<"* MENU DEL PROGRAMA *"<<endl; 
        cout<<"*********************\n"<<endl;
        cout<<"1. Ingresar elementos en la cola 1"<<endl;
        cout<<"2. Ingresar elementos en la cola 2"<<endl;
        cout<<"3. Mostrar elementos de la cola 1 y cola 2"<<endl;
        cout<<"4. Comparar colas"<<endl;
        cout<<"5. Salir\n"<<endl;
        cout<<"Ingresar una opcion: ";cin>>opc;
        cout<<"\n";
        if ((opc < 1)||(opc > 5))
        {
            cout<<"Ingrese una opcion valida"<<endl;
            system("\nread -p '\nPresiona Enter para continuar...' var");
        }
        //system("clear"); si quieres que se limpie la pantalla o no
        switch (opc)
        {
            case 1:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 2:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 3:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 4:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 5:
                {
                    salir = true;
                }break;
        }
    } while (salir != true);
}
//TODO: Cola 1
void insertarCola(Nodo *&front, Nodo *&back, int dato)
{
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;
    if (front == NULL)
    {
        front = nuevoNodo;
        back = nuevoNodo;
    }
    else
    {
        back->siguiente = nuevoNodo;
        back = nuevoNodo;
    }
    cout<<"Se inserto el elemento correctamente"<<endl;
}
void mostrarCola(Nodo *&front)
{
    while(front != NULL)
    {
        cout<<"Datos: "<<front->dato<<endl;
        front = front->siguiente;
    }
}
//TODO: Cola 2
void insertarCola2(Nodo2 *&front2, Nodo2 *&back2, int dato)
{
    Nodo2 *nuevoNodo = new Nodo2();
    nuevoNodo->dato = dato;
    nuevoNodo->siguiente = NULL;
    if (front2 == NULL)
    {
        front2 = nuevoNodo;
        back2 = nuevoNodo;
    }
    else
    {
        back2->siguiente = nuevoNodo;
        back2 = nuevoNodo;
    }
    cout<<"Se inserto el elemento correctamente"<<endl;
}