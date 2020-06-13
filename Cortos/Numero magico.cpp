#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

main ()
{
	cout<<"\tBienvenido, juegue a adivinar el numero \n" << endl;
	int num, dat, contador=5;
	
	srand (time(NULL)); //Creacion del generador :)
	dat = 1 + rand()%(100); //Generador de numero entre 1 y 100
	
	do
	{
		cout<<"Intentos: " << contador << endl;
		cout<<"Ingrese un numero: "; cin>>num;
	  
		if (num>dat)
		{
			cout<<"Ingrese un numero menor\n" << endl;
		}if(num<dat)
		{
			cout<<"Ingrese un numero mayor\n" << endl;	
		}
		contador--;

	/*Hacer cliclo mientras numero sea diferente de
		dato o los intentos sean mayores o igual a cero*/
	}while((num != dat)&&(contador >=0));
	
	cout<<endl;
	//Condicional
	if (num==dat){ 
		cout<<"Felicidades!, encontro el numero" << endl;
	}else{
		cout<<"Se acabaron los intentos" << endl;
		cout<<"El numero es: " << dat << endl;
	}
	system("pause");
	return 0;
}
