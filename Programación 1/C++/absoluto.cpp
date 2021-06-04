#include <iostream>
using namespace std;

template <class TIPOD>

void mostrarabs(TIPOD numero)
{   
    if (numero < 0 )
        numero *= -1;

    cout << "\nEl valor absoluto es: " << numero << endl;
}

int main()
{
    int num1 = 30;
    float num2 = 500.456;
    double num3 = 49.9887;
    double num4 = -556.990;

    mostrarabs(num1);
    mostrarabs(num2);
    mostrarabs(num3);
    mostrarabs(num4);
}