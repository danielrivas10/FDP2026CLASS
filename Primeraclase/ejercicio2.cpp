#include <iostream>
using namespace std;

int main() {
int a, b, c;

cout << "Podria ingresar el primer número:";
cin >> a;

cout << "Escriba su segundo número:";
cin >> b;

cout << "Escriba su tercer número:";
cin >> c;

//Calcular el promedio
cout << "El promedio de los números es: " << (a + b + c) / 3<< endl;

return 0;

}