/*Hacer un programa en C++ para una tienda de helado da un descuento por compra a sus
clientes con membresía dependiendo de su tipo, sólo existen tres tipos de membresía, tipo A,
tipo B y tipo C. Los descuentos son los siguientes:
Tipo A 10% de descuento
Tipo B 15% de descuento
Tipo C 20% de descuento*/

#include<iostream>

using namespace std;
int main ()
{
float x;
char tipo;
cout<<"ingresa que vas a comprar"<<endl;
cin>>x;
cout<<"tipo de membresia"<<endl;
cin>>tipo;

if(tipo=='a')
{
 cout<<"tipo a"<<endl;
 cout<<"total a pagar"<<(x-(x*0.10))<<endl;
}
else if (tipo == 'b')
{
 cout<<"tipo b"<<endl;
 cout<<"total b pagar"<<(x-(x*0.15))<<endl;
}
else if(tipo == 'c')
{
 cout<<"tipo c"<<endl;
 cout<<"total c pagar"<<(x-(x*0.20))<<endl;
}
else
{
 cout<<"total a pagar"<<x<<endl;
}

return 0;

}



