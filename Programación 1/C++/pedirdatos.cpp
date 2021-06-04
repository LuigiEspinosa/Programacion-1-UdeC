#include <iostream>

using namespace std;

float n1, n2;
void pedirdatos();
void suma(int a, int b);
void resta(int a, int b);
void multi(int a, int b);
void divi(int a, int b);

int main()
{
    pedirdatos();
    suma(n1,n2);
    resta(n1,n2);
    multi(n1,n2);
    divi(n1,n2);
}

void pedirdatos()
{
    cout << "Digite el valor de n1: ";
    cin >> n1;

    cout << "Digite el valor de n2: ";
    cin >> n2;
}

void suma(int a, int b)
{
    cout << "\nLa suma es: " << a + b << endl;
}

void resta(int a, int b)
{
    cout << "La resta es: " << a - b << endl;
}

void multi(int a, int b)
{
    cout << "La multiplicación es: " << a * b << endl;
}

void divi(int a, int b)
{
    cout << "La división es: " << a / b << endl;
}