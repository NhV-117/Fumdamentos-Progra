#include <iostream>

using namespace std;

main ()
{
	int d, m, a; //dias, meses, años
	
	cout<<"Ingrese el dia: "; cin>>d;
	cout<<"Ingrese el mes: "; cin>>m;
	cout<<"Ingrese el año: "; cin>>a;
	
	if ((a%400==0)||(a%100!=0)&&(a%4==0)){
	
		if((d>=1)&&(d<=31)&&(m>=1)&&(m<=12))
		{
			d++;  // aumento del dia por uno
			if ((d==30)&&(m==2)||(d==31)&&((m==4)||(m==6)||(m==9)||(m==11))||
			(d==32)&&((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)))
			{
				d=1;
				m++;
				
				cout<<endl;
			cout<<"El dia siguiente es: \n";
			cout<<"Dia: " << d << endl;
			cout<<"Mes: " << m << endl;
			cout<<"Año: " << a << endl;
			}
			if ((d==32)&&(m==12))
			{
				d=1;
				m=1;
				a++;
				
			cout<<endl;
			cout<<"El dia siguiente es: \n";
			cout<<"Dia: " << d << endl;
			cout<<"Mes: " << m << endl;
			cout<<"Año: " << a << endl;
			}
			/*En caso de que se ponga un dia mayor a 29
			en el mes de febrero*/
			if (d>=31&&m==2)
			{
				cout<<"\nLos datos ingresados son invalidos";
			}	
		}else
		{
			cout<<"\nLos datos ingresados son invalidos";
		}
		
	}

	else
	{
		d++;  // aumento del dia por uno
		if ((d==29)&&(m==2)||(d==31)&&((m==4)||(m==6)||(m==9)||(m==11))||
		(d==32)&&((m==1)||(m==3)||(m==5)||(m==7)||(m==8)||(m==10)))
		{
				d=1;
				m++;
				
		cout<<endl;
		cout<<"El dia siguiente es: \n";
		cout<<"Dia: " << d << endl;
		cout<<"Mes: " << m << endl;
		cout<<"Año: " << a << endl;
		}
		if ((d==32)&&(m==12))
		{
				d=1;
				m=1;
				a++;
				
		cout<<endl;
		cout<<"El dia siguiente es: \n";
		cout<<"Dia: " << d << endl;
		cout<<"Mes: " << m << endl;
		cout<<"Año: " << a << endl;
		}
		/*En caso de que se ponga un dia mayor a 28 en el
		mes de febrero*/
		if (d>=30&&m==2)
		{
			cout<<"\nLos datos ingresados son invalidos";
		}else
		{
			cout<<"\nLos datos ingresados son invalidos";
		}
	}
	
	return 0;
}
