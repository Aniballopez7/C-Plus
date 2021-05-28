#include <iostream>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_CTYPE,"Spanish");
    int opc;
    char r;
    bool salir = false;
    do
    {
        system("clear");
        cout<<"1. Ingresar elemento"<<endl;
        cout<<"2. "<<endl;
        cout<<"3. "<<endl;
        cout<<"4. "<<endl;
        cout<<"5. "<<endl;
        cout<<"6. Salir\n"<<endl;
        cout<<"Ingresar una opcion: ";cin>>opc;
        switch (opc)
        {
            case 1:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                    system("clear");
                }break;
            case 2:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                    system("clear");
                }break;
            case 3:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                    system("clear");
                }break;
            case 4:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                    system("clear");
                }break;
            case 5:
                {
                    salir = true;
                }break;
        }
    } while (salir != true);
    system("\nread -p '\nPresiona Enter para volver al menu...' var");
}
