#include <iostream>

using namespace std;

int main ()
{
	int n, m, suma[100], i=0;
	int num[100], num2[100];
	
	cout<<"Ingrese el tamaño del vector: ";
	cin>>n;
	cout<<endl;
	
	for (int i=0;i<n;i++)
	{
		cout<<"Ingrese los numeros de la posicion " << i <<" del primer vector: ";
		cin>>num[i];
	}
	
	cout<< endl;
	for (int i=0;i<n;i++)
	{
		cout<<"Ingrese los numeros de la posicion "<< i <<" del segundo vector: ";
		cin>>num2[i];
	}
	
	for (int i=0;i<n;i++)
	{
		suma[i] = num[i] + num2[i];
	}	
	
	cout<<endl;
	for (int i=0;i<n;i++)
	{
	cout<<"La suma de la posicion "<< i << " del vector "<< num[i] <<" con " <<num2[i]<<
	" es: "<< suma[i] << endl;
	}
	
	return 0;
}
