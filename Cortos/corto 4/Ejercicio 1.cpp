#include <iostream>
#include <string>

using namespace std;

//Declaracion
void operacion ();

int main ()
{
	operacion ();
	
	return 0;
}

void operacion ()
{
	string frase;
	
	cout<<"Ingrese la frase: ";
	getline(cin,frase);
	
	for (int i=0;i<frase.size();i++)
	{
		if (frase[i]=='m'||frase[i]=='M')
		{
			frase[i]='0';
		}
		if (frase[i]=='u'||frase[i]=='U'){
			frase[i]='1';
		}
		if (frase[i]=='r'||frase[i]=='R'){
			frase[i]='2';
		}
		if (frase[i]=='c'||frase[i]=='C'){
			frase[i]='3';
		}
		if (frase[i]=='i'||frase[i]=='I'){
			frase[i]='4';
		}
		if (frase[i]=='e'||frase[i]=='E'){
			frase[i]='5';
		}
		if (frase[i]=='l'||frase[i]=='L'){
			frase[i]='6';
		}
		if (frase[i]=='a'||frase[i]=='A'){
			frase[i]='7';
		}
		if (frase[i]=='g'||frase[i]=='G'){
			frase[i]='8';
		}
		if (frase[i]=='o'||frase[i]=='O'){
			frase[i]='9';
		}
	}
	
	cout<<"\nLa frase con la clave es: ";
	cout<<frase;
}
