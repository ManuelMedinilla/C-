#include <iostream>
using namespace std;

int cantidad, i;
double salario, planilla;

int main()
{
	cout << "Ingrese la cantidad de empleados de la empresa:" << endl;
	cin >> cantidad;
	planilla = 0;
	for (i=1; i <= cantidad; i++)
	{
	 cout << "Ingrese el salario del Empleado:" << endl;
	 cin >> salario;
	 planilla = planilla + salario;
	 cout << "El total a pagar de la planilla es: " << planilla << endl;
	}
    return 0;
}