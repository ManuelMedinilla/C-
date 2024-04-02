#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main ()
{
    string nombre;
    int cesta=0,n, descuento = 0, nit, codigo[12], cantidad[12], unitario[12];
    double ivai = 0, subtotal = 0, total = 0, precio[12];
    const double iva = 0.12;
    char respuesta = 's';
    
	cout << "Ingrese el nombre del cliente: ";
    cin >> nombre;
    cout << "Ingrese el nit del cliente: ";
    cin >> nit;
    for (int i = 0; i <= 12 && respuesta == 's'; i++) 
	{ 
            cout << "Ingrese el codigo del producto: ";
            cin >> codigo[i];
            cout << "Ingrese el precio unitario del producto: ";
            cin >> unitario[i];
            cout << "Ingrese la cantidad de productos: ";
            cin >> cantidad[i];
            subtotal += unitario[i] * cantidad[i];
    
    if (codigo[i] == 111 || codigo[i] == 112 || codigo[i] == 113) 
		{
            descuento += unitario[i] * cantidad[i] * 0.2; 
        }     
    cout << "Desea agregar otro producto? (S/N): ";
    cin >> respuesta;
    cesta++;
	}
	ivai = (subtotal-descuento) * iva;
    total = subtotal- descuento;
    
    system("cls");
    cout << "-----------------------Factura-----------------------"<< endl;
    cout << "NOMBRE: " << nombre << endl;
    cout << "NIT: " << nit << endl;
    cout << "----------------------------------------------------- "<< endl;
    cout << "CANTIDAD\tPRECIO UNITARIO\tTOTAL" << endl;
    for (int j = 0; j < cesta; j++)
	{
		cout << cantidad[j] << "\t\t" << fixed << setprecision(2) << unitario[j] << "\t\t" << fixed << setprecision(2) << cantidad[j]*unitario[j] << endl;
	}
	cout << "----------------------------------------------------- "<< endl;
	cout << "\t\tSubtotal:\t" << fixed << setprecision(2) << subtotal << endl;
	cout << "\t\tDescuento:\t" << fixed << setprecision(2) << descuento << endl;
	cout << "\t\tIVA:\t" << fixed << setprecision(2) << ivai << endl;
	cout << "\t\tTotal:\t" << fixed << setprecision(2) << total << endl;
	system("pause");
    return 0;
}