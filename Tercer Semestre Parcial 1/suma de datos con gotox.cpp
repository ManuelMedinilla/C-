#include <stdio.h>  
#include <windows.h>  
#include <iostream>

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
      
	  int edades[5];
      int otra;
      int i=0;
      int n;
      int suma=0;

        do
        {
            cout << "Ingresa la edad " << i<< endl;
            cin >> edades[i];
            suma = suma + edades[i];
            cout << "Suma: " << suma << endl;
            i= i + 1;
            n = i;
            cout << "Deseas ingresar otra edad? " << endl;
            cin >> otra;
        }
        while (otra!=0);
        system ("cls");
	    gotoxy(25,1);
		cout << "Registro de casos Covid 19 " << endl;  
		gotoxy(14,3);
		cout << "EDAD INGRESADA" << endl; 
		gotoxy(44,3);
		cout << "ANO DE NACIMIENTO" << endl;
        for (int i=0; i<n; i++)
        {
            gotoxy(20,4+i);
			cout << edades[i]<< endl;
			gotoxy(50,4+i);
            cout << 2023-edades[i] << endl;
        }
		gotoxy(10,4+i+1);
		cout << "La suma de las edades es: " << suma;
		  
         	return 0;  
 }