#include <iostream>
using namespace std;

// Hacer una clase llamada Rectángulo y hallar el perímetro y area
class Rectangulo
{
    private:
        float h;
        float w;

    // Métodos del constructor
    public:
        Rectangulo(float, float);
        void p();
        void a();
        void triangulo();
};

// Definir el constructor
Rectangulo::Rectangulo(float _h, float _w)
{
    h = _h;
    w = _w;
}

void Rectangulo::p()
{
    float p;

    p = (2 * h) + (2 * w);
    cout << "El perímetro del rectángulo es " << p << endl;
}

void Rectangulo::a()
{
    float a;

    a = h * w;
    cout << "El area del rectángulo es " << a << endl;
}

void Rectangulo::triangulo()
{
    float a2;

    a2 = (h * w) / 2;
    cout << "El area del triángulo es: " << a2 << endl;
}

// Instanciar la clase
int main()
{
    float lar, anch;

    cout << "Digite el valor del largo: ";
    cin >> lar;

    cout << "Digite el valor del ancho: ";
    cin >> anch; cout << endl;

    Rectangulo r1 = Rectangulo(lar, anch);
    // Rectangulo a1 = Rectangulo(20, 10);

    r1.p();
    r1.a();
    r1.triangulo();
}

