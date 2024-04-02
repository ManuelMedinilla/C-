#include <stdio.h>  
#include <windows.h>
#include <iostream>

using namespace std;
void menu();
void calificaciones();
void buscarcali();
void ordenarcali();
void planillas();
void buscarplani();
void ordenarplani();
int evaluaciones [5][5];
int i, j, n;
int notaf=0;
int planilla [5][5];
float sf, ig;
int i2;


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
    cout << "------------------------------------------------------------------------------------------------------" << endl;
    cout <<"\nTAREA 6 - MANUEL MEDINILLA\n";
    cout <<"1. Control de las evaluaciones\n";
    cout <<"2. Buscar Calificaciones\n";
    cout <<"3. Ordenar Calificaciones\n";
    cout <<"4. Planilla de los trabajadores\n";
    cout <<"5. Buscar en planilla\n";
    cout <<"6. Ordenar en planilla\n";
    cout <<"7. Salir\n";
    cin >> opcion;
    cout << "------------------------------------------------------------------------------------------------------" << endl;
    
    switch(opcion)
    {
        case 1:{
        calificaciones();
        break;
    }
    case 2:{
        buscarcali();
        break;
    }
    case 3:{
        ordenarcali();
        break;
    }
    case 4:{
        planillas();
        break;
    }
    case 5:{
        buscarplani();
        break;
    }
    case 6:{
        ordenarplani();
        break;
    }
} 

}
while(opcion!=7);
}

void calificaciones()
{
    
    
  	int suma=0,suma1=0,suma2=0,suma3=0,suma4=0;
	float pr,pr2,pr3,pr4,pr5; 
	int c,p1,p2,f,z,otra;
	int n=0;
	do
	{
		cout <<"PROGRAMA DE NOTAS FINALES\n" <<i+1;
		cout <<" Ingrese el carne del estudiante:\n ";
		cin >> c;
		cout <<"Nota del Primer parcial:\n ";
		cin >>p1;
		cout <<"Nota del Segundo parcial:\n ";
		cin >>p2;
		cout <<"Nota del Examen final:\n ";
		cin >>f;
		cout <<"Ingrese la nota de las actividades:\n ";
		cin >>z;
		cout<<"Desea ingresar a otro estudiante?\n ";
	 	cin>>otra;
		cout <<endl;
		evaluaciones[i][0]=c;
		evaluaciones[i][1]=p1;
		evaluaciones[i][2]=p2;
		evaluaciones[i][3]=f;
		evaluaciones[i][4]=z;
		i=i+1;
		j=i;
		n=n+1;
		
	}
	while(otra!=0);
	int filas= (sizeof(evaluaciones)/sizeof(evaluaciones[0]));
	int columnas= (sizeof(evaluaciones[0])/sizeof(evaluaciones[0][0]));
	system("cls");
	cout<<"DATOS INGRESADOS: "<<endl;
	gotoxy(1,4);
	cout<<"CARNE";
	gotoxy(16,4);
	cout<<"PRIMER PARCIAL";
	gotoxy(36,4);
	cout<<"SEGUNDO PARCIAL";
	gotoxy(56,4);
	cout<<"EVALLUACION FINAL";
	gotoxy(76,4);
	cout<<"ACTIVIDADES";
	gotoxy(96,4);
	cout<<"NOTA FINAL";
	for (int i=0; i<j; i=i+1)
	{
		for (int j=0; j<columnas; j=j+1)
		{
			gotoxy(1,i+5);
			cout<<evaluaciones[i][0]<<endl;
			gotoxy(16,i+5);
			cout<<evaluaciones[i][1]<<endl;
			gotoxy(36,i+5);
			cout<<evaluaciones[i][2]<<endl;
			gotoxy(56,i+5);
			cout<<evaluaciones[i][3]<<endl;
			gotoxy(76,i+5);
			cout<<evaluaciones[i][4]<<endl;
			gotoxy(96,i+5);
			notaf=evaluaciones[i][1]+evaluaciones[i][2]+evaluaciones[i][3]+evaluaciones[i][4];
			cout<<notaf<<endl;
		}
	suma=suma+notaf;	
	suma1=suma1+evaluaciones[i][1];
	suma2=suma2+evaluaciones[i][2];
	suma3=suma3+evaluaciones[i][3];
	suma4=suma4+evaluaciones[i][4];
	pr=suma1/n;
	pr2=suma2/n;
	pr3=suma3/n;
	pr4=suma4/n;
	pr5=suma/n;
	}
	gotoxy(40,11);
	cout<<"LOS PROMEDIOS DE LAS NOTAS SON: "<<endl;
	gotoxy(16,13);
	cout<<"PRIMER PARCIAL";
	gotoxy(16,14);
	cout<<pr;
	gotoxy(36,13);
	cout<<"SEGUNDO PARCIAL";
	gotoxy(36,14);
	cout<<pr2;
	gotoxy(56,13);
	cout<<"EVALUACION FINAL";
	gotoxy(56,14);
	cout<<pr3;
	gotoxy(76,13);
	cout<<"ACTIVIDADES";
	gotoxy(76,14);
	cout<<pr4;
	gotoxy(96,13);
	cout<<"NOTA FINAL";
	gotoxy(96,14);
	 cout<<pr5<<endl;

}

