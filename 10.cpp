/*Hacer un programa en C++ que lea tres números enteros y los muestre de menor a
mayor*/
#include<iostream>

using namespace std;
int main(){
int a,b,c;
cout<<"ingresa tres numeros"<<endl;
cin>>a>>b>>c;
cout<<"los numeros son de menor a mayor "<<endl;
if(a<b&&a<c)
{
  if (b<c)
	{
	 cout<<a<<endl<<b<<endl<<c<<endl;		
	}
  else
	{
	cout<<a<<endl<<c<<endl<<b<<endl;}
	if(b<a && b<c)
	
  if(a<c)
	{
	cout<<b<<endl<<c<<endl<<a<<endl;
	}
  else
	{
	cout<<b<<endl<<c<<endl<<a<<endl;}
	if(c<a && c<b)
	
  if(b<a)
	{
	cout<<c<<endl<<a<<endl<<b<<endl;
	}
  else
	{
	cout<<c<<endl<<a<<endl<<b<<endl;
	}
	
}
return 0;
	
}
