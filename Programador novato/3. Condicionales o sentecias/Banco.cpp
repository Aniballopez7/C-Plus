#include <iostream>
using namespace std;
int main(){
    int opcion;
    float total=1000,ingreso,egreso;
    std::cout<<"Bienvenido al banco\n";
    regreso:
    std::cout<<"Por favor digita una opcion:\n";
    std::cout<<"1.- Ingreso de dinero\n";
    std::cout<<"2.- Retirar dinero\n";
    std::cout<<"3.- Salir\n";
    std::cin>>opcion;
    switch (opcion)
    {
    case 1:
        std::cout<<"Cuanto dinero vas a ingresar? ";
        std::cin>>ingreso;
        total+=ingreso;
        std::cout<<"Tienes en el bancon $"<<total<<"\n";
        goto regreso;
    case 2:
        std::cout<<"Cuanto dinero deseas sacar: ";
        std::cin>>egreso;
        if(egreso>total){
            std::cout<<"No tienes tanto dinero, tienes "<<total<<"\n";
        }else{
            total-=egreso;
            std::cout<<"Te queda en el banco $"<<total<<"\n";
        }
        goto regreso;
    case 3:
        break;
    default:
        goto regreso;
    }
    system("pause");
    return 0;
}