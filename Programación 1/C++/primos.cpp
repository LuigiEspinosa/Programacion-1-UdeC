#include <iostream>
using namespace std;

// Decir si el número es primo o no
// Apuntador es una dirección de memoria donde se pocesiona una radiable.

int main()
{
    int numero, *dire_numero, cont=0;

    cout << "Digite el número: ";
    cin >> numero;

    dire_numero = &numero;

    for (int i=1; i<*dire_numero; i++)
    {
        if (*dire_numero % i==0)
            cont += 1;
    }

    if (cont < 2)
    {
        cout << "\nEl número " << *dire_numero << " no es primo "<< endl;
        cout << "La dirección de memoria es " << dire_numero << endl;
    }
    else
    {
        cout << "\nEl número " << *dire_numero << " es primo "<< endl;
        cout << "La dirección de memoria es " << dire_numero << endl;
    }
}