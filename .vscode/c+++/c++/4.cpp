/*Hacer un programa en C++ que lea un número y determinar si termina en 4.*/
#include<iostream>

using namespace std;
int main(){
int a;
cout<<"ingresar un numero"<<endl;
cin>>a;

if((a%10)==4)
	cout<<"el numero si termina en 4 "<<a<<endl;
else if((a%10)==-4)
	cout<<"el numero si termina en -4 "<<a<<endl;
else
	cout<<"no termina en cuatro"<<a<<endl;
	
}
