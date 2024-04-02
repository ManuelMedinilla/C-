#include <stdio.h>  
#include <windows.h>
#include <iostream>

using namespace std;
void menu2();
void ingresar2();
void buscar2();
void ordenar2();
int edades2[5],dpi[5];
string nombre2[5],lugar[5];
int ii, jj, nn;

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
menu2();
return 0;
}

void menu2()
{
    int opcion2=0;
    do
    {
    cout <<"Ingreso de Ciudadanos\n\n";
    cout <<"1. Ingresar Ciudadanos\n";
    cout <<"2. Buscar ciudadanos\n";
    cout <<"3. Ordenar ciudadanos\n";
    cout <<"4. Salir\n";
    cin >> opcion2;
    switch(opcion2)
    {
        case 1:{
        ingresar2();
        break;
    }
    case 2:{
        buscar2();
        break;
    }
    case 3:{
        ordenar2();
        break;
    }
} 

}
while(opcion2!=4);
}

void ingresar2()
{
    cout <<"Ingresar los datos de los ciudadanos.\n";

 	int otra2;
    int suma2=0;

        do
        {
        	cout << "Ingresa el nombre del ciudadano: " << ii<< endl;
            cin >> nombre2[ii];
            cout << "Ingresa la edad: " << ii<< endl;
            cin >> edades2[ii];
            cout << "Ingresa el DPI del ciudadano: " << ii<< endl;
            cin >> dpi[ii];
            cout << "Ingresa el lugar de nacimiento del ciudadano: " << ii<< endl;
            cin >> lugar[ii];
            suma2 = suma2 + edades2[ii];
            ii= ii + 1;
            nn = ii;
            cout << "Deseas ingresar otro ciudadano? " << endl;
            cin >> otra2;
        }
        while (otra2!=0);
        system ("cls");
        gotoxy(25,1);
        cout << "            Registro de datos del ciudadano " << endl;  
        gotoxy(15,3);
        cout << "NOMBRE " << endl; 
        gotoxy(35,3);
        cout << "EDAD " << endl;
        gotoxy(50,3);
        cout << "ANO DE NACIMIENTO" << endl;
        gotoxy(75,3);
        cout << "DPI" << endl;
        gotoxy(100,3);
        cout << "LUGAR DE NACIMIENTO" << endl;
        
        for (int ii=0; ii<nn; ii++)
        {
            gotoxy(15,4+ii);
            cout << nombre2[ii]<< endl;
            gotoxy(35,4+ii);
            cout << edades2[ii]<< endl;
            gotoxy(50,4+ii);
            cout << 2023-edades2[ii] << endl;
            gotoxy(75,4+ii);
            cout << dpi[ii] << endl;
            gotoxy(100,4+ii);
            cout << lugar[ii] << endl;
        }
}

void buscar2()
{
	cout <<"Buscar en el arreglo.\n";
    
	int BuscarEnArreglo2(const int arreglo2[], int busqueda2, int longitud2);
	
	int busqueda2;
	int ii=0;
	
 
 	cout << "\nIngresa el DPI de la persona que desea buscar: ";
 	cin >> busqueda2;

	int longitud2 = sizeof dpi / sizeof dpi[0];
	int existe2 = BuscarEnArreglo2(dpi, busqueda2, longitud2);
	
	if (existe2==-1)
	{
	cout << "\nNo existe" << endl;	
	}
	
	else
	{
	printf ("\nLa posicion de del DPI %d en el arreglo es %d \n",busqueda2, existe2);
	cout << "NOMBRE:" << nombre2[existe2] << endl;
	cout << "EDAD:" << edades2[existe2] << endl;
	cout << "LUGAR DE NACIMIENTO:" << lugar[existe2] << endl;	
	}
	
	
	}

	int BuscarEnArreglo2(const int arreglo2[], int busqueda2, int longitud2)
	{

	for (int x2=0; x2<longitud2; x2++)
	{
    if (arreglo2[x2] == busqueda2)
    return x2;
	}

	return -1;
	}

void ordenar2()
{
    cout <<"Este es el programa que ordena los valores del arreglo.\n";
    string aux21, aux4;
    int aux0, aux3;

    
	nn=ii;
 
 	for (ii=1; ii<nn; ii++)
 	{
    	jj=ii;
    	aux0=edades2[ii];
    	aux21 = nombre2[ii];
    	aux3 = dpi[ii];
    	aux4 = lugar[ii];
     
     	while (jj>0 && aux3<dpi[jj-1])
    {
        edades2[jj]= edades2[jj-1];
        nombre2[jj]= nombre2[jj-1];
        dpi[jj]= dpi[jj-1];
        lugar[jj]= lugar[jj-1];
        jj= jj-1;
    }
  	edades2[jj]=aux0;
  	nombre2[jj] = aux21;
  	dpi[jj] = aux3;
  	lugar[jj] = aux4;
  
 }
 
 	printf ("\n Los elementos ordenados del arreglo son: \n");
 
 	for (ii=0; ii<nn; ii++)
 	{
     printf ("Elemento [%d]: %d\n", ii, dpi[ii]);
     cout << "NOMBRE: " << nombre2[ii] << endl;
     cout << "EDAD: " << edades2[ii] << endl;
     cout << "LUGAR DE NACIMIENTO: " << lugar[ii] << endl;
     
 	}
   
}