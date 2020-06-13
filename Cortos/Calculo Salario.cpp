#include <iostream>

using namespace std;

struct Empleado{
	int horas=0, hora_extra= 0;
}emp[100];


main ()
{
	int empleados;
	float normal=1.75, extra=2.50, salario, salario2;
	float seguro, afp, renta=0;
	
	cout<<"Ingrese numero de empleados: ";
	cin>>empleados;
	cout<< endl;
	
	for (int i=0;i<empleados;i++)
	{
		cout<<"Empleado " << i+1 << endl;
		cout<<"Ingrese horas normales trabajadas: ";
		cin>>emp[i].horas;
		cout<< "Ingrese horas extras trabajadas: ";
		cin>>emp[i].hora_extra;
		cout<<endl;
		
		salario = (emp[i].horas*normal)+(emp[i].hora_extra*extra);
		
		seguro = salario* 0.04;
		afp = salario * 0.0625;
		
		if (salario>500)
		{
		renta = salario * 0.1;
		}else 
			renta = 0;
		
		
		salario2 = (salario-seguro-afp-renta);
	
		cout.precision(4);
		cout<<"Seguro: " << seguro << endl;
		cout<<"AFP: " << afp << endl;
		cout<<"Renta: " << renta << endl;
		
		cout.precision(6);
		cout<<"Su salario total es de: " << salario << endl;
		cout<<"Su salario real es de: " << salario2 << endl << endl;
	}
	
	return 0;
}
