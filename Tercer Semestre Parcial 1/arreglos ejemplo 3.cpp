#include <iostream>
using namespace std;

int main()
{
	int edades[5];
	int otra;
	int i=0;
	int n;
	do
	{
		cout << "Ingresa la edad " << i<< endl;
		cin >> edades[i];
		i= i + 1;
		n = i;
		cout << "Deseas ingresar otra edad? " << endl;
		cin >> otra;
	}
	while (otra!=0);
	
	for (int i=0; i<n; i++)
	{
		cout << "La edad almacenada en la posicion " << i<< " es: " << edades[i]<< endl;
		cout << "La persona nacio en el ano " << 2023-edades[i] << endl;
	}

return 0;
}