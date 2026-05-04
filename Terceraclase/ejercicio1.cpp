#include <iostream>
using namespace std;

int main()
{
    int res, n;
    cout << "hola, podrias ingresar un número entero" << endl;
    cin >> n;
    res = n % 2;
    cout << n << endl;
    switch (res)
    {
    case 1:
    cout << n << "es un numero impar\n" << endl;
    break;

    case 0:
    cout << n << "es un numero par\n" << endl;
    break;
    default:
    cout << "Datos incorrectos" << endl;

    break;

    return 0;
    }
}

// SWITCH