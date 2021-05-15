#include<iostream>
#include<conio.h>
using namespace std; 
struct Promedio
{
    float promedio,corte1,corte2,corte3,corteF;
}alumnos[3];

int main()
{
    int n;
    bool iguales=false,diferente=false;
    cout<<"Ingresa la cantidad de alumnos: ";cin>>n;
    float mayor=0;
    //TODO: pedir datos
    for (int i = 0; i < n; i++)
    {
        do
        {
            cout<<"\nAlumno "<<i+1<<"\n"<<endl;
            cout<<"Primer corte: ";cin>>alumnos[i].corte1;
            cout<<"Segundo corte: ";cin>>alumnos[i].corte2;
            cout<<"Tercer corte: ";cin>>alumnos[i].corte3;
            if ((alumnos[i].corte1<0||alumnos[i].corte1>20)||
            (alumnos[i].corte2<0||alumnos[i].corte2>20)||
            (alumnos[i].corte3<0||alumnos[i].corte3>20))
            {
                cout<<"\nColoco un valor invalido"<<endl;
                getch();
                system("clear");
            }
        } while ((alumnos[i].corte1<0||alumnos[i].corte1>20)||
        (alumnos[i].corte2<0||alumnos[i].corte2>20)||
        (alumnos[i].corte3<0||alumnos[i].corte3>20));
        alumnos[i].corteF = alumnos[i].corte1 + alumnos[i].corte2 + alumnos[i].corte3;
        alumnos[i].promedio = alumnos[i].corteF / 3;
        //TODO: mayor promedio
        if ( alumnos[i].promedio>mayor)
        {
            mayor =  alumnos[i].promedio;
        }
    }
    //TODO: viendo si son iguales los promedios
    for (int i = 0; i < n; i++)
    {
        if ( alumnos[i].promedio==alumnos[i].promedio)
        {
            iguales = true;
        }
        //TODO: En caso de que sean solo 2 numeros
        if (n == 2)
        {
            for (int i = n-1; i >= 0; i--)
            {
                if ( alumnos[i].promedio==alumnos[i-1].promedio)
                {
                    iguales = true;
                }
            }
        }
        else
        {
            diferente = true;
        }
    }
    if ((iguales==true)&&(diferente==false))
    {
        cout<<"Todos los promedios son iguales"<<endl;
        cout<<"\n";
    }
    else
    {
        cout<<"\nPromedios\n"<<endl;
        for (int i = 0; i < n; i++)
        {
            cout<< alumnos[i].promedio<<endl;
        }
        cout<<"\nEl promedio mas alto es de "<<mayor<<endl;
        cout<<"\n";
    }
    getch();
}