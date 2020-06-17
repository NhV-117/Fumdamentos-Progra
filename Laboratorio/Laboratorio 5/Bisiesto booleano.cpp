#include <iostream>

using namespace std;

int main ()
{

	bool n;
	int a;
	
	cout<<"Ingrese el año: "; cin>>a;

	n= ((a%400==0)||(a%100!=0)&&(a%4==0));
	
	cout<< endl;
	cout<< std::boolalpha;
	cout<< n;

	return 0;
}
