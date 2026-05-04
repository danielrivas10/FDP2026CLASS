#include <iostream>
using namespace std;

int main ()
{


float temperatura;

cout << "Por favor podrias ingresarme la temperatura del agua en grados Celsius" << endl;
cin >> temperatura; 

if (temperatura <= 15 )
{

cout << "El agua esta helada" << endl;
}

else if ( temperatura  >= 16 && temperatura <=34 )
{ 
cout << "El agua esta tibia" << endl;
}

else if (temperatura >=39)
{

cout << "El agua esta caliente " << endl;

}

// 1, 3, 4 , 8 10 de nivel medio - condicionales
// 15 - 20 nivel dificil.

return 0;



}

