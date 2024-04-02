#include "iostream"
#include "stdio.h"
#include "string"
#include "windows.h"
using namespace std;


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
	int edades[5][2], suma=0, fecha=0;
	double promedio = 0;
    cout << "Por favor ingrese la siguiente información: \n";
    int edad, nota;
    for(int i = 0; i < 5; i++)
    {
        cout << "\n******* Resultados " << i + 1 << "********:\n";
        cout << "Edad: ";
        cin>>edad;
        cout << "Notas: ";
        cin>>nota;
        edades[i][0] = edad;
        edades[i][1] = nota;
    }
    
   system("cls");
    int filas = (sizeof(edades)/sizeof(edades[0]));
    int columnas = (sizeof(edades[0])/sizeof(edades[0][0]));
    
    cout<<"\n                   Los datos ingresados son: \n";
    gotoxy (25,3);
    cout<<"Edades";
    gotoxy (45,3);
    cout<<"Notas";
    gotoxy (65,3);
    cout<<"Ano de nacimiento";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
        	 gotoxy (25,i+5);
            cout<<edades[i][0];
            gotoxy (45,i+5);
            cout<<edades[i][1];
            gotoxy (65,i+5);
            fecha=2023-edades[i][0];
            cout<<fecha;
            
        }
        suma = suma + fecha;
    }
    
    promedio = suma / filas;
      gotoxy (25,11);
      cout<<"El promedio del ano de nacimiento es: "<<promedio;    

    return 0;
}
