/*Hacer un programa en C++ para ayudar a un trabajador a saber cu�l ser� su sueldo
semanal, se sabe que, si trabaja 40 horas o menos, se le pagar� $20 por hora, pero
si trabaja m�s de 40 horas entonces las horas extras se le pagar�n a $25 por hora.*/
#include<iostream>

using namespace std;
int main ()
{
int x;
int bono = 0;
int sueldo = 0;
cout<<"ingrese las horas que trabaja"<<endl;
cin>>x;
if(x<40)
{
 sueldo=x*20;
 cout<<"su sueldo de la semas es"<<sueldo;
}
else
{
 bono=x-40;
 bono=bono*25;
 sueldo=((x-bono)*20);
 cout<<"su sueldo de la semana es"<<(sueldo +bono)<<endl; 
}
	
	
return 0;
	
}
