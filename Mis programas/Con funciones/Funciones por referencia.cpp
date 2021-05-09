#include<iostream>
using namespace std; 
void insertarNumero(int n); //int& n o int &n
void sumar(int n);
void mostrar(int n);
/*TODO: el parametro por referencia lo que hace es guardar el valor de un parametro para ser
utilizado en otra funcion al utilizar ese parametro
*/
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
void mostrar(int n)
{

}
