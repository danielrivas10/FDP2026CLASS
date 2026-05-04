#include  <iostream>
#include  <cmath>

using namespace std;

int main ()
{

float r, pi=3.141516;
int area ;

cout<<"Por favor, podria ingresar el valor de radio"<<endl;
cin>>r;


area= pi*(pow(r,2));
cout << area << endl;

if (area % 2 == 0){

cout << "La variable:" << area << "es par." << endl;

}
else {
cout << "La variable:" <<area << "No es par" << endl;
}








}