#include <iostream>
using namespace std;

// Classess
class Deportista
{
private:
    string nombre;
    int edad;

public:
    Deportista(string, int);
    virtual void Deporte();
};

class Tenis : public Deportista
{
private:
    float estatura;

public:
    Tenis(string, int, float);
    void Deporte();
};

class Basquetball : public Deportista
{
private:
    string clases;

public:
    Basquetball(string, int, string);
    void Deporte();
}

// Constructors
Deportista::Deportista(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}

Tenis::Tenis(string _nombre, int _edad, float _estatura) : Deportista(_nombre, _edad)
{
    estatura = _estatura;
}

Basquetball::Basquetball(string _nombre, int _edad, string _clases) : Deportista(_nombre, _edad)
{
    clases = _clases;
}

// Functions
void Deportista::Deporte()
{
    cout << "Mi nombres es " << nombre << " mi edad es " << edad << "juego ";
}

void Tenis::Deporte()
{
    Deportista::Deporte();
    cout << " Tengo una estatura de " << estatura << " metros" << endl;
}

void Basquetball::Deporte()
{
    Deportista::Deporte();
    cout << " basquetaball de delantero " << clases << endl;
}

int main()
{
    Deportista *depo[2];
    depo[0] = new Tenis("juan", 35, 1.80);
    depo[1] = new Basquetball("Juan", 35, "Basque");

    depo[0]->Deporte();
    depo[1]->Deporte();
}