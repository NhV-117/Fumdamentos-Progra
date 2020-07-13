//Proyecto Final de Fundamentos
#include <iostream>

using namespace std;

//declaracion de las funciones
void leer();
void calculo();
void mostrar();
void costototal();

const int longCad=20;
int n; //Cantidad de diferentes articulos a comprar
int i;


//creacion de la estructura
struct costoArticulo{
	char articulo[longCad+1];
	int cantidad;
	float costounitario;
	float precio;
}art1[100];

float suma;//Variable para la suma de los totales de los productos

int main ()
{
	cout<<"\tBienvenido a la tienda El Jefazo"<< endl;
	
	cout<<"\nIndique la cantidad de articulos a comprar: ";
	cin>>n;
	
	leer();
	costototal();
	cout<<"\nRecibo:";
	mostrar();
	
	cout<<"\nEl precio total es: "<< suma;
	
	return 0;
}

void leer()
{
	//Rellenar los campos del producto a comprar
	for (int i=1;i<=n;i++)
	{
		cout<<"\nIndique el nombre del articulo "<< i<<": ";
		cin>>art1[i].articulo;
		cout<<"Ingrese la cantidad del producto a comprar: ";
		cin>>art1[i].cantidad;
		cout<<"Ingrese el precio del producto: ";
		cin>>art1[i].costounitario;
			
		art1[i].precio=art1[i].cantidad*art1[i].costounitario;
		cout<<"Total del producto: "<< art1[i].precio<< endl;
	}
}

//Funcion para la suma del precio total de los productos
void costototal()
{
	for (int i=1;i<=n;i++)
	{
		suma += art1[i].precio;
	}

}

//Funcion para mostrar el total del resultado
void mostrar()
{
	cout<<endl;
	for (int i=1;i<=n;i++){
	cout<<"Articulo "<<i<<": "<<art1[i].articulo<<"|| precio: "<<art1[i].costounitario<<"|| cantidad: "<<art1[i].cantidad<<"|| total: "<<art1[i].precio << endl;	
	}
}
