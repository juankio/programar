/*Hacer un programa en C++ que lea un número entero positivo de dos dígitos y
determinar si ambos dígitos son pares.*/
#include<iostream>

using namespace std;
int main(){
int a;
int b;
int c;
cout<<"ingresar un numero de dos digitos"<<endl;
cin>>a;

if(a<9 && a>100)
 {cout<<"el numero no es de dos digitos "<<a<<endl;}
 else
  {	b = a/10;
    c = a*10;
   if ((b%2==0) && (c%2==0))
  	{ cout<<"los dos numeros son pares"<<endl;}
    else
 	   {cout<<"los dos numeros no son pares"<<endl;}
}
return 0;
}
  
  
