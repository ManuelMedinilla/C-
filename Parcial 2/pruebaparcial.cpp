#include <iostream>
#include "stdio.h"
#include "string"
#include "windows.h"
using namespace std;

int main() {
    const int max_vehiculos = 50; 
    int vehiculos[max_vehiculos][3]; 
    int codigo, modelo, kilometraje, antiguedad;
    int num_vehiculos = 0; 
    char opcion;
    
    do {
        cout << "Ingrese el codigo del vehiculo: ";
        cin >> codigo;
        cout << "Ingrese el modelo del vehiculo: ";
        cin >> modelo;
        cout << "Ingrese el kilometraje del vehiculo: ";
        cin >> kilometraje;
        
        
        antiguedad = 2023 - modelo;
        
        
        vehiculos[num_vehiculos][0] = codigo;
        vehiculos[num_vehiculos][1] = modelo;
        vehiculos[num_vehiculos][2] = kilometraje;
        
        num_vehiculos++; 
        
       
        cout << "Desea ingresar otro vehiculo? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' && num_vehiculos < max_vehiculos);
    
    
    int suma_kilometraje = 0;
    cout << "Taller \"Segundo Parcial\"" << endl;
    cout << "Codigo\tModelo\tKilometraje\tAntiguedad" << endl;
    for (int i = 0; i < num_vehiculos; i++) {
        
        antiguedad = 2023 - vehiculos[i][1];
        
        // mostramos los datos del vehículo
        cout << vehiculos[i][0] << "\t" << vehiculos[i][1] << "\t" << vehiculos[i][2] << "\t\t" << antiguedad << endl;
        
        
        suma_kilometraje += vehiculos[i][2];
    }
    
    
    float promedio_kilometraje = (float)suma_kilometraje / num_vehiculos;
    cout << endl << "Promedio del Kilometraje: " << promedio_kilometraje << endl;
    
    return 0;
}
