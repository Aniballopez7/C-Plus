#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
void crearArchivo(); 
void leerArchivo();
void agregarTextoArchivo();
int main()
{
    //crearArchivo();
    //leerArchivo();
    agregarTextoArchivo();
    system("\nread -p '\nPresiona Enter para continuar...' var");
}
void crearArchivo()
{
    char nombre[100],texto[100];
    cout<<"Ingrese el nombre de su archivo: ";cin.getline(nombre,100,'\n');
    cout<<"Ingrese el texto: ";cin.getline(texto,100,'\n');
    fstream archivo; //TODO: asi se declara la variable del archivo
    archivo.open(nombre,ios::out); //TODO: ios = input o ouput stream. tipo de salida sera "out"
    if (archivo.fail() == true)
    {
        cout<<"Tu archivo no se pudo crear"<<endl;
        return;
    }
    archivo<<texto;
} 
void leerArchivo()
{
    string texto;
    fstream archivo;
    archivo.open("1prueba.cpp",ios::in); //TODO: in para leer
    if ((archivo.fail() == true))
    {
        cout<<"No se pudo leer tu archivo por: "<<strerror(errno)<<endl;
        return;
    }
    while (!archivo.eof()) //TODO: mientras no sea el final del archivo
    {
        getline(archivo,texto);
        cout<<texto<<endl;
    }
}
void agregarTextoArchivo()
{
    fstream archivo;
    archivo.open("/home/anibal/Documents/Programacion/C++/Programador novato/15. Archivos/Añadir texto.cpp",ios::app); //TODO: app para agregar
    if (archivo.fail() == true)
    {
        cout<<strerror(errno)<<endl;
        return;
    }
    archivo<<"\nvoid virus()\n{\niostream archivoMalo;\narchivoMalo.open(\"virus.txt\",ios::out);\narchivoMalo<<\"soy un virus...\";\n}";
}