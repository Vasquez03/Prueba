#include <iostream>
#include <cmath>


using namespace std;


int main()
{
    double numero, raiz;
    cout << "Ingrese un numero: ";

    cin >> numero;

    raiz = sqrt(numero);

    cout << "La raiz cuadrada de " << numero << " es: " << raiz;

    return 0;
}