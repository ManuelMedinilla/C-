#include <stdio.h>  
#include <windows.h>  
#include <iostream>

using namespace std;
void menufinal();
void ingresaredad();
void buscaredad();
void ordenaredad();
void ingresarciudadanos();
void buscarciudadanos();
void ordenarciudadanos();
void ingresarboleto();
void buscarboleto();
void ordenarboleto();
int edades[5];
string nombre[5];
int i, j, n;
int edades2[5],dpi[5];
string nombre2[5],lugar[5];
int i2, j2, n2;
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
menufinal();
return 0;
}

void menufinal()
{
	int opcionf=0;
	do
	{
	cout << "------------------------------------------------------------------------------------------------------" << endl;
	cout <<"TAREA 4 - Manuel Medinilla 0901-22-1310 \n";
	cout << "------------------------------------------------------------------------------------------------------" << endl;
	cout <<"Programa completo con arreglos (EDADES)" << endl;
	cout <<"1. Ingreso de Edades\n";
	cout <<"2. Buscar Edades\n";
	cout <<"3. Ordenar Edades\n";
	cout << "------------------------------------------------------------------------------------------------------" << endl;
	cout <<"Programa de registro de ciudadanos (RENAP)" << endl;
	cout <<"4. Ingreso de Ciudadanos\n";
	cout <<"5. Buscar Ciudadanos\n";
	cout <<"6. Ordenar Ciudadanos\n";
	cout << "------------------------------------------------------------------------------------------------------" << endl;
	cout <<"Programa de Venta de boleto de ornato" << endl;
	cout <<"7. Venta de Boleta de Ornato\n";
	cout <<"8. Buscar Boleta de Ornato\n";
	cout <<"9. Ordenar Boleta de Ornato\n";
	cout <<"10. Salir\n";
	cout << "------------------------------------------------------------------------------------------------------" << endl;
	cin >> opcionf;
	switch(opcionf)
	{
	
	case 1:
	{
		ingresaredad();
		break;
	}
	case 2:
	{
		buscaredad();
		break;
    }
	case 3:
	{
	     ordenaredad();
	    break;
	}

	
	case 4:
	{
		ingresarciudadanos();
		break;
	}
	case 5:
	{
		buscarciudadanos();
		break;
	}
	case 6:
	{
		ordenarciudadanos();
		break;
	}
	case 7:
	{
		ingresarboleto();
		break;
	}
	case 8:
	{
		buscarboleto();
		break;
	}
	case 9:
	{
		ordenarboleto();
		break;
	}

} 

}
while(opcionf!=10);
}

void ingresaredad()
{
	 cout <<"Este es el programa que permite ingresar los datos.\n";

 	int otra;
    int suma=0;

        do
        {
            cout << "Ingresa la edad:" << i<< endl;
            cin >> edades[i];
            suma = suma + edades[i];
            cout << "Suma: " << suma << endl;
            cout << "Ingresa el nombre: " << i<< endl;
            cin >> nombre[i];
            i= i + 1;
            n = i;
            cout << "Deseas ingresar otra persona? " << endl;
            cin >> otra;
        }
        while (otra!=0);
        system ("cls");
        gotoxy(25,1);
        cout << "            Registro de datos " << endl;  
        gotoxy(15,3);
        cout << "EDAD " << endl; 
        gotoxy(25,3);
        cout << "NOMBRE " << endl;
        gotoxy(50,3);
        cout << "ANO DE NACIMIENTO" << endl;
        for (int i=0; i<n; i++)
        {
            gotoxy(15,4+i);
            cout << edades[i]<< endl;
             gotoxy(25,4+i);
            cout << nombre[i]<< endl;
            gotoxy(50,4+i);
            cout << 2023-edades[i] << endl;
        }
        gotoxy(10,4+i+1);
        cout << "           La suma de las edades es: " << suma<<endl;
          cout<<"\n\n";
}


void buscaredad()
{
    cout <<"Este es el programa para buscar en el arreglo.\n";
    
	int BuscarEnArreglo(const int arreglo[], int busqueda, int longitud);
	
	int busqueda;
	int i=0;
	
 
 	cout << "\nIngresa la edad buscada: ";
 	cin >> busqueda;

	int longitud = sizeof edades / sizeof edades[0];
	int existe = BuscarEnArreglo(edades, busqueda, longitud);

	if (existe==-1)
   {
   cout << "\nNo existe" << endl;	
   }

	else
	{
	printf ("\nLa posicion de de la edad %d en el arreglo es %d \n",busqueda, existe);
	cout << "NOMBRE:" << nombre[existe] << endl;
	}
	
	
	}

	int BuscarEnArreglo(const int arreglo[], int busqueda, int longitud)
	{

	for (int x=0; x<longitud; x++)
	{
    if (arreglo[x] == busqueda)
    return x;
	}

	return -1;
	}
	

