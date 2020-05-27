#include <iostream>
#include <string.h>

using namespace std;

main ()
{
	char palabra[10];
	
	cout<<"Ingresar palabra de 10 caracteres: ";
	cin.getline(palabra,10);
	
	
	if ((palabra[0]) == (palabra[10]))
	{
		cout<<"La primera letra y la ultima son iguales";
	}else{
	
	cout<<"No son iguales";}
	
	return 0;
}