void buscarcali()
{
	bool encontrado;
	int filas=(sizeof(evaluaciones)/sizeof (evaluaciones[0]));
	
	int busqueda;
	cout <<"Ingrese el carnet del estudiante a buscar:";
	cin>> busqueda;
	cout<<endl;
		for(i=0; i<filas; i++)
		{
			if (evaluaciones[i][0]==busqueda)
			{
				cout<<"Carne del estudiante:\n "<<i<<endl;
				cout<<"Carne:\n "<<evaluaciones[i][0]<<endl;
				cout<<"Nota del Primer parcial:\n "<<evaluaciones[i][1]<<endl;
				cout<<"Nota del Segundo parcial:\n "<<evaluaciones[i][2]<<endl;
				cout<<"Nota del Examen final:\n "<<evaluaciones[i][3]<<endl;
				cout<<"Zona:\n "<<evaluaciones[i][4]<<endl;
				notaf=evaluaciones[i][1]+evaluaciones[i][2]+evaluaciones[i][3]+evaluaciones[i][4];
				cout<<"Nota final:\n "<<notaf<<endl;
				encontrado=true;
			}
		}
		if(!encontrado)
		{
			cout<<"El dato existe\n "<<endl;
		}
  

}
    


void ordenarcali()
{
     int aux;
       int aux2,aux3,aux4,aux5;
       n=i;
 		
     for (i=1; i<n; i++)
     {
         j=i;
        aux=evaluaciones[i][0];
        aux=evaluaciones[i][1];
    	aux=evaluaciones[i][2];
        aux=evaluaciones[i][3];
        aux=evaluaciones[i][4];
         while (j>0 && aux<evaluaciones[j-1][0])
         {
             evaluaciones[j][0]=evaluaciones[j-1][0];
             evaluaciones[j][1]=evaluaciones[j-1][1];
             evaluaciones[j][2]=evaluaciones[j-1][2];
             evaluaciones[j][3]=evaluaciones[j-1][3];
             evaluaciones[j][4]=evaluaciones[j-1][4];
             j= j-1;
        }
      evaluaciones[j][0]=aux;
      evaluaciones[j][1]=aux;
      evaluaciones[j][2]=aux;
      evaluaciones[j][3]=aux;
      evaluaciones[j][4]=aux;
     }
     system("cls");
     printf ("\n Los elementos ordenados son: \n");
	gotoxy(1,4);
	cout<<"CARNE";
	gotoxy(16,4);
	cout<<"PRIMER PARCIAL";
	gotoxy(36,4);
	cout<<"SEGUNDO PARCIAL";
	gotoxy(56,4);
	cout<<"EVALLUACION FINAL";
	gotoxy(76,4);
	cout<<"ZONA/ACTIVIDADES";
	gotoxy(96,4);
	cout<<"NOTA FINAL";
     for (i=0; i<n; i++)
     {
	gotoxy(1,i+5);
	cout<<evaluaciones[i][0]<<endl;
	gotoxy(16,i+5);
	cout<<evaluaciones[i][1]<<endl;
	gotoxy(36,i+5);
	cout<<evaluaciones[i][2]<<endl;
	gotoxy(56,i+5);
	cout<<evaluaciones[i][3]<<endl;
	gotoxy(76,i+5);
	cout<<evaluaciones[i][4]<<endl;
	gotoxy(96,i+5);
	notaf=evaluaciones[i][1]+evaluaciones[i][2]+evaluaciones[i][3]+evaluaciones[i][4];
	cout<<notaf<<endl;
	
   
}
}

