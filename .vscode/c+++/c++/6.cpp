/*Hacer un programa en C++ que lea un n�mero entero positivo de dos d�gitos y
determinar si un d�gito es m�ltiplo del otro.*/
#include<iostream>

using namespace std;
int main(){
int a;
int b;
int c;

cout<<"ingrese un numnero de dos digitos "<<endl;
cin>>a;

if(a<10&&a>99)
{cout<<"el numero"<<a<<"no tiene dos digitos positivo"<<endl;
}
 else
 {
   b=a/10;
   c= a%10;
 }
 	if(b==c)
 	  {
 	   cout<<"ambos digitos son multiplos"<<endl;
	  }
	 else if(b%c==0)
	 {
	 	cout<<c<<"es multiplo de"<<b<<endl;
	 }
	 else if(c%b==0)
	 {
	 	cout<<b<<"es multiplode"<<c<<endl;
	 }
    else
    {
    	cout<<"los digitos no son multiplos"<<endl;
	}
  
 return 0;
}
	

