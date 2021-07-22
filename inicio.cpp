#include<iostream>
#include<stdlib.h>
using namespace std; 
int main()
{
    int n[3];
    for(int x=0; x < 3; x++)
    {
        cout<<"Ingrese un numero: ";cin>>n[x];
    }
    cout<<"\n";
    for (int x = 0; x < 3; x++)
    {
        cout<<n[x]<<" - ";
    }
    system("pause");
}