#include <iostream>
#include <string.h>

// Imprimir el estudiante con mayor promedio

struct Alumno
{
    char nombre[20];
    int edad;
    float promedio;
} al[4];

float mayor = 0;
int pos = 0;

int main()
{
    for (int i = 0; i < 4; i++)
    {
        fflush(stdin);
        std::cout << '\n';
        std::cout << "Digite el nombre: ";
        std::cin.getline(al[i].nombre, 20, '\n');

        std::cout << "Digite la edad: ";
        std::cin >> al[i].edad;

        std::cout << "Digite el promedio: ";
        std::cin >> al[i].promedio;

        if (al[i].promedio > mayor)
        {
            mayor = al[i].promedio;
            pos = i;
        }
    }

    std::cout << std::endl;
    std::cout << "\nEstudiante con mayor promedio" << std::endl;
    std::cout << "Nombre: "   << al[pos].nombre << std::endl;    
    std::cout << "Edad: "     << al[pos].edad << std::endl;    
    std::cout << "Promedio: " << al[pos].promedio << std::endl;
}