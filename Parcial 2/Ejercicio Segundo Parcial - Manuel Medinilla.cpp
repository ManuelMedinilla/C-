#include <iostream>
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
 	const int max_vehiculos = 50; 
    int vehiculos[max_vehiculos][3];
    int codigo, modelo, kilometraje, antiguedad;
    int num_vehiculos = 0; 
    char opcion;
    
    do {
        cout << "Ingrese el codigo del vehiculo: " << endl;
        cin >> codigo;
        cout << "Ingrese el modelo del vehiculo: " << endl;
        cin >> modelo;
        cout << "Ingrese el kilometraje del vehiculo: " << endl;
        cin >> kilometraje;
        
        antiguedad = 2023 - modelo;
        
        
        vehiculos[num_vehiculos][0] = codigo;
        vehiculos[num_vehiculos][1] = modelo;
        vehiculos[num_vehiculos][2] = kilometraje;
        
        num_vehiculos++; 
        
        
        cout << "Desea ingresar otro vehiculo? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' && num_vehiculos < max_vehiculos);
     
	system ("cls");
    int suma_kilometraje = 0;
    cout << "Taller -Segundo Parcial - Manuel Medinilla\"" << endl;
    gotoxy (25,3);
    cout << "Codigo";
    gotoxy (45,3);
    cout << "Modelo";
    gotoxy (65,3);
    cout << "Kilometraje";
     gotoxy (85,3);
    cout << "Antiguedad";
    
    for (int i = 0; i < num_vehiculos; i++) 
	{
        
        antiguedad = 2023 - vehiculos[i][1];
        
        
        gotoxy (25,i+5);
        cout << vehiculos[i][0];
        gotoxy (45,i+5);
        cout << vehiculos[i][1];
        gotoxy (65,i+5);
		cout << vehiculos[i][2];
		gotoxy (85,i+5);
		cout << antiguedad;
        
        suma_kilometraje += vehiculos[i][2];
    }
    
    float promedio_kilometraje = (float)suma_kilometraje / num_vehiculos;
    cout << endl << "Promedio del Kilometraje: " << promedio_kilometraje << endl;
    
    return 0;
 	
 	
 }