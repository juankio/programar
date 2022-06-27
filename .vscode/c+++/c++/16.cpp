
#include <iostream>

using namespace std;
int main()
{
    int edad;
    while (edad <= 1)
    {
        cout << "cuantos años tienes" << endl;
        cin >> edad;
        if (edad >= 18)
        {
            cout << "eres mayor de edad" << edad;
        }
        else if (edad <= 17)
        {
            cout << "eres menor de edad" << edad;
        }
        else
        {
            cout << "no es numero" << endl12;
        }
    }
    cout << "fin del programa";
    return 0;
}
