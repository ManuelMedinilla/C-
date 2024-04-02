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
string edades[5][2];
    cout << "Por favor ingrese la siguiente informacion: \n";
    string edad,nombre;
    
    for (int i=0; i<5; i++)
    {
        cout << "\n******* Resultados " << i + 1 << "********:\n";
        cout << "Edad: ";
        getline(cin,edad);
        cout << "Nombre: ";
        getline(cin,nombre);
        edades[i][0] = edad;
        edades[i][1] = nombre;
    }
    
   system("cls");
    int filas = (sizeof(edades)/sizeof(edades[0]));
    int columnas = (sizeof(edades[0])/sizeof(edades[0][0]));
    
    cout<<"\n                   Los datos ingresados son: \n";
    gotoxy (25,3);
    cout<<"Edades";
    gotoxy (45,3);
    cout<<"Nombres";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
        	 gotoxy (25,i+5);
            cout<<edades[i][0];
            gotoxy (45,i+5);
            cout<<edades[i][1];
        }
    }
return 0;
}