#include <iostream>

using namespace std;

int main()
{
	int codigo;
	cout << "Ingrese su codigo de carrera:\n";
	cin >> codigo; 
	
	switch(codigo)
	{
	  case 901: cout << "Su carrera es Ingenieria en Sistemas, Jordana Matutina.\n"; break;
	  case 91: cout << "Su carrera es Ingenieria Electronica, Jordana Vespertina.\n"; break;
	  case 1091: cout << "Su carrera es Ingenieria Electronica, Jordana Matutina.\n"; break;
	  case 9015: cout << "Su carrera es Ingenieria Biomedica, Jordana Matutina.\n"; break;
	  case 1392: cout << "Su carrera es Ingenieria Electrica, Jordana Matutina.\n"; break;
	  case 1492: cout << "Su carrera es Ingenieria Electrica, Jordana Vespertina.\n"; break;
	  case 1592: cout << "Su carrera es Ingenieria Electrica, Jordana Vespertina.\n"; break;
	  case 1013: cout << "Su carrera es Ingenieria en Ciencias de Datos y Analitica.\n"; break;
	  case 1113: cout << "Su carrera es Ingenieria en Ciencias de Datos y Analitica.\n"; break;
	  case 12: cout << "Su carrera es Ingenieria en Ciencias de Datos y Analitica.\n"; break;
	  case 13: cout << "Su carrera es Ingenieria en Ciencias de Datos y Analitica.\n"; break;
	  default: cout << "Su codigo no existe en la base de datos."; break;	
	}
	return 0;
}