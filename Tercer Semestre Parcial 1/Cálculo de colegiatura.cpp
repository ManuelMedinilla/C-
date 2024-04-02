#include <iostream>

using namespace std;
const int valor_curso = 200;
int cursos, total;
string respuesta;

int main()
{
	cout<<"Ingrese la cantidad de cursos que tiene asignados:\n";
	cin>>cursos;
	while (cursos<=6)
	{
		cout<<"El total a pagar por cursos asignados es:\n"<<cursos*valor_curso<<endl;
		cout<<"Ingrese la cantidad de cursos que tiene asignados:\n";
		cin>>cursos;
	}
	
	cout<<"Debe hacer el tramite de autorizacion de cursos extras en el area administrativa.\n";
	
	return 0;
}