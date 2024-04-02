#include "iostream"
#include "stdio.h"
#include "string"

 
using namespace std;

int main()

{

    string edades[5][2];
    cout << "Por favor ingrese la siguiente informacion: \n";
    string edad,nombre;
    for(int i = 0; i < 5; i++)

    {

        cout << "\n******* Resultados " << i + 1 << "********:\n";
        cout << "Edad: ";
        getline(cin,edad);
        cout << "Nombre: ";
        getline(cin,nombre);
        edades[i][0] = edad;
        edades[i][1] = nombre;

    }

    system("pause");
    return 0;

}