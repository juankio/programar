/*Hacer un programa en C++ que diga si un número es par o impar.*/
#include<iostream>

using namespace std;
int main ()
{
int a;
cout<<"ingresar un numero"<<endl;
cin>>a;

if(a%2==0)
{
 cout<<"el numero es par"<<endl;
}
else
{
 cout<<"el numero es impar"<<endl;
}
return 0;	
}
