#include <iostream>
using namespace std;
int clave;

int main()
{ 
	cout << "Ingresa tu clave\n";
	cin >> clave;
	
	if (clave <= 123)
	{
		cout << "Bienvenido al sistema de estudiante\n";
	}
	else
		if (clave <= 456)
		{
		cout << "Bienvenido al sistema de docente\n";
		}
		else
			{
			cout << "Vuelva a intentarlo\n";
			}
	return 0;
}