#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit;

    // Pedir datos al user
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> celsius;

    // Conversión
    fahrenheit = (9.0 / 5.0) * celsius + 32;

    // Mostrar resultado
    cout << "La temperatura en Fahrenheit es: " << fahrenheit << endl;

    return 0;
}

