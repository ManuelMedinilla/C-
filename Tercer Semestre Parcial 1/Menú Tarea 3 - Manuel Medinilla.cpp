#include <stdio.h>  
#include <windows.h>  
#include <iostream>

using namespace std;

void menu();
void registrodecasos();
void cuentapacientes();
void gotoxy(int x,int y)
{  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}  
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
	cout <<"TAREA 3 Manuel Medinilla 0901-22-1310\n";
	cout <<"1. Registro de casos Covid\n";
	cout <<"2. Estado de cuenta de pacientes\n";
	cout <<"3. Salir\n";
	cout << "------------------------------------------------------------------------------------------------------" << endl;
	cin >> opcion;
	switch(opcion)
	{
	
	case 1:{
		registrodecasos();
		break;
	}
	case 2:{
		cuentapacientes();
		break;
	}
} 

}
while(opcion!=3);
}

void registrodecasos()
{

    string departamento[22];
    int positivos[22];
    int decesos[22];
    int recuperados [22];
    int i=0;
	string agg;
	int n;
	int suma, suma2, suma3;
	suma = 0;
	suma2 = 0;
	suma3 = 0;
	do
	{
		cout << "------------------------------------------------------------------------------------------------------" << endl;
		cout << "TAREA NO.3 MANUEL MEDINILLA 0901-22-1310" << endl;
		cout << "------------------------------------------------------------------------------------------------------" << endl;
    	cout << "Ingresa el departamento a registrar datos: " << endl;
	    cin >> departamento[i];
    	cout << "Ingrese los casos positivos del departamento: " << endl;
        cin >> positivos[i];
        suma = suma + positivos[i];
        cout << "Suma de personas positivas: " << suma << endl;
        cout << "Ingrese los decesos del departamento: " << endl;
    	cin >> decesos[i];
    	suma2 = suma2 + decesos[i];
    	cout << "Suma de decesos: " << suma2 << endl;
	    cout << "Deseas ingresar otro departamento? " << endl;
	    cin >> agg;
		i= i + 1;
		n = i;
		cout << "------------------------------------------------------------------------------------------------------" << endl;	
	}
	
    while (agg!= "no");
    system ("cls");
	gotoxy(50,1);
	cout << "DATOS FINALES POR DEPARTAMENTO:" << endl;
	gotoxy(14,3);
	cout << "DEPARTAMENTO INGRESADO:" << endl; 
	gotoxy(44,3);
	cout << "CASOS POSITIVOS:" << endl;
    gotoxy(74,3);
    cout << "TOTAL DE DECESOS:" << endl;
    gotoxy(94,3);
    cout << "TOTAL DE RECUPERADOS:" << endl;
     
	for (int i=0; i<n; i++)
	{
		gotoxy(14,4+i);
		cout << departamento[i] << endl;
		gotoxy(44,4+i);
		cout << positivos[i] << endl;
		gotoxy(74,4+i);
		cout << decesos[i] << endl;
		recuperados[i] = positivos[i] - decesos[i];
		gotoxy(104,4+i);
		cout << recuperados[i] << endl;
		suma3 = suma3 + recuperados[i];
	}
		gotoxy(10,4+i+1);
		cout << "La suma de las personas positivas es: " << suma << endl;
		gotoxy(10,5+i+1);
		cout << "La suma de los decesos: " << suma2 <<endl;
		gotoxy(10,6+i+1);
		cout << "La suma de los recuperados es:" << suma3 << endl;
		cout << "------------------------------------------------------------------------------------------------------" << endl;

}

void cuentapacientes()
{
    string nom_paciente[10];
    int cama[10];
    int montomedic[10];
    int laboratorios [10];
    int gastosmedic [10];
    int total[10];
    int i=0;
	string agg;
	int n;
	int suma, suma2, suma3, gastos;
	suma = 0;
	suma2 = 0;
	suma3 = 0;
		do
	{
		cout << "TAREA NO.3 MANUEL MEDINILLA 0901-22-1310" << endl;
		cout << "------------------------------------------------------------------------------------------------------" << endl;
    	cout << "Ingresa el nombre del paciente: " << endl;
	    cin >> nom_paciente[i];
    	cout << "Ingrese el monto de los medicamentos del paciente: " << endl;
        cin >> montomedic[i];
        suma = suma + montomedic[i];
        cout << "Ingrese los gatos por laborotio del paciente: " << endl;
    	cin >> laboratorios[i];
    	suma2 = suma2 + laboratorios[i];
    	cout << "Ingrese los gatos por gastos medicos del paciente: " << endl;
    	cin >> gastosmedic[i];
    	suma3 = suma3 + gastosmedic[i];
    	gastos = montomedic[i] + laboratorios[i] + gastosmedic[i];
    	cout << "Los gatos totales por paciente son: " << gastos << endl;
	    cout << "Deseas ingresar los datos de otro paciente? " << endl;
	    cin >> agg;
		i= i + 1;
		n = i;
		cout << "------------------------------------------------------------------------------------------------------" << endl;	
	}
	
    while (agg!= "no");
    system ("cls");
	gotoxy(50,1);
	cout << "DATOS TOTALES DE LOS PACIENTES:" << endl;
	gotoxy(14,3);
	cout << "NOMBRE DEL PACIENTE:" << endl; 
	gotoxy(39,3);
	cout << "MONTO DE MEDICAMENTOS:" << endl;
    gotoxy(64,3);
    cout << "GASTOS DE LABORATORIO:" << endl;
    gotoxy(89,3);
    cout << "GASTOS MEDICOS:" << endl;
    gotoxy(114,3);
    cout << "GASTOS POR PACIENTE:" << endl;
   
	for (int i=0; i<n; i++)
	{
		gotoxy(14,4+i);
		cout << nom_paciente[i] << endl;
		gotoxy(39,4+i);
		cout << montomedic[i] << endl;
		gotoxy(64,4+i);
		cout << laboratorios[i] << endl;
		gotoxy(89,4+i);
		cout << gastosmedic[i] << endl;
		total[i] = montomedic[i] + laboratorios[i] + gastosmedic[i];
		gotoxy(114,4+i);
		cout << total[i] << endl;
	}
		gotoxy(10,4+i+1);
		cout << "La suma total del monto de medicamentos es: " << suma << endl;
		gotoxy(10,5+i+1);
		cout << "La suma total de los gastos de laboratorio es: " << suma2 <<endl;
		gotoxy(10,6+i+1);
		cout << "La suma total de los gastos medicos es:" << suma3 << endl;
		cout << "------------------------------------------------------------------------------------------------------" << endl;
}

