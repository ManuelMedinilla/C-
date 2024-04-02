//Manuel Eduardo Medinilla Chavarria - 0901-22-1310
#include <iostream>
using namespace std;
void menu();
void salario();
void boleto();
void planilla();

int main()
{
menu();
return 0;
}

void menu()
{
	int opcion=0;
	do
	{
	cout << "Manuel Medinilla 0901-22-1310\n";
	cout <<"Laboratorio 1\n";
	cout <<"1. Calculo del salario\n";
	cout <<"2. Determinar boleto de ornato\n";
	cout <<"3. Calculo de la planilla total\n";
	cout <<"4. Salir\n";
	cin >> opcion;
	switch(opcion)
	{
	
	case 1:{
		salario();
		break;
	}
	case 2:{
		boleto();
		break;
	}
	case 3:{
		planilla();
		break;
	}
} 

}
while(opcion!=4);
}

void salario()
{
char nombre[30];
double salario_base, bonif;
const double igss_emp = 0.0483, igss_pat = 0.1067 ; 
double salario_liq, salarioes, salariop;


 	cout << "Bienvenido" <<endl;
    cout << "Ingrese el nombre completo del Empleado:" <<endl;
    cin >> nombre;
    cout << "Ingrese el sueldo base del empleado:" <<endl;
 	cin >> salario_base;
 	cout << "Ingrese el valor de la bonificacion mensual del empleado:" <<endl;
 	cin >> bonif;
 	salarioes = salario_base * igss_emp;
 	salariop = salario_base * igss_pat;
 	cout << "El valor del IGSS del empleado es:" << salarioes << endl;
 	cout << "El valor del IGSS patronal del empleado es:" << salariop << endl;
 	salario_liq = (salario_base - salarioes) + bonif;
 	cout << "El salario liquido del empleado es:" << salario_liq << endl;
 }

void boleto()
{
	double ingreso;
	cout << "Ingrese su ingreso total al mes:";
	cin >> ingreso;
	
	if (ingreso <= 1000)
	{
		cout << "Usted debera pagar Q.10.00 de boleta de ornato, y Q.20.00 en el caso de multa.\n";
	}
	else
		if (ingreso <= 3000)
		{
		cout << "Usted debera pagar Q.15.00 de boleta de ornato, y Q.30.00 en el caso de multa.\n";
		}
		else
		if (ingreso <= 6000)
			{
			cout << "Usted debera pagar Q.50.00 de boleta de ornato, y Q.100.00 en el caso de multa.\n";
			}
		else
		if (ingreso <= 9000)
			{
			cout << "Usted debera pagar Q.75.00 de boleta de ornato, y Q.150.00 en el caso de multa.\n";
			}
		else
		if (ingreso <= 12000)
			{
			cout << "Usted debera pagar Q.100.00 de boleta de ornato, y Q.200.00 en el caso de multa.\n";
			}
		else
		if (ingreso >= 12000.01)
			{
			cout << "Usted debera pagar Q.150.00 de boleta de ornato, y Q.300.00 en el caso de multa.\n ";
			}
		}
void planilla()
{
	int cantidad, i;
    double salario, planilla;
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
}