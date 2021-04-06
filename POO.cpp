#include <iostream>
#include <string.h>
using namespace std;

// Hacer un programa que tenga dos métodos

class Persona
{
    private:
        string nombre;
        int edad;

    public:
        Persona(string, int);
        void Leer();
        void Correr();
};

// Definir el constructor
Persona::Persona(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}

void Persona::Leer()
{
    cout << "\nYo soy " << nombre << " estoy leyendo el libro \"Cien años de soledad\" y tengo " << edad << " años." << endl;
}

void Persona::Correr()
{
    cout << "Yo soy " << nombre << " y estoy corriendo la maratón de mayores y tengo " << edad << " años." << endl;
}

// Función principal
int main()
{
    Persona p1 = Persona("Juan", 40); // Instanciar o crear objetos
    p1.Leer();

    Persona c1 = Persona("Maria", 25);
    c1.Correr();
}