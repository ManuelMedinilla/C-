#include <stdio.h>  
#include <windows.h>
#include <iostream>

using namespace std;
void menu();
void ingresar();
void buscar();
void ordenar();
int edades[5];
string nombre[5];
int i, j, n;

void gotoxy(int x,int y)

{  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  

int main()
{
menu();
return 0;
}

void menu()
{
    int opcion=0;
    do
    {
    cout <<"Programa completo con arreglos\n\n";
    cout <<"1. Ingresar datos\n";
    cout <<"2. Buscar\n";
    cout <<"3. Ordenar\n";
    cout <<"4. Salir\n";
    cin >> opcion;
    switch(opcion)
    {
        case 1:{
        ingresar();
        break;
    }
    case 2:{
        buscar();
        break;
    }
    case 3:{
        ordenar();
        break;
    }
} 

}
while(opcion!=4);
}

void ingresar()
{
    cout <<"Este es el programa que permite ingresar los datos.\n";

 	int otra;
    int suma=0;

        do
        {
            cout << "Ingresa la edad:" << i<< endl;
            cin >> edades[i];
            suma = suma + edades[i];
            cout << "Suma: " << suma << endl;
            cout << "Ingresa el nombre: " << i<< endl;
            cin >> nombre[i];
            i= i + 1;
            n = i;
            cout << "Deseas ingresar otra persona? " << endl;
            cin >> otra;
        }
        while (otra!=0);
        system ("cls");
        gotoxy(25,1);
        cout << "            Registro de datos " << endl;  
        gotoxy(15,3);
        cout << "EDAD " << endl; 
        gotoxy(25,3);
        cout << "NOMBRE " << endl;
        gotoxy(50,3);
        cout << "ANO DE NACIMIENTO" << endl;
        for (int i=0; i<n; i++)
        {
            gotoxy(15,4+i);
            cout << edades[i]<< endl;
             gotoxy(25,4+i);
            cout << nombre[i]<< endl;
            gotoxy(50,4+i);
            cout << 2023-edades[i] << endl;
        }
        gotoxy(10,4+i+1);
        cout << "           La suma de las edades es: " << suma<<endl;
          cout<<"\n\n";
}

void buscar()
{
    cout <<"Este es el programa para buscar en el arreglo.\n";
    
	int BuscarEnArreglo(const int arreglo[], int busqueda, int longitud);
	
	int busqueda;
	int i=0;
	
 
 	cout << "\nIngresa la edad buscada: ";
 	cin >> busqueda;

	int longitud = sizeof edades / sizeof edades[0];
	int existe = BuscarEnArreglo(edades, busqueda, longitud);

	if (existe==-1)
   {
   cout << "\nNo existe" << endl;	
   }

	else
	{
	printf ("\nLa posicion de de la edad %d en el arreglo es %d \n",busqueda, existe);
	cout << "NOMBRE:" << nombre[existe] << endl;
	}
	
	
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

void ordenar()
{
    cout <<"Este es el programa que ordena los valores del arreglo.\n";
    string aux2;
    int aux;

    
	n=i;
 
 	for (i=1; i<n; i++)
 	{
    	j=i;
    	aux=edades[i];
    	aux2 = nombre[i];
     
     	while (j>0 && aux<edades[j-1])
    	 {
        edades[j]= edades[j-1];
        nombre[j]= nombre[j-1];
        j= j-1;
    }
  	edades[j]=aux;
  	nombre[j] = aux2;
  
 }
 
 	printf ("\n Los elementos ordenados del arreglo son: \n");
 
 	for (i=0; i<n; i++)
 	{
     printf ("Elemento [%d]: %d\n", i, edades[i]);
     cout << "NOMBRE: " << nombre[i] << endl;
 	}
   
}