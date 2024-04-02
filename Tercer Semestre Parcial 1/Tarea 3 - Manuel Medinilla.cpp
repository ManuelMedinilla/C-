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
    string departamento[22];
    int positivos[22];
    int decesos[22];
    int recuperados [22];
    int i=0;
	string agg;
	int n;
	int suma, suma2, suma3;
	suma = 0;
	suma2 = 0;
	suma3 = 0;
	do
	{
		cout << "TAREA NO.3 MANUEL MEDINILLA 0901-22-1310" << endl;
		cout << "------------------------------------------------------------------------------------------------------" << endl;
    	cout << "Ingresa el departamento a registrar datos: " << endl;
	    cin >> departamento[i];
    	cout << "Ingrese los casos positivos del departamento: " << endl;
        cin >> positivos[i];
        suma = suma + positivos[i];
        cout << "Suma de personas positivas: " << suma << endl;
        cout << "Ingrese los decesos del departamento: " << endl;
    	cin >> decesos[i];
    	suma2 = suma2 + decesos[i];
    	cout << "Suma de decesos: " << suma2 << endl;
	    cout << "Deseas ingresar otro departamento? " << endl;
	    cin >> agg;
		i= i + 1;
		n = i;
		cout << "------------------------------------------------------------------------------------------------------" << endl;	
	}
	
    while (agg!= "no");
    system ("cls");
	gotoxy(50,1);
	cout << "DATOS FINALES POR DEPARTAMENTO:" << endl;
	gotoxy(14,3);
	cout << "DEPARTAMENTO INGRESADO:" << endl; 
	gotoxy(44,3);
	cout << "CASOS POSITIVOS:" << endl;
    gotoxy(74,3);
    cout << "TOTAL DE DECESOS:" << endl;
    gotoxy(94,3);
    cout << "TOTAL DE RECUPERADOS:" << endl;
     
	for (int i=0; i<n; i++)
	{
		gotoxy(14,4+i);
		cout << departamento[i] << endl;
		gotoxy(44,4+i);
		cout << positivos[i] << endl;
		gotoxy(74,4+i);
		cout << decesos[i] << endl;
		recuperados[i] = positivos[i] - decesos[i];
		gotoxy(104,4+i);
		cout << recuperados[i] << endl;
		suma3 = suma3 + recuperados[i];
	}
		gotoxy(10,4+i+1);
		cout << "La suma de las personas positivas es: " << suma << endl;
		gotoxy(10,5+i+1);
		cout << "La suma de los decesos: " << suma2 <<endl;
		gotoxy(10,6+i+1);
		cout << "La suma de los recuperados es:" << suma3 << endl;
 return 0;       
                                                                                                          
}