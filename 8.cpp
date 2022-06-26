/*Hacer un programa en C++ que lea un número de tres dígitos y determinar si algún
dígito es múltiplo de otro*/

#include<iostream>

using namespace std;
int main(){
int num,x,y,a,b;
cout<<"ingrsar un numero de tres dijitos"<<endl;
cin>>num;

if((num<100 && num>999)&&(num<-999 && num-100))
{
 cout<<"el numero"<<num<<"no tiene tres digitos"<<endl;
}
else
{
 x=num/10; y=num%10;
 a=x/10;
 y=num%10;
 a=x/10;
 b=x%10;
 
 if(a==b&&a==y&&b==y)
 {
 	cout<<"todos los digitos son multiplos "<<endl;
 }
 else if (a%b==0)
 {
 	cout<<a<<"es multiplo de "<<b<<endl;
 }
  else if (a%y==0)
 {
 	cout<<a<<"es multiplo de "<<y<<endl;
 }
  else if (b%a==0)
 {
 	cout<<b<<"es multiplo de "<<a<<endl;
 }
  else if (b%y==0)
 {
 	cout<<b<<"es multiplo de "<<y<<endl;
 }
  else if (y%a==0)
 {
 	cout<<y<<"es multiplo de "<<a<<endl;
 }
  else if (y%b==0)
 {
 	cout<<y<<"es multiplo de "<<b<<endl;
 }
  else 
  {
  	cout<<"ninguno digito es multiplo"<<endl;
  }
 
return 0; 
 
}

	
	

}
