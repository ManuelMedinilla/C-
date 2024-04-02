#include <iostream>

using namespace std;
char nombre[30];
double salario_base, bonif;
const double igss_emp = 0.0483, igss_pat = 0.1067 ; 
double salario_liq, salarioes, salariop;

 int main() {
 	
 	cout << "Bienvenido" <<endl;
    cout << "Ingrese el nombre completo del Empleado:" <<endl;
    cin.getline (nombre, 30);
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