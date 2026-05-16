#include <iostream>
using namespace std;

int main()
{
    int n=0;
    char V;
    cout << "Ingresa una letra de día de semana" << endl;
    cin >> V;
    cout << n << endl;
    switch (V)
    {
    case 'L':
    cout << n << "Lunes\n";
    break;

    case 'M':
    cout << n << "Martes\n";
    break;
    
    case 'm':
    cout << n << "Miercoles\n";
    break;

    case 'J':
    cout << n << "Jueves\n";
    break;

    case 'V':
    cout << n << "Viernes/n";
    break;

    case 'S':
    cout << n << "Sabado\n";
    break;

    case 'D':
    cout << n << "Domingo\n";
    break;







    default:
    cout << "Datos incorrectos" << endl;

    break;

    return 0;
    }
}

// SWITCH