void planillas(){
		int id, h, otra, m, n;
	float s, b, sm;
	
	 
	do 
	 {	
	 	cout <<"Salarios a calcular\n " <<i2+1;
	 	cout <<endl <<"Ingrese la identificacion del Empleado\n: ";
	 	cin>>id;
	 	cout<<"Ingrese el salario por hora: Q\n";
	 	cin>>s;
	 	cout<<"Ingrese la cantidad de horas trabajadas:\n ";
	 	cin>>h;
	 	cout<<"Ingrese la bonificacion a recibir: Q\n";
	 	cin>>b;
	 	cout<<"Desea ingresar a otro empleado? \n";
	 	cin>>otra;
	 	cout <<endl;
	 	ig=(s*h)*0.0483;
	 	planilla[i2][0]=id;
	 	planilla[i2][1]=s;
	 	planilla[i2][2]=h;
	 	planilla[i2][3]=b;
	 	i2=i2+1;
	 	m=i2;
	 }
	 while(otra!=0);
	int filas= (sizeof(planilla)/sizeof(planilla[0]));
	int columna= (sizeof(planilla[0])/sizeof(planilla[0][0]));
	system ("cls");
	 
	cout<<"PLANILLA: "<<endl;
	gotoxy(1,4);
	cout<<"ID";
	gotoxy(18,4);
	cout<<"SALARIO POR HORA";
	gotoxy(36,4);
	cout<<"CANTIIDAD DE HORAS TRABAJADAS";
	gotoxy(59,4);
	cout<<"BONIFICACION";
	gotoxy(76,4);
	cout<<"SALARIO A RECIBIR";

	for (int i2=0; i2<m; i2=i2+1)
	{
		for (int l=0; l<columna; l=l+1)
		{
			gotoxy(5,i2+5);
			cout<<planilla[i2][0]<<endl;
			gotoxy(22,i2+5);
			cout<<"Q."<<planilla[i2][1]<<endl;
			gotoxy(42,i2+5);
			cout<<planilla[i2][2]<<endl;
			gotoxy(63,i2+5);
			cout<<"Q."<<planilla[i2][3]<<endl;
			gotoxy(81,i2+5);
			sf=(((planilla[i2][1]*planilla[i2][2])-ig)+planilla[i2][3]);
			cout<<"Q."<<sf<<endl;
		}
	}
  }
      
	


void buscarplani(){
	
	bool encontrado;
	int filas=(sizeof(planilla)/sizeof (planilla[0]));
	
	int busqueda;
	cout <<"Ingrese el ID del empleado a buscar:\n ";
	cin>> busqueda;
	cout<<endl;
		for(i2=0; i2<filas; i2++)
		{
			if (planilla[i2][0]==busqueda)
			{
				cout<<"Identificacion:\n "<<planilla[i2][0]<<endl;
				cout<<"Salario por Hora:\n "<<planilla[i2][1]<<endl;
				cout<<"Cant. de horas trabajadas:\n "<<planilla[i2][2]<<endl;
				cout<<"Bonificacion:\n "<<planilla[i2][3]<<endl;
				sf=(((planilla[i2][1]*planilla[i2][2])-ig)+planilla[i2][3]);
				cout<<"Sueldo final:\n "<<"Q"<<sf<<endl;
				
		
				encontrado=true;
			}
		}
		if(!encontrado)
		{
			cout<<"El dato no existe.\n "<<endl;
		}
	
}

void ordenarplani(){
	
	int aux;
       float aux2,aux3, aux4;
       n=i2;
 
     for (i2=1; i2<n; i2++)
     {
         j=i2;
         aux=planilla[i2][0];
         aux2=planilla[i2][1]; 
		 aux3=planilla[i2][2];
		 aux4=planilla[i2][3];
         while (j>0 && aux<planilla[j-1][0])
         {
            planilla[j][0]=planilla[j-1][0];
            planilla[j][1]=planilla[j-1][1];
            planilla[j][2]=planilla[j-1][2];
            planilla[j][3]=planilla[j-1][3];
            j= j-1;
        }
      planilla[j][0]=aux;
      planilla[j][1]=aux2;
      planilla[j][2]=aux3;
      planilla[j][3]=aux4;
     }
     system ("cls");
     printf ("\n Los elementos ordenados son: \n");
	gotoxy(1,4);
	cout<<"ID";
	gotoxy(18,4);
	cout<<"SALARIO POR HORA";
	gotoxy(36,4);
	cout<<"CANT. DE HORAS TRABAJADAS";
	gotoxy(59,4);
	cout<<"BONIFICACION";
	gotoxy(76,4);
	cout<<"SALARIO A RECIBIR";
	
     for (i2=0; i2<n; i2++)
     {
			gotoxy(5,i2+5);
			cout<<planilla[i2][0]<<endl;
			gotoxy(22,i2+5);
			cout<<"Q"<<planilla[i2][1]<<endl;
			gotoxy(42,i2+5);
			cout<<planilla[i2][2]<<endl;
			gotoxy(63,i2+5);
			cout<<"Q"<<planilla[i2][3]<<endl;
			gotoxy(81,i2+5);
			sf=(((planilla[i2][1]*planilla[i2][2])-ig)+planilla[i2][3]);
			cout<<"Q"<<sf<<endl;
     }
	
}
