#include <iostream>

using namespace std;

main ()
{
	int a;
	
	cout<<"Ingrese el año a comprobar: ";
	cin>>a;
	
	if (a%400==0)
	{
		cout<<"Es Bisiesto";
	}else
		if ((a%4==0)&&(a%100!=0)){
			cout<<"Es Bisiesto" << endl;
		}else
			cout<<"No es Bisiesto" << endl;
	
	return 0;
}
