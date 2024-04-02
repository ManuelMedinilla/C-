#include <iostream>

using namespace std;
int numero;
string respuesta;

int main()
{
	cout<<"Ingresa un numero menor o igual a 100\n";
	cin>>numero;
	while (numero<=100)
	
	{
		cout<<"El cuadrado del numero es\n"<<numero*numero<<endl;
		cout<<"Ingresa un numero menor o igual a 100\n";
		cin>>numero;
	}
	
	cout<<"Gracias por utilizar nuestro programa\n";
	
	return 0;
}