#include <iostream>

using namespace std;

main ()
{
	int d, m, a; //dias, meses, años
	
	cout<<"Ingrese el dia: "; cin>>d;
	cout<<"Ingrese el mes: "; cin>>m;
	cout<<"Ingrese el año: "; cin>>a;
	
	if ((a%400==0)||(a%100!=0)&&(a%4==0))
	{
		if((d>=1)&&(d<=31)&&(m>=1)&&(m<=12))
		{
			d++;  // aumento del dia por uno
			
			/* Para evitar errores al colocar 31
			en los meses que tienen 30 dias*/
			if ((d>31)&&((m==4)||(m==6)||(m==9)||(m==11))){
				cout<<"\nLa fecha ingresada es invalida";
			}else
		{
			//Evitar errores en el mes de febrero
			if (d>=31&&m==2){
				cout<<"\nLa fecha ingresada es invalido";
			}else{
			
			//Dividir los meses que tienen 30 y los que tienen 31
			if ((d==30)&&(m==2)||(d==31)&&((m==4)||(m==6)||(m==9)||(m==11))||
			(d==32)&&((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)))
			{
				d=1;      //Funcion para cambio de mes
				m++;
			}
			if ((d==32)&&(m==12)) //Funcion para año nuevo
			{
				d=1;
				m=1;
				a++;
			}
		cout<<endl;
		cout<<"El dia siguiente es: \n";
		cout<<"Dia: " << d << endl;
		cout<<"Mes: " << m << endl;
		cout<<"Año: " << a << endl;	
			}
		}
		}
			else
			{
			cout<<"\nLa fecha ingresada es invalida";
			}
	
	}

	else
	{
		if((d>=1)&&(d<=31)&&(m>=1)&&(m<=12))
		{
			d++;  // aumento del dia por uno
			
			/*Evitar errores al colocar 31 en los meses
			que tienen 30 dias*/
			if ((d>31)&&((m==4)||(m==6)||(m==9)||(m==11))){
				cout<<"\nLa fecha ingresada es invalida";
			}else{
			if (d>=30&&m==2){ //Errores al colocar dias en febrero
				cout<<"\nLa fecha ingresada es invalida";
			}else{
			
			//Dividir los meses que tiene 30 dias y los que tienen 31
			while ((d==29)&&(m==2)||(d==31)&&((m==4)||(m==6)||(m==9)||(m==11))||
			(d==32)&&((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)))
			{
				d=1;  //Funcion para cambio de mes
				m++;
			}
			if ((d==32)&&(m==12)) //Funcion para año nuevo
			{
				d=1;
				m=1;
				a++;
			}
			cout<<endl;
			cout<<"El dia siguiente es: \n";
			cout<<"Dia: " << d << endl;
			cout<<"Mes: " << m << endl;
			cout<<"Año: " << a << endl;	
			}
			}
		}
			else
			{
			cout<<"\nLa fecha ingresada es invalida";
			}
	}
	
	return 0;
}
