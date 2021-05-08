#include<iostream>
using namespace std; 
int fibonacciR(int n);
int main()
{
    int n;
    cout<<"Ingrese un numero: ";cin>>n;
    cout<<"\nLa serie fibonacci de "<<n<<" es:\n"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<fibonacciR(i)<<" , ";
    }
    cout<<"\n";
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
int fibonacciR(int n){
    int f=0;
    if (n <= 1)
    {
        return 1;
    }
    else{
        return fibonacciR(n-1)+fibonacciR(n-2);
    }
}
