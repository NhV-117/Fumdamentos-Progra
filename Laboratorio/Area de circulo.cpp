#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	float p = 3.1416;
	float radio, d, t;
	
	
	cout<< "Introduzca radio: "; cin>>t;
	
	radio= (p * pow(t, 2)); 
	d = (2 * p * t);
	
	cout.precision(4);
	cout<<  "El area del circulo es: "; cout<<radio <<endl;
	cout<< "El perimetro del circulo es: "; cout<<d;
	
	return 0;
}

