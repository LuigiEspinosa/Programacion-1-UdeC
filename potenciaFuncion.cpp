#include <iostream>
#include <math.h>

using namespace std;

float numero, potencia;
void pedirdatos();
void exponente(float a, float b);

int main()
{
    pedirdatos();
    exponente(numero, potencia);
}

void pedirdatos()
{
    cout << "Digite el número de la base: ";
    cin >> numero;

    cout << "Digite el número de la potencia: ";
    cin >> potencia;
}

void exponente(float a, float b) 
{
    cout << "\nEl valor de " << numero << " a la potencia " << potencia << " es: " << pow(a, b) << endl;
}