//Manuel Eduardo Medinilla Chavarria - 0901-22-1310
#include <iostream>

using namespace std;
void menu();
void ingreso_datos();
void calculo_colegiatura();
void consulta_carrera();


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
	cout <<"Tarea 2 - Manuel Medinilla\n";
	cout <<"1. Ingreso de Datos del Estudiante.\n";
	cout <<"2. Calculo de Colegiatura.\n";
	cout <<"3. Consulta de Carrera.\n";
	cout <<"4. Salir\n";
	cin >> opcion;
	switch(opcion)
	{
	
	case 1:{
		ingreso_datos();
		break;
	}
	case 2:{
		calculo_colegiatura();
		break;
	}
	case 3:{
		consulta_carrera();
		break;
	}
} 

}
while(opcion!=4);
}

void ingreso_datos()
{
char nombre[50], jordana[30], semestre[30], sede[30];
string respuesta;
do
	{
	fflush(stdin);
	cout << "Ingrese el nombre completo del estudiante:\n";
	cin.getline (nombre, 50);
	cout << "Ingrese la Jordana en la que estudia:\n";
	cin.getline (jordana, 30);
	cout << "Ingrese el semestre que esta cursando:\n";
	cin.getline (semestre, 30);
	cout << "Ingrese el nombre de la sede en la que estudia:\n";
	cin.getline (sede, 30);
	cout << "Desea ingresar los datos de otro estudiante?, ingrese si o no, segun lo que desee hacer.\n";
	cin >> respuesta;
	}
	while (respuesta != "no");
	cout << "Gracias por ingresar datos.\n";

}

void calculo_colegiatura()
{
const int valor_curso = 200;
int cursos, total;
string respuesta;

cout<<"Ingrese la cantidad de cursos que tiene asignados:\n";
	cin>>cursos;
	while (cursos<=6)
	{
		cout<<"El total a pagar por cursos asignados es:\n"<<cursos*valor_curso<<endl;
		cout<<"Ingrese la cantidad de cursos que tiene asignados:\n";
		cin>>cursos;
	}
	
	cout<<"Debe hacer el tramite de autorizacion de cursos extras en el area administrativa.\n";

}

void consulta_carrera()
{
	int codigo;
	cout << "Ingrese su codigo de carrera:\n";
	cin >> codigo; 
	switch(codigo)
	{
	  case 901: cout << "Su carrera es Ingenieria en Sistemas, Jordana Matutina.\n"; break;
	  case 91: cout << "Su carrera es Ingenieria Electronica, Jordana Vespertina.\n"; break;
	  case 1091: cout << "Su carrera es Ingenieria Electronica, Jordana Matutina.\n"; break;
	  case 9015: cout << "Su carrera es Ingenieria Biomedica, Jordana Matutina.\n"; break;
	  case 1392: cout << "Su carrera es Ingenieria Electrica, Jordana Matutina.\n"; break;
	  case 1492: cout << "Su carrera es Ingenieria Electrica, Jordana Vespertina.\n"; break;
	  case 1592: cout << "Su carrera es Ingenieria Electrica, Jordana Vespertina.\n"; break;
	  case 1013: cout << "Su carrera es Ingenieria en Ciencias de Datos y Analitica.\n"; break;
	  case 1113: cout << "Su carrera es Ingenieria en Ciencias de Datos y Analitica.\n"; break;
	  case 12: cout << "Su carrera es Ingenieria en Ciencias de Datos y Analitica.\n"; break;
	  case 13: cout << "Su carrera es Ingenieria en Ciencias de Datos y Analitica.\n"; break;
	  default: cout << "Su codigo no existe en la base de datos."; break;	
	}
	
}