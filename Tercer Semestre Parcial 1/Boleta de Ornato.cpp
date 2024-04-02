#include <iostream>
using namespace std;
double ingreso;

int main()
{ 
	cout << "Ingrese su ingreso total al mes:";
	cin >> ingreso;
	
	if (ingreso <= 1000)
	{
		cout << "Usted debera pagar Q.10.00 de boleta de ornato, y Q.20.00 en el caso de multa.";
	}
	else
		if (ingreso <= 3000)
		{
		cout << "Usted debera pagar Q.15.00 de boleta de ornato, y Q.30.00 en el caso de multa.";
		}
		else
		if (ingreso <= 6000)
			{
			cout << "Usted debera pagar Q.50.00 de boleta de ornato, y Q.100.00 en el caso de multa.";
			}
		else
		if (ingreso <= 9000)
			{
			cout << "Usted debera pagar Q.75.00 de boleta de ornato, y Q.150.00 en el caso de multa.";
			}
		else
		if (ingreso <= 12000)
			{
			cout << "Usted debera pagar Q.100.00 de boleta de ornato, y Q.200.00 en el caso de multa.";
			}
		else
		if (ingreso >= 12000.01)
			{
			cout << "Usted debera pagar Q.150.00 de boleta de ornato, y Q.300.00 en el caso de multa ";
			}
		return 0;
		}

