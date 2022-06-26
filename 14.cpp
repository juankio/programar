/*Hacer un programa en C++ para determinar el promedio de tres notas y determinar
si el estudiante aprobó o no.*/
#include<iostream>

using namespace std;
int main ()
{
 float nota1,nota2,nota3,promedio =0;
 cout<<"ingresar sus notas"<<endl;
 cin>>nota1>>nota2>>nota3;
 promedio = ((nota1+nota2+nota3)/3);
 if (promedio>=9,5)
 {
  cout<<"aprobado"<<endl;
 }
 else
 {
  cout<<"reprobado"<<endl;
 }
 return 0;
 
	
	
	
}
