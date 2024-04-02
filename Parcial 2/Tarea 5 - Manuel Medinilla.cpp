#include "iostream"
#include "stdio.h"
#include "string"
#include "windows.h"
using namespace std;


 void gotoxy(int x,int y)

{  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  


void menu();
void Evaluaciones();
void Planilla();


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
    cout <<"              TAREA 5 - MANUEL MEDINILLA\n";
    cout <<"1. Control de las evaluaciones\n";
    cout <<"2. Planilla de los trabajadores\n";
    cout <<"3. Salir\n";
    cin >> opcion;
    switch(opcion)
    {
        case 1:{
        Evaluaciones();
        break;
    }
    case 2:{
        Planilla();
        break;
    }
} 

}
while(opcion!=3);
}

void Evaluaciones()
{
    cout <<"Este es el programa del Evaluaciones de estudiantes\n";
    
    
    int evaluaciones[5][5];
	double promedio1 = 0,promedio2 = 0, promedio3 = 0, promedio4 = 0, promedio5 = 0;
	int PParcial=0, SParcial=0, EFinal=0, zona=0, NFinal=0;
	int suma1 = 0, suma2 = 0, suma3 = 0, suma4 = 0, suma5 = 0; 
    cout << "Por favor ingrese la siguiente informacion: \n";
    int carne;
    for(int i = 0; i < 5; i++)
    {
        cout << "\nResultados " << i + 1 << endl;
        cout << "Carne ";
        cin>>carne;
        cout << "Primer Parcial: " << endl;
        cin>>PParcial;
        cout << "Segundo Parcial: "<< endl;;
        cin>>SParcial;
        cout << "Evaluacion final: "<< endl;;
        cin>>EFinal;
        cout << "Zona/actividades: "<< endl;;
        cin>>zona;    

        evaluaciones[i][0] = carne;
       evaluaciones[i][1] = PParcial;
       evaluaciones[i][2] = SParcial;
       evaluaciones[i][3] = EFinal;
         evaluaciones[i][4] = zona;
      cout <<evaluaciones[i][1]+evaluaciones[i][2]+evaluaciones[i][3]+evaluaciones[i][4];
    }
    
   system("cls");
    int filas = (sizeof(evaluaciones)/sizeof(evaluaciones[0]));
    int columnas = (sizeof(evaluaciones[0])/sizeof(evaluaciones[0][0]));
    
    cout<<"\n                   DATOS INGRESADOS: \n";
    gotoxy (12,3);
    cout<<"Carne";
    gotoxy (20,3);
    cout<<"Primer Parcial";
    gotoxy (35,3);
    cout<<"Segundo Parcial";
    gotoxy (50,3);
    cout<<"Evaluacion Final";
     gotoxy (65,3);
    cout<<"Zona";
       gotoxy (75,3);
    cout<<"Nota final";
    
    
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
        	 gotoxy (12,i+5);
            cout<<evaluaciones[i][0];
            gotoxy (20,i+5);
            cout<<evaluaciones[i][1];
            gotoxy (35,i+5);
            cout<<evaluaciones[i][2];
          gotoxy (50,i+5);
            cout<<evaluaciones[i][3];
            gotoxy (65,i+5);
            cout<<evaluaciones[i][4];
        gotoxy (75,i+5);
            cout<<evaluaciones[i][1]+evaluaciones[i][2]+evaluaciones[i][3]+evaluaciones[i][4];
        }
      suma1 = suma1 + PParcial;
      suma2 = suma2 + SParcial;
      suma3 = suma3 + EFinal;
      suma4 = suma4 + zona;
	  suma5 = suma5 + (evaluaciones[i][1]+evaluaciones[i][2]+evaluaciones[i][3]+evaluaciones[i][4]);
	   
    }
    
    promedio1 = suma1 / filas;
    
  gotoxy (25,11);
      cout<<"El promedio de Primer Parcial es: "<<promedio1;  
     promedio2 = suma2 / filas;
	  gotoxy (25,12);
      cout<<"El promedio de Segundo Parcial es: "<<promedio2;
	   promedio3 = suma3 / filas;
	    gotoxy (25,13);
      cout<<"El promedio de Evaluacion final es: "<<promedio3;  
      promedio4 = suma4 / filas;
	  gotoxy (25,14);
      cout<<"El promedio de zona es: "<<promedio4;  
      promedio5 = suma5 / filas;
		gotoxy (25,15);
      	cout<<"El promedio de Nota final es: "<<promedio5<<endl<<endl; 

}

void Planilla()
{
    cout <<"Este es el programa de Planilla de trabajadores\n";
    
    
    int Planillas[5][5];
	double promedio1 = 0, igss=0, salTotal=0, suma=0;
	int SalarioPH=0, CHoras=0, Boni= 0,otro;
	int suma1 = 0;
	int i= 0;
    int n = 0;
	
		
		
    cout << "Ingrese los datos del trabajador: \n";
    int identi;
	do
    {
        cout << "\nResultados " << i + 1 << endl;
        cout << "Identificacion ";
        cin>>identi;
        cout << "Salario por hora ";
        cin>>SalarioPH;
   		cout << "Cantidad de horas trabajadas ";
        cin>>CHoras;
        cout << "Bonificacion ";
        cin>>Boni; 
        cout << "Desea ingresar otro trabajador [{si=1}{no=0}] ";
        cin>>otro;    

        Planillas[i][0] = identi;
    	Planillas[i][1] = SalarioPH;
        Planillas[i][2] = CHoras;
        Planillas[i][3] = Boni;
        
        
        
    
     
     	i= i + 1;
			n = i;
    }while (otro!=0);
    cout << "Gracias por utilizar este programa"<<endl<<endl;
    
   system("cls");
    int filas = (sizeof(Planillas)/sizeof(Planillas[0]));
    int columnas = (sizeof(Planillas[0])/sizeof(Planillas[0][0]));
    
    cout<<"\n                   Los datos ingresados son: \n";
    gotoxy (8,3);
    cout<<"Identificacion";
    gotoxy (25,3);
    cout<<"Salario por Hora";
    gotoxy (43,3);
    cout<<"Cantidad de Horas";
    gotoxy (68,3);
    cout<<"Bonificacion";
     gotoxy (86,3);
    cout<<"Total de salario";
     
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
        	 gotoxy (8,i+5);
            cout<<Planillas[i][0];
            gotoxy (25,i+5);
            cout<<Planillas[i][1];
            gotoxy (43,i+5);
            cout<<Planillas[i][2];
          gotoxy (68,i+5);
            cout<<Planillas[i][3];
            gotoxy (86,i+5);
            cout <<salTotal;
            
            igss = 0.0483*(Planillas[i][1]*Planillas[i][2]);
        	 salTotal = (((Planillas[i][1] * Planillas[i][2])-igss)+Planillas[i][3]);
		}
      suma1 = suma1 + CHoras;
       suma = suma + salTotal;
  }
    
    
    promedio1 = suma1 / n;
  gotoxy (25,i+11);
      cout<<"El promedio las horas es: "<<promedio1<<endl<<endl;  
     
      gotoxy (25,i+12);
       cout<<"La suma del salario a recibir es: "<<suma<<endl;
      
}


