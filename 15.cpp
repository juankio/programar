/*Hacer un programa en C++ para determinar el aumento de un trabajador, se debe
tomar en cuenta que si ganaba más de $2000 tendrá un aumento del 5%, si
generaba menos de $2000 su aumento será de un 10%.*/
#include<iostream>

using namespace std;
int main ()
{
 float salario;
 cout<<"ingrese su salario"<<endl;
 cin>>salario;
 if(salario<2000)
 {
  cout<<"su salario ahora es de "<<(salario+(salario*0.10))<<endl;
 }
else
{
	
 cout<<"su salarioa ahora es de"<<(salario+(salario*0.05))<<endl;
}
return 0;
}
