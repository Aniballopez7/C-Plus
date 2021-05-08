#include<iostream>
using namespace std; 
int factorial(int n);
int main()
{
    int n;
    cout<<"Ingresa un numero: ";cin>>n;
    cout<<"\nEl factorial de "<<n<<" es: "<<factorial(n)<<endl;
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
int factorial(int n){
    if (n == 0)
    {
        n = 1;
    }else{
        n = n * factorial(n -1);
    }
    return n;
}