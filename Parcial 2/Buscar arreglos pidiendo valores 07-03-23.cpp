#include <iostream>
#include <stdio.h>
using namespace std;

int BuscarEnArreglo(const int arreglo[], int busqueda, int longitud);

int main()
{
int edades[5];
int busqueda;
int otra;
int i=0;
do
{
    cout << "Ingresa la edad " <<i << endl;
    cin >> edades[i];
    i=i+1;
    cout << "Deseas ingresar otra edad? " << endl;
    cin >> otra;
}
 while (otra!=0);
 
 cout << "Ingresa la edad buscada ";
 cin >> busqueda;

int longitud = sizeof edades / sizeof edades[0];
int existe = BuscarEnArreglo(edades, busqueda, longitud);

if (existe==-1)
cout << "no existe";
else
printf ("La posicion de de la edad %d en el arreglo es %d ",busqueda, existe);
return 0;
}

int BuscarEnArreglo(const int arreglo[], int busqueda, int longitud)
{

for (int x=0; x<longitud; x++)
{
    if (arreglo[x] == busqueda)
    return x;
}
return -1;
}