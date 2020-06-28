#include <iostream>

using namespace std;

//Declaracion
void calculo ();
void comparacion ();

int promedio2;
float altura[100];
int mayor, menor, aux=0, aux2=0;

int main ()
{
	calculo ();
	comparacion ();
	
		
	return 0;
}

void calculo ()
{
	float promedio;
	int arriba, abajo;
	
	for (int i=1;i<=25;i++)
	{
		cout<<"Ingrese la altura del alumno "<< i << ": ";
		cin>>altura[i];
	}
	
	for (int i=1;i<=25;i++)
	{
		promedio = (promedio + altura[i]);
		promedio2 = promedio /25;
	}
	
	cout.precision(3);
	cout<<"\nLa media es: "<< promedio2;
}

void comparacion ()
{
		for (int i=1;i<=25;i++)
	{
		if (altura[i]>=promedio2)
		{
			mayor=1;
			aux += mayor;
		}else
		{
			menor=1;
			aux2 +=menor;
		}
	}
	
	cout<<"\nLos alumnos arriba de la media son: "<< aux;
	cout<<"\nLos alumnos abajo de la media son: "<< aux2;
}
