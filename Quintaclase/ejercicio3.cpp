#include <iostream>
using namespace std;

int main()
{
    int N, suma = 0;

    // Solicitar al usuario un número entero N
    cout << "Ingresa un número entero: ";
    cin >> N;

    // Ciclo for para sumar los números desde 1 hasta N
    for (int i = 1; i <= N; i++) // Lo que hace es que segun el rango el número va ingresando hasta que quede en un igual a N
    {                            // Entonces, para i= 1, seria suma = 0+1, luego suma toma el valor de 1 por 0+1.
                                 // Volviendo a hacer el ciclo for hasta llegar al número N con datos nuevos.

        suma = suma + i; // Sumar el valor de i a la variable suma
    }

    // Imprimir el resultado de la suma
    cout << "La suma de los primeros " << N << " números es: " << suma << endl;

    return 0;
}