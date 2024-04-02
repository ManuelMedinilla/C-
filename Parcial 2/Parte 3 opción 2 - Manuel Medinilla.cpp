#include <stdio.h>  
#include <windows.h>
#include <iostream>

using namespace std;
void menu3();
void ingresar3();
void buscar3();
void ordenar3();
int dpi3[5], boleto[5];
string nombre3[5];
int i3, j3, n3;

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
menu3();
return 0;
}

void menu3()
{
    int opcion3=0;
    do
    {
    cout <<"Programa - Boleto de Ornato\n\n";
    cout <<"1. Ingresar datos de la persona\n";
    cout <<"2. Buscar Boleto\n";
    cout <<"3. Ordenar Boletos\n";
    cout <<"4. Salir\n";
    cin >> opcion3;
    switch(opcion3)
    {
        case 1:{
        ingresar3();
        break;
    }
    case 2:{
        buscar3();
        break;
    }
    case 3:{
        ordenar3();
        break;
    }
} 

}
while(opcion3!=4);
}

void ingresar3()
{
 	int otra3;
    int suma3=0;

        do
        {
            cout << "Ingresa el DPI la persona:" << i3<< endl;
            cin >> dpi3[i3];
            cout << "Ingresa el nombre: " << i3 << endl;
            cin >> nombre3[i3];
            cout << "Ingresa el valor del Boleto de Ornato: " << i3 << endl;
            cin >> boleto[i3];
            suma3 = suma3 + boleto[i3];
            cout << "Suma: " << suma3 << endl;
            i3= i3 + 1;
            n3 = i3;
            cout << "Deseas ingresar otra persona? " << endl;
            cin >> otra3;
        }
        while (otra3!=0);
        system ("cls");
        gotoxy(25,1);
        cout << "            Registro de datos " << endl;  
        gotoxy(15,3);
        cout << "DPI " << endl; 
        gotoxy(25,3);
        cout << "NOMBRE: " << endl;
        gotoxy(50,3);
        cout << "VALOR DE BOLETO" << endl;
        for (int i3=0; i3<n3; i3++)
        {
            gotoxy(15,4+i3);
            cout << dpi3[i3]<< endl;
             gotoxy(25,4+i3);
            cout << nombre3[i3]<< endl;
            gotoxy(50,4+i3);
            cout << boleto[i3] << endl;
        }
        gotoxy(10,4+i3+1);
        cout << "           La suma de los montos cobrados es: " << suma3<<endl;
          cout<<"\n\n";
}

void buscar3()
{
    
	int BuscarEnArreglo3(const int arreglo3[], int busqueda3, int longitud3);
	
	int busqueda3;
	int i3=0;
	
 
 	cout << "\nIngresa el DPI de la persona: ";
 	cin >> busqueda3;

	int longitud3 = sizeof dpi3 / sizeof dpi3[0];
	int existe3 = BuscarEnArreglo3(dpi3, busqueda3, longitud3);

	if (existe3==-1)
	{
	cout << "\nNo existe" << endl;
	}
	else
	{
	printf ("\nLa posicion de el DPI %d en el arreglo es %d \n",busqueda3, existe3);
	cout << "NOMBRE:" << nombre3[existe3] << endl;	
	cout << "VALOR DEL BOLETO:" << boleto[existe3] << endl;	
	}
	
	
	}

	int BuscarEnArreglo3(const int arreglo3[], int busqueda3, int longitud3)
	{

	for (int x3=0; x3<longitud3; x3++)
	{
    if (arreglo3[x3] == busqueda3)
    return x3;
	}

	return -1;
	}

void ordenar3()
{
    string aux23;
    int aux33, aux34;

    
	n3=i3;
 
 	for (i3=1; i3<n3; i3++)
 	{
    	j3=i3;
    	aux33=dpi3[i3];
    	aux23 = nombre3[i3];
    	aux34 = boleto[i3];
     
     	while (j3>0 && aux33<dpi3[j3-1])
    	 {
        dpi3[j3]= dpi3[j3-1];
        nombre3[j3]= nombre3[j3-1];
        boleto[j3]= boleto[j3-1];
        j3= j3-1;
    }
  	dpi3[j3]=aux33;
  	nombre3[j3] = aux23;
  	boleto[j3] = aux34;
  
 }
 
 	printf ("\n Los elementos ordenados del arreglo son: \n");
 
 	for (i3=0; i3<n3; i3++)
 	{
     printf ("Elemento [%d]: %d\n", i3, dpi3[i3]);
     cout << "NOMBRE: " << nombre3[i3] << endl;
     cout << "VALOR DEL BOLETO: " << boleto[i3] << endl;
 	}
   
}