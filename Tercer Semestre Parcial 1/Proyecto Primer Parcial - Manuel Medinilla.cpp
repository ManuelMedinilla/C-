#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
void menu();
void calculadora();
void factura();

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
	cout << "------------------------------------------------------------------------------------------------------" << endl;
	cout <<"Proyecto Primer Parcial - Manuel Medinilla\n";
	cout <<"1. Calculadora Basica\n";
	cout <<"2. Factura\n";
	cout <<"3. Salir\n";
	cout << "------------------------------------------------------------------------------------------------------" << endl;
	cin >> opcion;
	switch(opcion)
	{
	
	case 1:{
	calculadora();
		break;
	}
	case 2:{
	factura();
		break;
	}
} 

}
while(opcion!=3);
}

void calculadora()
{
    int opcion;
    float num1, num2, resultado;
    char continuar;
    
do {
    cout << "Seleccione la operacion que desea realizar: " << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;

    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            resultado = num1 + num2;
            cout << "El resultado de la suma es: " << resultado << endl;
            break;
        case 2:
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            resultado = num1 - num2;
            cout << "El resultado de la resta es: " << resultado << endl;
            break;
        case 3:
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            resultado = num1 * num2;
            cout << "El resultado de la multiplicacion es: " << resultado << endl;
            break;
        case 4:
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
            if(num2 == 0) {
                cout << "Error: division entre cero no permitida." << endl;
            } else {
                resultado = num1 / num2;
                cout << "El resultado de la division es: " << resultado << endl;
            }
            break;
        default:
            cout << "Opcion no valida." << endl;
    }
      cout << "Desea realizar otra operacion? (S/N)" << endl;
        cin >> continuar;
   } while(continuar == 's');

}

void factura()
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
}

