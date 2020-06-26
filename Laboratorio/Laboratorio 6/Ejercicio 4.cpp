#include <iostream>

using namespace std;

void leer();
void suma(int *v,int *v1,int *resp,int n);
int n;
int num[100], num2[100] ,num3[100];

int main ()
{
  leer();
  suma(num,num2,num3,n);
  cout<<"\nLa suma es: "<<endl;
  for(int i=0;i<n;i++){
    cout<<num[i]<<"+"<<num2[i]<<":"<<num3[i]<<endl;
  }
  
  return 0;
}

void leer()
{
  cout<<"Ingrese el tamaño del arreglo: ";
  cin>>n;
  
  cout<<endl;
  for (int i=0;i<n;i++)
  {
    cout<<"Ingrea los numeros del primer arreglo: ";
    cin>>num[i];
  }
  
  cout<<endl;
  for (int i=0;i<n;i++)
  {
    cout<<"Ingresa los numeros del segundo arreglo: ";
    cin>>num2[i];
  }
}

void suma(int *v,int *v1,int *resp,int n){
  int sum=0;
  for(int i=0;i<n;i++){
    sum=v[i]+v1[i];
    resp[i]=sum;
  }
}
