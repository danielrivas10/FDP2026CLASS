#include <iostream>

using namespace std;

int main()
{
    int n;

    // Solicita al usuario que ingrese un número entero
    cout << "Enter an integer number: ";
    cin >> n;

    // Verifica si el número es par usando el operador módulo
    if (n % 2 == 0)
    {
        // Si es par, muestra el mensaje e incluye un sonido (beep)
        cout << "\aThe number entered is " << n << " ... it is even." << endl;
    }
    else
    {
        // Si es impar, muestra otro mensaje
        cout << "The number entered is " << n << " ... it is odd." << endl;
    }

    return 0;
}