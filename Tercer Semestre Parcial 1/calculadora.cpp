#include <iostream>

using namespace std;

int main() {
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
    return 0;
}


