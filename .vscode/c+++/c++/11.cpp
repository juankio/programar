/*Hacer un programa en C++ para una tienda de zapatos que tiene una promoci�n de
descuento para vender al mayor, esta depender� del n�mero de zapatos que se
compren. Si son m�s de diez, se les dar� un 10% de descuento sobre el total de la
compra; si el n�mero de zapatos es mayor de veinte, pero menor de treinta, se le
otorga un 20% de descuento; y si son m�s treinta zapatos se otorgar� un 40% de
descuento. El precio de cada zapato es de $80.000*/
#include<iostream>

using namespace std;

int main()
{
	int num, restante; 
	int precio;
	
	cout<<"Ingrese la cantidad de zapatos que desea comprar"<<endl;
	cin>>num;
	
	precio = (num*80000);
	
	if (num<=9)
	    {cout<<"El precio total a pagar es de "<<precio<<endl;}
	    
	     else if (num>=10 && num<=19)
	     		 {
				    restante= precio*0.10;
	     		  restante= precio-restante;
	              cout<<"El precio total a pagar es de "<<restante<<endl;
	             }
	                else if (num>=20 && num<=29)
	                     {
	                		restante= precio*0.20;
	     		            restante= precio-restante;
	              			cout<<"El precio total a pagar es de "<<restante<<endl;
	                     }
	                          else
	                      {
	                		restante= precio*0.40;
	     		            restante= precio-restante;
	              			cout<<"El precio total a pagar es de "<<restante<<endl;
	                      }
	                           
	 return 0;
}
