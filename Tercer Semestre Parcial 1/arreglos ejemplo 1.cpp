#include <iostream>
using namespace std;

int main()
{
	int edades[5] = {5,15,25,35,45}; //Aunque es de dimension 5, comienza desde 0, por lo que muestra 4 secciones.
	for (int i=0; i<5; i++)
	{
		cout << "La edad almacenada en la posicion " << i<< " es: " << edades[i]<< endl;
		cout << "La persona nacio en el ano " << 2023-edades[i] << endl;
	}

return 0;
}