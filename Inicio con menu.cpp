#include <iostream>
#include <clocale>
using namespace std;
int main(){
    setlocale(LC_CTYPE,"Spanish");
    int opc;
    do
    {
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
        switch (opc){
            case 1:
                break;
        }
    } while ((opc<=1)||(opc>4));
}