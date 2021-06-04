#include <iostream>
#include <string.h>
#include <cctype>
using namespace std;

// Hacer un programa de cadena de caracteres y longitud.
// Comparar mayúsculas y minúsculas

char frase[20];
char frase1[20];
char frase2[20];

int main() 
{
    cout << "Digite el String: ";
    cin.getline(frase, 20, '\n');

    cout << "Digite la cadena 1: ";
    cin.getline(frase1, 20, '\n');

    // Longitud de la cadena

    if (strlen(frase) == strlen(frase1))
        cout << "\nLas cadenas son iguales" << endl;
    else if (strlen(frase) > strlen(frase1))
        cout << "\nLa frase es mayor que la frase 1" << endl;
    else
        cout << "\nLa frase es menor que la frase 1" << endl;

    // Comparar la cadena

    if (strcmp(frase, frase1) == 0)
        cout << "\nLas cadenas son iguales" << endl;
    else if (strcmp(frase, frase1) < 0)
        cout << "\nLa frase es mayor que la frase 1" << endl;
    else
        cout << "\nLa frase es menor que la frase 1" << endl;

    // Copiar la cadena

    cout << endl;
    strcpy(frase2, frase);
    cout << frase2 << endl;

    cout << endl;
    for (int i=0; i<strlen(frase); i++)
        frase[i] = toupper(frase[i]);
    cout << frase << endl;

    cout << endl;
    for (int i=0; i<strlen(frase); i++)
        frase[i] = tolower(frase[i]);
    cout << frase << endl;
}