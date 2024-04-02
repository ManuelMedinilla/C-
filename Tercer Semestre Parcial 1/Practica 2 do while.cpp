//Manuel Eduardo Medinilla Chavarria - 0901-22-1310
#include <iostream>
using namespace std;
int numero;
string respuesta; 
int main ()
{
	do
	{
		cout << "Ingresa un numero\n";
		cin >> numero;
		cout << "El cuadrado del numero es\n" << numero * numero << endl;
		cout << "Desea hacer otro calculo, Escriba n si desea salir\n";
		cin >> respuesta;
	}
    while (respuesta != "n");
    cout << "Gracias por utilizar el programa\n";
return 0;	
}