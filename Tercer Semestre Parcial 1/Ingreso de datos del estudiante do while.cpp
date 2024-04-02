#include <iostream>
using namespace std;
char nombre[50], jordana[30], semestre[30], sede[30];
string respuesta;

int main()
{
	do
	{
	fflush(stdin);
	cout << "Ingrese el nombre completo del estudiante:\n";
	cin.getline (nombre, 50);
	cout << "Ingrese la Jordana en la que estudia:\n";
	cin.getline (jordana, 30);
	cout << "Ingrese el semestre que esta cursando:\n";
	cin.getline (semestre, 30);
	cout << "Ingrese el nombre de la sede en la que estudia:\n";
	cin.getline (sede, 30);
	cout << "Desea ingresar los datos de otro estudiante?, ingrese si o no, segun lo que desee hacer.\n";
	cin >> respuesta;
	}
	while (respuesta != "no");
	cout << "Gracias por ingresar datos.";
return 0;	
}