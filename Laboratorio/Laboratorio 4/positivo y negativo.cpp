#include <iostream>

using namespace std;

main ()
{
	int a;
	
	cout<<"Ingresar numero: "; cin>>a;
	
	if (a==0){
		cout<<"El numero es cero";}
	else
	if (a>0){
		cout<<"El numero es positivo";
	} else{
	cout<<"El numero es negativo";}
	
	return 0;
}
