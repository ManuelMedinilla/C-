#include "iostream"
#include "stdio.h"
#include "string"
#include "windows.h"

using namespace std;
void menu();
void ingresar();
void buscar();
void ordenar();
int edades[5][2];
int i=0;
int n;


 
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
	cout <<"\nPrograma Completo con Matrices\n";
	cout <<"1. Ingresar Valores\n";
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

    int suma=0;
    int fecha=0;
    double promedio=0;

               
    cout << "Por favor ingrese la siguiente informacion: \n";
    int edad, nota;
    int otra;
    

    do

        {

        cout << "\n******* Ingreso " << i + 1 << "********:\n";
        cout << "Edad: ";
        cin>>edad;
        cout << "Nota: ";
        cin>>nota;
        edades[i][0] = edad;
        edades[i][1] = nota;
        i=i+1;
        n=i;
        cout << "Deseas ingresar otra persona? 1=si 0=no" << endl;
        cin >> otra;

        }

        while (otra!=0);

    system ("cls");
    int filas = (sizeof(edades)/sizeof(edades[0]));
    int columnas = (sizeof(edades[0])/sizeof(edades[0][0]));
    system ("cls");
    cout << "\n                 Los datos ingresados son: \n";

                gotoxy (25,3);
                cout <<"EDADES";
                gotoxy (45,3);
                cout <<"NOTAS";
                gotoxy (65,3);
                cout <<"ANO DE NACIMIENTO";
    for (int i = 0; i < n; i++)

    {

        for (int j = 0; j < n; j++)

        {

            gotoxy (25,i+5);
            cout<<edades[i][0];
            gotoxy (45,i+5);
            cout<<edades[i][1];
            gotoxy (65,i+5);
            fecha= 2023-edades[i][0];
            cout<<fecha;

        }

        suma=suma+fecha;

    }

    promedio=suma/n;
    gotoxy (25,11);

    cout <<"El promedio de ano de nacimiento es:" << promedio << endl;
	
}
    


void buscar()
{
	cout <<"Este es el programa que busca los valores\n";
	bool encontrado;
	int busqueda;
	int filas = (sizeof(edades)/sizeof(edades[0]));
	
 cout << "Ingresa la edad buscada ";
 cin >> busqueda;
 for (int i=0; i<filas; i++)
 {
 	if (edades[i][0]==busqueda)
 	{
 		cout << "Edad encontrada en la posicion:"  <<   i << endl;
 		cout << "Edad: " << edades[i][0] << endl;
 		cout << "Nota: " << edades[i][1] << endl;
 		encontrado = true;
		i = i+1;
		n = i;
			
	}	
 }
 if (!encontrado)
cout << "No existe" << endl;
 
}


void ordenar()
{
	cout <<"Este es el programa que ordena los valores\n";
	  int aux;
      int aux2;
      int j;
      n=i;
 
     for (i=1; i<n; i++)
     {
         j=i;
         aux=edades[i][0];
         aux2=edades[i][1];    
         while (j>0 && aux<edades[j-1][0])
         {
             edades[j][0]= edades[j-1][0];
             edades[j][1]= edades[j-1][1];
             j= j-1;
        }
      edades[j][0]=aux;
      edades[j][1]=aux2;
     }
    system ("cls");
    printf ("\n Los elementos ordenados del arreglo son: \n");
    gotoxy (25,3);
    cout <<"EDADES";
    gotoxy (45,3);
    cout <<"NOTAS";
     
     for (i=0; i<n; i++)
     {
        gotoxy (25,i+5);
        cout<<edades[i][0];
        gotoxy (45,i+5);
        cout<<edades[i][1];
     }
}