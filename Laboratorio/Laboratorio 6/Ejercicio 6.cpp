#include <iostream>

using namespace std;

int main()
{
	int n, num[100], x, contador=0;
	
	cout<<"Ingrese el tamaño del arreglo: ";
	cin>>n;
	
	cout<<endl;
	for (int i=0;i<n;i++)
	{
		cout<<"Ingrese el numero: "; cin>>num[i];
		
	}
	
	cout<<"\nIngrese el numero a buscar: "; cin>>x;
	
	for (int i=0;i<n;i++)
	{
		if (x==num[i])
		{
			contador++;
		}
	}
	
	cout<<"\nEl numero " << x <<" se repite "<< contador << " veces";
	
	return 0;
}
