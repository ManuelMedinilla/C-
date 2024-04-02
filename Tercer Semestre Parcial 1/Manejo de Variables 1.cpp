#include <iostream>

using namespace std;
char palabra[12];
int numero;
double numero2;
double resultado;

int main() {
   
    cout << "Hello, world!" <<endl;
    cout << "Ingresa una palabra" <<endl;
    cin.getline (palabra, 12);
    cout << "La palabra ingresada fue: " <<palabra <<endl;
    cout << "Ingresa un numero" <<endl;
    cin >> numero;
    cout << "El numero ingresado fue: " <<numero <<endl;
    cout << "Ingresa un segundo numero" <<endl;
    cin >> numero2;
    cout << "El segundo numero ingresado fue: " <<numero2 <<endl;
    resultado = numero2 * 5;
    cout << "El resultado de multiplicarlo por 5 es: " <<resultado <<endl;
  
    return 0;
}