/*. Hacer un programa en C++ que lea un n�mero entero positivo de dos d�gitos y
determinar a cu�nto es la suma de sus d�gitos*/
#include <iostream>

using namespace std;
int main()
{
	int a;
	int b;
	int c;
	int sum;

	cout << "ingrese un numero" << endl;
	cin >> a;

	if (a < 9 && a > 100)
		cout << "el numero no de dos digitos ni entero" << a << "." << endl;

	else
		b = (a * 10);
	c = (a / 10);
	sum = (b + c);
	cout << "suma de los dos numeros es " << sum << "igual al numero que ingreso" << a << endl;
}
