/*
Llene un arreglo con 10 números , calcule el promedio de los elementos y cuantos elementos 
están por encima del promedio. Realice la mismas operación para el Vector B = 

4 muestre el promedio de A y de B, indique cual es el mayor de los promedios. Ordene con el 
método de la burbuja el vector a y muéstrelo.
*/

#include<iostream>
using namespace std; 
int main()
{
    int vecA[10],vecB[10],sumaA=0,sumaB=0,auxA,promedioA,promedioB;
    int encima_promedioA=0,encima_promedioB=0;
    bool ordenado=false;
    cout<<"Vector A:\n"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<"Valor ["<<i+1<<"] del vector: ";cin>>vecA[i];
        sumaA += vecA[i];
        
    }
    cout<<"\nVector B:\n"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<"Valor ["<<i+1<<"] del vector: ";cin>>vecB[i];
        sumaB += vecB[i];
    }
    promedioA = sumaA/10;
    promedioB = sumaB/10;
    cout<<"\nPromedio A: "<<promedioA<<endl;
    cout<<"Promedio B: "<<promedioB<<endl;
    //Contando elementos por encima del promedio
    for (int i = 0; i < 10; i++)
    {
        if (vecA[i]>promedioA)
        {
            encima_promedioA++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (vecA[i]>promedioB)
        {
            encima_promedioB++;
        }
    }
    if (promedioA>promedioB)
    {
        cout<<"El promedio del vector A es mayor al promedio del vector B"<<endl;
    }
    else
    {
        cout<<"El promedio del vector B es mayor al promedio del vector A"<<endl;
    }
    cout<<"Hay "<<encima_promedioA<<" elementos que estan por encima del promedio del vector A"<<endl;
    cout<<"Hay "<<encima_promedioB<<" elementos que estan por encima del promedio del vector B"<<endl;
    cout<<"\nVector A sin ordenar:\n"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<vecA[i]<<endl;
    }
    for (int i = 0; i < 5 && ordenado == false; i++)
    {
        ordenado = true;
        for (int j = 0; j < 5; j++)
        {
            if (vecA[j]>vecA[j+1])
            {
                ordenado = false;
                auxA = vecA[j];
                vecA[j] = vecA[j+1];
                vecA[j+1] = auxA;
            }
        }
    }
    cout<<"\nVector A ordenado:\n"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<vecA[i]<<endl;
    }
    system("\nread -p '\nPresiona Enter para continuar...' var");
}