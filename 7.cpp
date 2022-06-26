/*Hacer un programa en C++ que lea un número de tres dígitos y determinar si al
menos dos de sus dígitos son iguales.*/

#include<iostream>

using namespace std;
int main(){
int num,x,y,a, b;

cout<<"ingresar un numero de tres digitos"<<endl;
cin>>a;

if((num<100 && num>99)&& (num<-999 && num>-100))
  {
  cout<<"el numero"<< num<< "no tiene tres dijitos"<<endl;	
  }
  else
     {
     	x= num/10; 
     	y = num%10;
     	a=x/10;
     	b=x%10;
     	
     	if(a==y && a==b)
     	{
     		cout<<"hay dos digitos que son iguales"<<endl;
		 }
		 
		 else if(b==a && b==y)
		 {
		 	cout<<"hay dos digitos que son iguales"<<endl;
		 }
		 else if(y==a && y==b)
		 {
		 	cout<<"hay dos dijitos que son iguales"<<endl;
		 }
		 else
		 {
		 	cout<<"no hay dos dijitos que sean iguales"<<endl;
		 }
		 
	 }

return 0;

}
