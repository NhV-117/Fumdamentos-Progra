#include <iostream>

using namespace std;

main ()
{
	int a, b;
	
	cout<<"Ingresar primer numero: "; cin>>a;
	cout<<"Ingresar segunda cantidad: "; cin>>b;
	
	if (a%b==0)
	{
		cout<<"Los numeros son divisibles";
	}else
	
	cout<< endl;
	cout<<"Los numeros no son divisibles";
	
	return 0;
}
