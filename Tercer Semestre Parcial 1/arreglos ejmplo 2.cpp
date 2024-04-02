#include <iostream>
using namespace std;

int main()
{
	int edades[5];
	
	for (int i=0; i<5; i++)
	{
		cout << "Ingresa la edad " << i<< endl;
		cin >> edades[i];
	}
	
	for (int i=0; i<5; i++)
	{
		cout << "La edad almacenada en la posicion " << i<< " es: " << edades[i]<< endl;
		cout << "La persona nacio en el ano " << 2023-edades[i] << endl;
	}

return 0;
}