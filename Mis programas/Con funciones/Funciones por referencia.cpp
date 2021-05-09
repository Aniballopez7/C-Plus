#include<iostream>
using namespace std; 
void insertarNumero(int& n); //(int& n) o (int &n) <-parametros por referecia
void sumarReferencia(int n);
/*TODO: el parametro por referencia lo que hace es guardar el valor de un parametro para ser
utilizado en otra funcion al utilizar ese parametro.
*/
int main()
{
    int n,b;
    insertarNumero(n);
    sumarReferencia(n);
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void insertarNumero(int& n)
{
    cout<<"Ingresa un numero: ";cin>>n;
    cout<<"\n"<<n<<endl;
}
void sumarReferencia(int n)
{
    n += 5;
    cout<<n<<endl;
}