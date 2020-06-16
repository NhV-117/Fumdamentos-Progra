#include <iostream>

using namespace std;

main ()
{
	int h, m, s; // horas, minutos y segundos
	
	cout<<"Ingrese la hora: "; cin>>h;
	cout<<"Ingrese los minutos: "; cin>>m;
	cout<<"Ingrese los segundos: "; cin>>s;
	
	if ((s>=0)&&(s<=59)&&(m>=0)&&(m<=59)&&(h>=0)&&(h<=23))
	{
		s++;
		if (s==60){
			s=0;
			m++;
		}
		if (m==60){
			m=0;
			h++;
		}
		if (h==24){
			h=0, m=0, s=0;
		}
			
		cout<<endl;
		cout<<"Un segundo despues, la hora es: \n" << endl;
		
		cout<<"Horas: " << h << endl;
		cout<<"Minutos: " << m << endl;
		cout<<"Segundos: " << s << endl;
		
	}else{
		cout<<"\nLos datos ingresados son invalidos";
	}
		
	
	return 0;
}
