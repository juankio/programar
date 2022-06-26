/*Hacer un programa en C++ que lea una letra y diga si es una vocal*/
#include <iostream>

using namespace std;
int main()
{
  string letra;

  while (letra != "exit")
  {
    cout << "ingresa una vocal del alfabeto" << endl;
    cin >> letra;
    if ((letra == "a") || (letra == "A"))
    {
      cout << "es una vocal" << endl;
    }
    else if ((letra == "e") || (letra == "E"))
    {
      cout << "es una vocal" << endl;
    }
    else if ((letra == "i") || (letra == "I"))
    {
      cout << "es una vocal" << endl;
    }
    else if ((letra == "o") || (letra == "O"))
    {
      cout << "es una vocal" << endl;
    }
    else if ((letra == "u") || (letra == "U"))
    {
      cout << "es una vocal" << endl;
    }
    else
    {
      cout << "no es una vocal" << endl;
    }
  }
  cout << "Fin del programa";
  return 0;
}
