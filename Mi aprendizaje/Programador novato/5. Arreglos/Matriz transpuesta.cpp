/*
Declarar la matrizA y la matrizB de 3x3.
Pedir al humano que ingrese los datos de la matrizA.
Llenar la matrizB con los datos transpuestos de la matrizA
Imprimir matrizA y matrizB.
*/
#include <iostream>
using namespace std;
int main(){
    int matrizA[3][3],matrizB[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<"Ingresa los datos de la matriz en la pocicion ["<<i+1<<"]["<<j+1<<"]: ";cin>>matrizA[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizB[i][j]=matrizA[j][i];
        }
        
    }
    cout<<"\nMATRIZ A\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matrizA[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n\nMATRIZ B\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<matrizB[i][j]<<" ";
        }
        cout<<"\n";
    }
    system("pause");
    return 0;
}