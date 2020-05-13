//Resolución de problemas de ecuacion cuadrática por fórmula general

#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	int a, b, c;
	float x, y;
	
	cout<<"Ingrese a:"; cin>>a;
	cout<<"Ingrese b:"; cin>>b;
	cout<<"Ingrese c:"; cin>>c;
	
	x= (-b + sqrt (pow(b, 2) - 4*a*c))/(2*a);
	y= (-b - sqrt (pow(b, 2) - 4*a*c))/(2*a);
	
	cout.precision(3);
	cout<<"x1="; cout<<x<<endl;
	cout<<"x2="; cout<<y;
	
	return 0;
}
