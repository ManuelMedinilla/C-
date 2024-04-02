#include <iostream>
#include <stdio.h>
using namespace std;

int BuscarEnArreglo(const int arreglo[], int busqueda, int longitud);

int main()
{
int edades[]={5, 15, 25, 35, 45};
int busqueda = 35;
int longitud = sizeof edades / sizeof edades[0];
int existe = BuscarEnArreglo(edades, busqueda, longitud);
printf ("La posicion de %d en el arreglo es %d ",busqueda, existe);
return 0;
}

int BuscarEnArreglo(const int arreglo[], int busqueda, int longitud)
{

for (int i=0; i<longitud; i++)
{
	if (arreglo[i] == busqueda)
	return i;
}
return -1;
}