#include <iostream>
#include <windows.h>
using namespace std;

string nombre, producto;
int nit, codigo[12], unitario[12], cantidad[12], contador = 0;
double descuento, ivai, subtotal, total;
const double iva = 0.12;
char respuesta = 's',

int main()
{
	cout << "Ingrese el nombre del cliente: ";
    cin >> nombre;
    cout << "Ingrese el nit del cliente: ";
    cin >> nit;
  
    for (int i = 0; i <= 12 && respuesta == 's'; i++) 
	{ 
            cout << "Ingrese el nombre del producto: ";
            cin >> producto;
            cout << "Ingrese el codigo del producto: ";
            cin >> codigo[i];
            cout << "Ingrese el precio unitario del producto: ";
            cin >> unitario[i];
            cout << "Ingrese la cantidad de productos: ";
            cin >> cantidad[i];
            subtotal = unitario[i] * cantidad[ji;
       if (codigo[i] == 111 || codigo[i] == 112 || codigo[i] == 113) 
		{
            descuento += unitario[j] * cantidad[j] * 0.2; // Aplicamos el descuento del 20%
        }     
                    
        cout << "Desea agregar otro producto? (S/N): ";
        cin >> respuesta;
        
    ivai = (subtotal-descuento) * iva;
    total = (subtotal- descuento);
    return 0;
    }
}

    
    
