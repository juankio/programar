/*Hacer un programa en C++ que lea tres números y diga cuál es el mayor*/
#include<iostream>

using namespace std;
int main ()
{
 int a,b,c;
 cout<<"ingresar tres numeros"<<endl;
 cin>>a>>b>>c;
 if ((a>b)&&(a>c))
 {
  cout<<"el numero mayor es"<<a<<endl;
 }
 else if(b>c)
 {
  cout<<"el numero mayor es"<<b<<endl;
 }
 else
 {
  cout<<"el numero mayor es"<<c<<endl;
 }
 
 
 
 
}
