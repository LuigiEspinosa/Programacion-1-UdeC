#include <iostream>
using namespace std;

// Classes
class Animal
{
private:
    int edad;

public:
    Animal(int);
    virtual void Comer();
};

class Humano : public Animal
{
private:
    string nombre;

public:
    Humano(int, string);
    void Comer();
};

class Perro : public Animal
{
private:
    string nombre, raza;

public:
    Perro(int, string, string);
    void Comer();
};

// Constructor
Animal::Animal(int _edad)
{
    edad = _edad;
}

Humano::Humano(int _edad, string _nombre) : Animal(_edad)
{
    nombre = _nombre;
}

Perro::Perro(int _edad, string _nombre, string _raza) : Animal(_edad)
{
    nombre = _nombre;
    raza = _raza;
}

// Functions
void Animal::Comer()
{
    cout << "Tengo " << edad << " años y yo como en ";
}

void Humano::Comer()
{
    Animal::Comer();
    cout << "un plato espcial en el comedor, mi edad es y mi nombre es " << nombre << endl;
}

void Perro::Comer()
{
    Animal::Comer();
    cout << "un plato de vidrio y mi nombre es " << nombre << " mi edad es años" << endl;
}

int main()
{
    Animal *animal[2];
    animal[0] = new Humano(20, "Juan");
    animal[1] = new Perro(20, "Tomy", "Labrador");

    animal[0]->Comer();
    animal[1]->Comer();
}