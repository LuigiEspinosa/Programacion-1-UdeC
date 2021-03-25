#include <iostream>
#include <math.h>
using namespace std;

// Hallar la suma de la expresión 2exp1 + 2exp2 + 2exp3 ... 2expn

int main()
{
    int numero, suma=0, elevado=0;

    cout << "Digite un número de veces que va a sumar 2^n: ";
    cin >> numero;

    for (int i = 1; i < numero; i++)
    {
        elevado = pow(2, i);
        suma += elevado;
    }

    cout << "La suma es: " << suma << endl;
}