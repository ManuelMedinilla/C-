#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
int edades[5];
int otra;
int i, j, n, aux;

do
{
	cout << "Ingresa la edad " <<i << endl;
	cin >> edades[i];
	i=i+1;
	cout << "Deseas ingresar otra edad? " << endl;
	cin >> otra;
}
 while (otra!=0);
 
 n=i;
 
 for (i=1; i<n; i++)
 {
 	j=i;
 	aux=edades[i];
 	
 	while (j>0 && aux<edades[j-1])
 	{
 		edades[j]= edades[j-1];
 		j= j-1;
    }
  edades[j]=aux;
  
 }
 
 printf ("\n Los elementos ordenados del arreglo son: \n");
 
 for (i=0; i<n; i++)
 {
 	printf ("Elemento [%d]: %d\n", i, edades[i]);
 }
   
return 0;
}