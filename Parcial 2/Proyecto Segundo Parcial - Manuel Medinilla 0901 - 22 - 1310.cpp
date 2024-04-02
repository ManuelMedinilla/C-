#include "iostream"
#include "stdio.h"
#include "string"
#include "windows.h"

using namespace std;
void menu();
void ingresar();
void registro();
void buscar();
void ordenar();

int pasaje[5][5];
int pasaportes[30][30];
int n=0;
double promedio = 0;
string nombre[5];
string nacion[5];
int i=0;
int j=0;
int fecha=0;
double promedior=0;
int costovuelo=0,totalr=0,sumap=0;
int impuestos[5];
    
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
    cout <<"\nPROYECTO - SEGUNDO PARCIAL - MANUEL MEDINILLA 0901-22-1310 " <<endl;
    cout <<"1. Ingreso de Pajeros" <<endl;
    cout <<"2. Registro de Pasaje" <<endl;
    cout <<"3. Buscar Pasajes" <<endl;
    cout <<"4. Ordenar Pasajeros" <<endl;
    cout <<"5. Salir\n" <<endl;
    cin >> opcion;
    
    switch(opcion)
    {
        case 1:{
        ingresar();
        break;
    }
    case 2:{
     registro();
        break;
    }
    case 3:{
       buscar();
        break;
    }
    case 4:{
    	 ordenar();
		break;
	}
} 

}
while(opcion!=5);
}
void ingresar(){
int otra=0,total=0,suma=0;

int pasaporte=0,nacimiento=0;
cout<< "Ingrese la siguiente informacion: \n" <<endl;
do
 {
 cout << "\n******* Pasajero " << i + 1 << "********:\n" << endl;
	cout<<"Ingrese numero de pasaporte:" <<endl;
	cin>>pasaporte;
	cout<<"Ingrese el nombre del pasajero:" <<endl;
	cin>>nombre[i];
	cout<<"Ingrese nacionalidad del pasajero:"<<endl;
	cin>>nacion[i];
	cout<<"Ingrese ano de nacimiento del pasajero:"<<endl;
	cin>>nacimiento;
	pasaportes[i][0]=pasaporte;
	pasaportes[i][3]=nacimiento;
	i=i+1;
    n=i;
    
 cout<<"Desea ingresar otro registro? (1/0)";
 cin>>otra;
}while(otra!=0);
 system("cls");
 int filas = (sizeof(pasaportes)/sizeof(pasaportes[0]));
 int columnas = (sizeof(pasaportes[0])/sizeof(pasaportes[0][0]));

cout<<"\n Los datos ingresados son: \n" <<endl;
gotoxy (10,3);
cout<<"Pasaporte";
gotoxy (35,3);
cout<<"Nombre";
gotoxy (55,3);
cout<<"Nacionalidad";
gotoxy (75,3);
cout<<"Ano de nacimiento";
gotoxy (95,3);
cout<<"Edad";


for (int i = 0; i < n; i++)
 {
 for (int j = 0; j < columnas; j++)
 {
 gotoxy (10,i+5);
 cout<<pasaportes[i][0];
 gotoxy (35,i+5);
 cout<<nombre[i];
 gotoxy (55,i+5);
 cout<<nacion[i];
 gotoxy (75,i+5);
 cout<<pasaportes[i][3];
 gotoxy (95,i+5);
 cout<<2023-pasaportes[i][3];
 fecha=2023-pasaportes[i][3];
}

suma= suma + fecha;
 }
 promedio = suma/ n;
 gotoxy (25,11);
 cout<<"El promedio de las edad: "<< promedio <<endl;

}

