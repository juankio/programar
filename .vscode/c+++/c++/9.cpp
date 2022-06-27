/* Hacer un programa en C++ que lea un número de tres dígitos y determinar en qué
posición está el mayor.*/
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
 
 if(a>b && a>y)
 {
   cout<<"el mayor se encuentra en la primera posicion"<<endl;
 }
 else if (b>a && b>y)
 {
 	cout<<"el mayor se encuentra en la segunda posicion"<<endl;
 }
 else
 {
 	cout<<"el mayor se encuentra en la tercera posicion"<<endl;
 }
 
}

return 0;
}
