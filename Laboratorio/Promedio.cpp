//Promedio de tres cantidades a ingresar
#include <iostream>

using namespace std;

   int main ()
{
	int a, b, c, p;
	
	cout<<"Ingresar primera cantidad"; cin>>a;
	cout<<"Ingresar segunda cantidad"; cin>>b;
	cout<<"Ingresar tercera cantidad"; cin>>c;
	
	p = (a+b+c)/3;
	cout<<"El promedio es: "; cout<<p;
	
	return 0;
		
}
