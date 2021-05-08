#include<iostream>
using namespace std; 
struct Empleado
{
    int id;
    char nombre[30];
}e1;
//TODO: las estrucuturas por parametros no son referenciadas por default
//TODO: las unicos datos son las matrices y los vectores que si son referenciados
void pedirDatos(Empleado& e1);
void mostrarDatos(Empleado& e1);
int main()
{
    pedirDatos(e1);
    mostrarDatos(e1);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void pedirDatos(Empleado& e1){
    cout<<"Ingresa los datos del empleado\n"<<endl;
    cout<<"Id del empleado: ";cin>>e1.id;
    cout<<"Nombre del empleado: ";cin>>e1.nombre;
    cout<<"\n";
}
void mostrarDatos(Empleado& e1){
    cout<<"Datos del empleado\n"<<endl;
    cout<<"Nombre: "<<e1.nombre<<endl;
    cout<<"Id: "<<e1.id<<endl;
}