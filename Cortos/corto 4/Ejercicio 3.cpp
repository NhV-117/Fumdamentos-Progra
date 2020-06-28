#include <iostream>

using namespace std;

struct Grade{
	float nota[100][100];
}emp[100];

//Definicion de la funcion
void calculo();

int main ()
{
	calculo();
		
	return 0;
}

void calculo ()
{
	int filas, columnas=5;
	float promedio;
	
	cout<<"Ingrese la cantidad de alumnos: ";
	cin>>filas;
	

	for (int i=1;i<=filas;i++)
	{
		cout<<endl;
		for (int j=1;j<=columnas;j++)
		{
			cout<<"Ingrese la nota " << j <<" del alumno " << i<<": ";
			cin>>emp[i].nota[i][j];
		}
		
		promedio=0;
		for (int i=1;i<=filas;i++)
		{
		for (int j=1;j<=columnas;j++)
		{
			emp[i].nota[i][j] *= 0.2;
			
			promedio += emp[i].nota[i][j];
		}
		}

		if (promedio>=6)
		{
		cout<<"\nUsted ha aprobado" << endl;
		cout<<"Su nota es: " << promedio << endl;;
		}else
		{
		cout<<"\nUsted ha reprobado" << endl;
		cout<<"Su nota es: " << promedio << endl;;
		}

	}

}
