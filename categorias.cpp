#include <iostream>
#include <string.h>
using namespace std;

// Imprimir, Nombre, edad, Sexo, Club, Categoría
// edad <= 18 - Juvenil
// edad <= 40 - Senior
// edad > 40 - Veterano

struct deportista
{
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];
} dep; // alias

char categoria[20];

int main()
{
    cout << "Digite el nombre: ";
    cin.getline(dep.nombre, 20, '\n');

    cout << "Digite la edad: ";
    cin >> dep.edad;

    fflush(stdin);

    cout << "Digite el sexo: ";
    cin.getline(dep.sexo, 10, '\n');

    cout << "Digite el club: ";
    cin.getline(dep.club, 20, '\n');

    if (dep.edad <= 18)
        strcpy(categoria, "juvenil");
    else if (dep.edad <= 40)
        strcpy(categoria, "Senior");
    else
        strcpy(categoria, "Veterano");

    cout << "\nEl nombre es: "    << dep.nombre << endl;
    cout << "La edad es: "      << dep.edad << endl;
    cout << "El sexo es: "      << dep.sexo << endl;
    cout << "El club es: "      << dep.club << endl;
    cout << "La categoria es: " << categoria << endl;
}