void registro(){
	
int vuelo=0,pasaporte=0, asiento=0,rdeasientos=0,rmaletas=0,otra=0,rp=0;
cout << "Ingrese numero de vuelo:" <<endl;
cin >> vuelo;
cout << "Ingrese costo de vuelo:" << endl;
cin >> costovuelo;

do
 {
 cout << "\n******* Datos del Pasajero " << i + 1 << "********:\n"<<endl;
	cout << "Ingrese su numero de pasaporte:" <<endl;
	cin>>pasaporte;
	cout << "Ingrese numero de asiento:"<<endl;
	cin >> asiento;
	cout << "Ingrese recargo de seleccion de asientos:" <<endl;
	cin >> rdeasientos;
	cout << "Ingrese recargo de maletas:" <<endl;
	cin >> rmaletas;
	cout<<"Ingrese recargo de primera clase:" <<endl;
	cin >> rp;
	pasaje[i][0]=pasaporte;
	pasaje[i][1]=asiento;
	pasaje[i][2]=rdeasientos;
	pasaje[i][3]=rmaletas;
	pasaje[i][4]=rp;
	pasaje[i][5]=costovuelo*0.4;
	pasaje[i][6]=costovuelo+pasaje[i][2]+pasaje[i][3]+pasaje[i][4]+pasaje[i][5];
	i=i+1;
 n=i;
 cout << "Desea ingresar otro registro? (1/0)" <<endl;
 cin >> otra;
 
}while(otra!=0);
 	 system ("cls");
 	 int filas = (sizeof(pasaje)/sizeof(pasaje[0]));
 int columnas = (sizeof(pasaje[0])/sizeof(pasaje[0][0]));
 cout<<"VUELO: "<<vuelo<<endl;
 	cout<<"COSTO: "<<costovuelo<<endl;
 	 gotoxy(5,2);
 	cout<<"Pasaporte:";
 	 gotoxy(20,2);
 	cout<<"No. asiento:";
 	 gotoxy(35,2);
 	cout<<"Recargo de seleccion de asientos:";
 	 gotoxy(70,2);
 	cout<<"Recargo de maletas:";
 	 gotoxy(90,2);
 	cout<<"Recargo de primera clase:";
 	 gotoxy(125,2);
 	cout<<"Impuestos";
 		 gotoxy(155,2);
 	cout<<"Total a pagar" <<endl;
 	for (int i = 0; i < n; i++)
 {
 for (int j = 0; j < columnas; j++)
 {
 gotoxy (7,i+5);
 cout<<pasaje[i][0];
 gotoxy (22,i+5);
  cout<<pasaje[i][1];
 gotoxy (37,i+5);
cout<<pasaje[i][2];
 gotoxy (72,i+5);
 cout<<pasaje[i][3];
 gotoxy (92,i+5);

 cout << pasaje[i][4];
  gotoxy (127,i+5);

 cout << pasaje[i][5];
}
 gotoxy (157,i+5);

 cout << pasaje[i][6];


sumap = sumap + pasaje[i][6];
 }
 	
 	
 	
 promedior = sumap/ n;
 gotoxy (25,11);
 cout<<"La sumatoria es de : " << sumap <<endl;
 gotoxy (25,12);
 cout<<"El promedio del total a pagar es : "<<promedior <<endl;
 }

void buscar(){
	
bool encontrado; 
int filas = (sizeof(pasaportes)/sizeof(pasaportes[0])); 
int busqueda; 
cout << "Ingresa el numero de pasaporte buscado " <<endl; 
cin >> busqueda;

for (int i=0; i<n; i++)
{
	if(pasaportes[i][0]==busqueda){
	cout<<"Pasaporte encontrado en la posicion:"<<i<<endl;
	cout<<"Psaporte: "<<pasaportes[i][0]<<endl;
	cout<<"Nombre: "<<nombre[i]<<endl;
	cout<<"Nacionalidad: "<<nacion[i]<<endl;
	cout<<"Ano de nacimiento: "<<pasaportes[i][3]<<endl;
    cout<<"Edad: "<<fecha<<endl;
	encontrado = true;
	}
}
	if (!encontrado){
	
	cout<<"No existe el dato."<<endl;
}
}
void ordenar(){
	
	int aux;
    int aux2;  
	int aux3;
    int aux4; 
	int aux5;
	int aux6;
	int aux7; 
	                           
    n=i;
 
     for (i=1; i<n; i++)
     {
         j=i;
         aux=pasaje[i][0];
         aux2=pasaje[i][1];  
		 aux3=pasaje[i][2];
         aux4=pasaje[i][3];
         aux5=pasaje[i][4];
         aux6=pasaje[i][5];
         aux7=pasaje[i][6];
		                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
         while (j>0 && aux<pasaje[j-1][0])
         {
            pasaje[j][0]= pasaje[j-1][0];
            pasaje[j][1]= pasaje[j-1][1];
            pasaje[j][2]= pasaje[j-1][2];
            pasaje[j][3]= pasaje[j-1][3];
            pasaje[j][4]= pasaje[j-1][4];
            pasaje[j][5]= pasaje[j-1][5];
            pasaje[j][6]= pasaje[j-1][6];
            j= j-1;
        }
    pasaje[j][0]=aux;
    pasaje[j][1]=aux2;
    pasaje[j][2]=aux3;
    pasaje[j][3]=aux4;
    pasaje[j][4]=aux5;
    pasaje[j][5]=aux6;
    pasaje[j][6]=aux7;
    
     }

    system ("cls");
	printf ("\n Los elementos ordenados del arreglo son: \n");
    gotoxy(5,2);
 	cout<<"Pasaporte";
 	gotoxy(20,2);
 	cout<<"No. asiento";
 	gotoxy(35,2);
 	cout<<"Recargo de seleccion de asientos";
 	gotoxy(70,2);
 	cout<<"Recargo de maletas";
 	gotoxy(90,2);
 	cout<<"Recargo primera clase";
 	gotoxy(125,2);
 	cout<<"Impuestos";
 	gotoxy(155,2);
 	cout<<"Total a pagar";
   
	
	for (i=0; i<n; i++)
     {
     	
gotoxy (7,i+5);
cout<<pasaje[i][0];
gotoxy (22,i+5);
cout<<pasaje[i][1];
gotoxy (37,i+5);
cout<<pasaje[i][2];
gotoxy (72,i+5);
cout<<pasaje[i][3];
gotoxy (92,i+5);
cout<<pasaje[i][4];
gotoxy (127,i+5);
cout<<pasaje[i][5];
gotoxy (157,i+5);

 cout<<pasaje[i][6];
}
 gotoxy (25,11);
 cout<<"La sumatoria es de : "<<sumap <<endl;
 gotoxy (25,12);
 cout<<"El promedio del total a pagar es : "<<promedior<<endl;
 	
}
 	