#include <iostream>
using namespace std;
int numero;

int main()
{
	do
	{
		cout <<"Ingresa un numero menor o igual a 100\n";
		cin >> numero;
	}
	while (numero<=100);
	cout <<"Error, se solicito un numero menor o igual a 100\n";
return 0;
}