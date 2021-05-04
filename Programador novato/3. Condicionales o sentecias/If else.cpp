#include <iostream>
using namespace std;
int main(){
    int numeroIngresado,numeroAencontrar=5;
    cout<<"Ingresa un numero mayor o igual al que estoy pensando: ";
    cin>>numeroIngresado;
    if(numeroIngresado>=numeroAencontrar){
        cout<<"Bien jugado hdp\n";
    }
    else{
        cout<<"Sigue intentando\n";
    }
    system("pause");
    return 0;
}