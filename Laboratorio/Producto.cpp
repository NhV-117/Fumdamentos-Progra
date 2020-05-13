#include <iostream>

using namespace std;

int main ()
{
    char producto[15];
    int cantidad;
    float precio, total;
	
	cout<<"Ingrese nombre del producto: "; cin>>producto;
	cout<<"Ingrese precio del producto: "; cin>>precio;
	cout<<"Ingrese cantidad a comprar del producto: "; cin>>cantidad;
	
	total = (precio * cantidad);
	cout<<"\nEl precio total a cancelar es: "; cout<<total;
	
	return 0;
}
