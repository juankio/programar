/*.Hacer un programa en C++ que lea un número positivo de tres dígitos e indique si el
primer dígito es igual al último.*/

#include<iostream>

using namespace std;
int main ()
{
 int a,b,c,d;
 cout<<"ingresar un numero de tres digitos"<<endl;
 cin>>a;
 
 if(a>99 && a <1000)
 {
  b=a/10;
  d= a%10;
  c=b/10;
 }
  if(c==d)
  {
  	cout<<"el primer numero es igual al ultimo numero"<<endl;
  }
 else
 {
  cout<<"el numero no el primer termino igual al ultimo termino"<<endl;
 }
return 0;
}
