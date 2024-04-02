int otra;
    int suma=0;

        do
        {
            cout << "Ingresa la edad " << i<< endl;
            cin >> edades[i];
            suma = suma + edades[i];
            cout << "Suma: " << suma << endl;
            i= i + 1;
            n = i;
            cout << "Deseas ingresar otra edad? " << endl;
            cin >> otra;
        }
        while (otra!=0);
        system ("cls");
        gotoxy(25,1);
        cout << "            Registro de datos " << endl;  
        gotoxy(14,3);
        cout << "EDAD INGRESADA" << endl; 
        gotoxy(44,3);
        cout << "ANO DE NACIMIENTO" << endl;
        for (int i=0; i<n; i++)
        {
            gotoxy(20,4+i);
            cout << edades[i]<< endl;
            gotoxy(50,4+i);
            cout << 2023-edades[i] << endl;
        }
        gotoxy(10,4+i+1);
        cout << "           La suma de las edades es: " << suma<<endl;
          cout<<"\n\n";
}

void buscar()
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
	cout << "\nno existe";
	else
	printf ("\nLa posicion de de la edad %d en el arreglo es %d \n",busqueda, existe);
	
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

void ordenar()
{
    cout <<"Este es el programa que ordena los valores del arreglo.\n";
    int aux;

    
	n=i;
 
 	for (i=1; i<n; i++)
 	{
    	j=i;
    	aux=edades[i];
     
     	while (j>0 && aux<edades[j-1])
    	 {
        edades[j]= edades[j-1];
        j= j-1;
    }
  	edades[j]=aux;
  
 }
 
 	printf ("\n Los elementos ordenados del arreglo son: \n");
 
 	for (i=0; i<n; i++)
 	{
     printf ("Elemento [%d]: %d\n", i, edades[i]);
 	}
   
}