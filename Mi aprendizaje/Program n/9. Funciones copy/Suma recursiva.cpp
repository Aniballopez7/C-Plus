#include<iostream>
using namespace std;
int sumaR(int n); 
int main()
{
    int n;
    cout<<"Ingrese un numero: ";cin>>n;
    sumaR(n);
    cout<<"\nLa suma recursiva es: "<<sumaR(n)<<endl;;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
int sumaR(int n){
    int suma=0;
    if (n == 1)
    {
        suma = 1;
    }else{
        suma = n + sumaR(n -1);
    }
    return suma;
}