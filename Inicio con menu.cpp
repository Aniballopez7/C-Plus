#include <iostream>
#include <clocale>
using namespace std;
int main(){
    setlocale(LC_CTYPE,"Spanish");
    int opc;
    bool regresar = false;
    do
    {
        system("clear");
        cout<<"*********************"<<endl;
        cout<<"* MENU DEL PROGRAMA *"<<endl;
        cout<<"*********************\n"<<endl;
        cout<<"1."<<endl;
        cout<<"2."<<endl;
        cout<<"3."<<endl;
        cout<<"4. Salir\n"<<endl;
        cout<<"Ingrese una opcion: ";cin>>opc;
        cout<<"\n";
        if ((opc<1)||(opc>4))
        {
            cout<<"Opcion ivalida..."<<endl;
            system("\nread -p '\nPresiona Enter para volver al menu...' var");
            system("clear");
        }
        system("clear");  
        switch (opc)
        {
            case 1:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 2:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 3:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 4:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 5:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 6:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                }break;
            case 7:
                {
                    system("\nread -p '\nPresiona Enter para continuar...' var");
                    system("clear");
                }break;
        }
    } while (regresar!=true);
}