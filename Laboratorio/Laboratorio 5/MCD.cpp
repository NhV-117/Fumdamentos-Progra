#include <iostream>

using namespace std;

main ()
{
	int num1, num2, residuo;
	
	cout<<"\t Calculo del MCD de dos numeros\n" << endl;
	
	cout<<"Digite el primer numero: ";
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	
	do
	{
		residuo = num1 % num2;
		
		if (residuo !=0){
			num1 = num2;
			num2 = residuo;			
		}
	}while(residuo!=0);
	
	cout<<endl;
	cout<<"El MCD es: " << num2 << endl;	
	return 0;
}
