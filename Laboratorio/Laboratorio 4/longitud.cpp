#include <iostream>
#include <string.h>

using namespace std;

main ()
{
	char palabra [200] ;
	int longitud=0;
	
	cout<<"Ingrese la palabra: ";
	cin.getline(palabra,200);
	
	longitud = strlen(palabra);	
	
	if (longitud>10){
		if (longitud%2==0){
			cout<<"La frase es mayor a diez caracteres y son pares" << endl;
			
		}else
			cout<<"La frase es mayor a diez caracteres pero no es par"<< endl;
			
	}else
	cout<<"La frase es menor a diez caracteres" << endl;
	cout<<"Longitud de la frase: " << longitud << endl;
	return 0;
}
