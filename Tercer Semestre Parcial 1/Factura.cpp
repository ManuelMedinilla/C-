#include <iostream>
#include <windows.h>
using namespace std;

string nombre, respuesta, producto;
int nit, codigo[12], cantidad[12], unitario[12];
double ivai, subtotal, total, precio[12];
const double iva = 0.12;

// Definición de la función gotoxy
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
	cout << "Ingrese el nombre del cliente: ";
    cin >> nombre;
    cout << "Ingrese el nit del cliente: ";
    cin >> nit;
    
    int i = 0;
    do {
        cout << "Ingrese el nombre del producto: ";
        cin >> producto;
        cout << "Ingrese el código del producto: ";
        cin >> codigo[i];
        cout << "Ingrese el precio unitario del producto: ";
        cin >> precio[i];
        cout << "Ingrese la cantidad de productos vendidos: ";
        cin >> cantidad[i];
        i++;

        cout << "¿Desea agregar otro producto? (S/N): ";
        cin >> respuesta;
    } while (respuesta == "S" || respuesta == "s");

    subtotal = 0;
    for (int j = 0; j < i; j++) {
        unitario[j] = precio[j] * cantidad[j];
        // Verificamos si el código del producto tiene descuento
        if (codigo[j] == 111 || codigo[j] == 112 || codigo[j] == 113) {
            subtotal += unitario[j] * 0.8; // Aplicamos el descuento del 20%
        } else {
            subtotal += unitario[j];
        }
    }
    
    ivai = subtotal * iva;
    total = subtotal + ivai;

    // Mostramos la factura con la función gotoxy
    system("cls");
    gotoxy(10, 2);
    cout << "Factura para " << nombre << ", NIT " << nit << endl;
    gotoxy(10, 4);
    cout << "Producto\tCódigo\tPrecio\tCantidad\tTotal" << endl;
    int y = 5;
    for (int j = 0; j < i; j++) {
        gotoxy(10, y);
        cout << producto << "\t" << codigo[j] << "\t" << precio[j] << "\t" << cantidad[j] << "\t" << unitario[j] << endl;
        y++;
    }
    gotoxy(10, y);
    cout << "Subtotal: $" << subtotal << endl;
    y++;
    gotoxy(10, y);
    cout << "IVA (" << iva * 100 << "%): $" << ivai << endl;
    y++;
    gotoxy(10, y);
    cout << "Total: $" << total << endl;

    return 0;
}