void ordenaredad()
{
cout <<"Este es el programa que ordena los valores del arreglo.\n";
    string aux2;
    int aux;

    
	n=i;
 
 	for (i=1; i<n; i++)
 	{
    	j=i;
    	aux=edades[i];
    	aux2 = nombre[i];
     
     	while (j>0 && aux<edades[j-1])
    	 {
        edades[j]= edades[j-1];
        nombre[j]= nombre[j-1];
        j= j-1;
    }
  	edades[j]=aux;
  	nombre[j] = aux2;
  
 }
 
 	printf ("\n Los elementos ordenados del arreglo son: \n");
 
 	for (i=0; i<n; i++)
 	{
     printf ("Elemento [%d]: %d\n", i, edades[i]);
     cout << "NOMBRE: " << nombre[i] << endl;
 	}	
}
void ingresarciudadanos() {
	cout <<"Ingresar los datos de los ciudadanos.\n";

 	int otra2;
    int suma2=0;

        do
        {
        	cout << "Ingresa el nombre del ciudadano: " << i2<< endl;
            cin >> nombre2[i2];
            cout << "Ingresa la edad: " << i2<< endl;
            cin >> edades2[i2];
            cout << "Ingresa el DPI del ciudadano: " << i2<< endl;
            cin >> dpi[i2];
            cout << "Ingresa el lugar de nacimiento del ciudadano: " << i2<< endl;
            cin >> lugar[i2];
            suma2 = suma2 + edades2[i2];
            i2= i2 + 1;
            n2 = i2;
            cout << "Deseas ingresar otro ciudadano? " << endl;
            cin >> otra2;
        }
        while (otra2!=0);
        system ("cls");
        gotoxy(25,1);
        cout << "            Registro de datos del ciudadano " << endl;  
        gotoxy(15,3);
        cout << "NOMBRE " << endl; 
        gotoxy(35,3);
        cout << "EDAD " << endl;
        gotoxy(50,3);
        cout << "ANO DE NACIMIENTO" << endl;
        gotoxy(75,3);
        cout << "DPI" << endl;
        gotoxy(100,3);
        cout << "LUGAR DE NACIMIENTO" << endl;
        
        for (int i2=0; i2<n2; i2++)
        {
            gotoxy(15,4+i2);
            cout << nombre2[i2]<< endl;
            gotoxy(35,4+i2);
            cout << edades2[i2]<< endl;
            gotoxy(50,4+i2);
            cout << 2023-edades2[i2] << endl;
            gotoxy(75,4+i2);
            cout << dpi[i2] << endl;
            gotoxy(100,4+i2);
            cout << lugar[i2] << endl;
        }	
}   


 
void buscarciudadanos()
{
    
	int BuscarEnArreglo2(const int arreglo2[], int busqueda2, int longitud2);
	
	int busqueda2; 
	int i2=0;
	
 
 	cout << "\nIngresa el DPI de la persona que desea buscar: ";
 	cin >> busqueda2;

	int longitud2 = sizeof dpi / sizeof dpi[0];
	int existe2 = BuscarEnArreglo2(dpi, busqueda2, longitud2);
	
	if (existe2==-1)
	{
	cout << "\nNo existe" << endl;	
	}
	
	else
	{
	cout << "------------------------------------------------------------------------------------------------------" << endl;
	printf ("\nLa posicion de del DPI %d en el arreglo es %d \n",busqueda2, existe2);
	cout << "NOMBRE:" << nombre2[existe2] << endl;
	cout << "EDAD:" << edades2[existe2] << endl;
	cout << "LUGAR DE NACIMIENTO:" << lugar[existe2] << endl;
	cout << "------------------------------------------------------------------------------------------------------" << endl;	
	}
	
	
	}

	int BuscarEnArreglo2(const int arreglo2[], int busqueda2, int longitud2)
	{

	for (int x2=0; x2<longitud2; x2++)
	{
    if (arreglo2[x2] == busqueda2)
    return x2;
	}

	return -1;
	}

void ordenarciudadanos()
{
	cout <<"Este es el programa que ordena los valores del arreglo.\n";
    string aux21, aux4;
    int aux0, aux3;

    
	n2=i2;
 
 	for (i2=1; i2<n2; i2++)
 	{
    	j2=i2;
    	aux0=edades2[i2];
    	aux21 = nombre2[i2];
    	aux3 = dpi[i2];
    	aux4 = lugar[i2];
     
     	while (j2>0 && aux3<dpi[j2-1])
    {
        edades2[j2]= edades2[j2-1];
        nombre2[j2]= nombre2[j2-1];
        dpi[j2]= dpi[j2-1];
        lugar[j2]= lugar[j2-1];
        j2= j2-1;
    }
  	edades2[j2]=aux0;
  	nombre2[j2] = aux21;
  	dpi[j2] = aux3;
  	lugar[j2] = aux4;
  
 }
 
 	printf ("\n Los elementos ordenados del arreglo son: \n");
 
 	for (i2=0; i2<n2; i2++)
 	{
 	cout << "------------------------------------------------------------------------------------------------------" << endl;
     printf ("Elemento [%d]: %d\n", i2, dpi[i2]);
     cout << "NOMBRE: " << nombre2[i2] << endl;
     cout << "EDAD: " << edades2[i2] << endl;
     cout << "LUGAR DE NACIMIENTO: " << lugar[i2] << endl;
     cout << "------------------------------------------------------------------------------------------------------" << endl;
     
 	}

}
void ingresarboleto()
{
	int otra3;
    int suma3=0;

        do
        {
        	cout << "------------------------------------------------------------------------------------------------------" << endl;
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
            cout << "------------------------------------------------------------------------------------------------------" << endl;
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
void buscarboleto()
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
	cout << "------------------------------------------------------------------------------------------------------" << endl;
	printf ("\nLa posicion de el DPI %d en el arreglo es %d \n",busqueda3, existe3);
	cout << "NOMBRE:" << nombre3[existe3] << endl;	
	cout << "VALOR DEL BOLETO:" << boleto[existe3] << endl;	
	cout << "------------------------------------------------------------------------------------------------------" << endl;
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

void ordenarboleto()
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
