#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

/* ****************** */
/*       PUNTO 1      */
/* ****************** */

// Clases
class Persona
{
private:
    string tipo;
    int ide, edad;
    string nombre, sexo;
    float estatura;

public:
    Persona(string, int, int, string, string, float);
    virtual void MostrarPersona();
};

class Empleado : public Persona
{
private:
    float sueldo;
    int antiguedad;

public:
    Empleado(string, int, int, string, string, float, float, int);
    void MostrarPersona();
};

class Docente : public Persona
{
private:
    string materia;
    int categoria;

public:
    Docente(string, int, int, string, string, float, string, int);
    void MostrarPersona();
};

// Constructor
Persona::Persona(string _tipo, int _ide, int _edad, string _nombre, string _sexo, float _estatura)
{
    ide = _ide;
    edad = _edad;
    tipo = _tipo;
    nombre = _nombre;
    sexo = _sexo;
    estatura = _estatura;
}

Empleado::Empleado(string _tipo, int _ide, int _edad, string _nombre, string _sexo, float _estatura, float _sueldo, int _antiguedad) : Persona(_tipo, _ide, _edad, _nombre, _sexo, _estatura)
{
    sueldo = _sueldo;
    antiguedad = _antiguedad;
}

Docente::Docente(string _tipo, int _ide, int _edad, string _nombre, string _sexo, float _estatura, string _materia, int _categoria) : Persona(_tipo, _ide, _edad, _nombre, _sexo, _estatura)
{
    materia = _materia;
    categoria = _categoria;
}

// Funciones (Herencia)
void Persona::MostrarPersona()
{
    cout << "\n"
         << tipo << endl;
    cout << "La identificacion es: " << ide << endl;
    cout << "La edad es: " << edad << endl;
    cout << "El nombre es: " << nombre << endl;
    cout << "El sexo: " << sexo << endl;
    cout << "La estatura es: " << estatura << endl;
}

void Empleado::MostrarPersona()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    Persona::MostrarPersona();
    cout << "Su sueldo es: " << sueldo << endl;
    cout << "Antiguedad en la empresa: " << antiguedad << endl;
}

void Docente::MostrarPersona()
{
    Persona::MostrarPersona();
    cout << "Su materia es: " << materia << endl;
    cout << "Categoria: " << categoria << endl;
}

// Funciones
void persona()
{
    Persona *per[3];

    // Los valores pueden cambiar
    per[0] = new Persona("Persona", 1072675034, 21, "Luigi", "Hombre", 1.70);
    per[1] = new Empleado("Empleado", 1072675034, 21, "Luigi", "Hombre", 1.70, 3500000, 1);
    per[2] = new Docente("Docente", 1072675034, 21, "Luigi", "Hombre", 1.70, "Biologia", 4);

    per[0]->MostrarPersona();
    per[1]->MostrarPersona();
    per[2]->MostrarPersona();
}

/* ****************** */
/*    FINAL PUNTO 1   */
/* ****************** */

/* ****************** */
/*      PUNTO 2       */
/* ****************** */

// Clases
class Figura
{
private:
    string nombre;

public:
    Figura(string);
    virtual void Dibujar();
};

class Triangulo : public Figura
{
private:
    int filas;

public:
    Triangulo(string, int);
    void Dibujar();
};

class Rectangulo : public Figura
{
private:
    int ancho, alto;

public:
    Rectangulo(string, int, int);
    void Dibujar();
};

class Circulo : public Figura
{
private:
    float n;

public:
    Circulo(string, float);
    void Dibujar();
};

// Constructor
Figura::Figura(string _nombre)
{
    nombre = _nombre;
}

Triangulo::Triangulo(string _nombre, int _filas) : Figura(_nombre)
{
    filas = _filas;
}

Rectangulo::Rectangulo(string _nombre, int _ancho, int _alto) : Figura(_nombre)
{
    ancho = _ancho;
    alto = _alto;
}

Circulo::Circulo(string _nombre, float _n) : Figura(_nombre)
{
    n = _n;
}

// Funciones (Herencia)
void Figura::Dibujar()
{
    cout << "Dibujando un " << nombre << " en C++" << endl;
    cout << endl;
}

void Triangulo::Dibujar()
{
    Figura::Dibujar();

    for (int i = 1, k = 0; i <= filas; ++i, k = 0)
    {
        for (int espacio = 1; espacio <= filas - i; ++espacio)
        {
            cout << "  ";
        }

        while (k != 2 * i - 1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
}

void Rectangulo::Dibujar()
{
    Figura::Dibujar();

    for (int i = 0; i < alto; i++)
    {
        for (int k = 0; k < ancho; k++)
            cout << "*";
        cout << endl;
    }
}

void Circulo::Dibujar()
{
    Figura::Dibujar();

    n += 3;
    float superficie = floor((4 * n - 2.5) / 5.8);

    for (float j = superficie; j >= -superficie; j--)
    {
        for (float i = -n; i <= n; i++)
        {
            float axisX = superficie * superficie * i * i + n * n * j * j;
            float axisY = n * n * superficie * superficie;

            if (axisX <= axisY)
                cout << "*";
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

// Funciones
void areaT()
{
    float b, h, area;

    cout << "\nBase del triangulo: ";
    cin >> b;
    cout << "Altura del triangulo: ";
    cin >> h;

    area = 0.5 * b * h;
    cout << "\nArea = " << area;
    cout << endl;
}

void perimetroT()
{
    float a, b, c, per;
    int ch;

    cout << "\n¿Cual triangulo es?" << endl;
    cout << "\n1. Triangulo equilatero" << endl;
    cout << "2. Triangulo isoceles" << endl;
    cout << "3. Triangulo escaleno" << endl;
    cout << "\nDigite una opción: ";
    cin >> ch;

    switch (ch)
    {
    case 1:
        cout << "\nIngrese el valor: ";
        cin >> a;
        per = 3 * a;
        break;
    case 2:
        cout << "\nIngrese el valor de los lados iguales: ";
        cin >> a;
        cout << "Ingrese el valor del lado diferente: ";
        cin >> b;
        per = 2 * a + b;
        break;
    case 3:
        cout << endl;
        for (int i = 1; i <= 3; i++)
        {
            cout << "Ingrese el valor del lado " << i << ": ";
            if (i == 1)
                cin >> a;
            else if (i == 2)
                cin >> b;
            else if (i == 3)
                cin >> c;
        }
        per = a + b + c;
        break;
    case 4:
        break;
    default:
        cout << "\nDigite la opcion correcta";
        break;
    }

    cout << "\nPerimetro = " << per << endl;
    cout << endl;
}

void triangulo()
{
    Figura *tri[1];
    tri[0] = new Triangulo("Triangulo", 14);
    tri[0]->Dibujar();

    cout << "\nArea y Perimetro de un Triangulo";
    cout << "\n1 => Area" << endl;
    cout << "2 => Perimetro" << endl;
    int hallar;
    cout << "\nDigite la opcion: ";
    cin >> hallar;

    switch (hallar)
    {
    case 1:
        areaT();
        break;

    case 2:
        perimetroT();
        break;

    default:
        cout << "\nDigite el valor correcto." << endl;
        break;
    }
}

void areaR()
{
    float len, bre, area;

    cout << "\nIngrese el largo: ";
    cin >> len;
    cout << "Ingrese el ancho: ";
    cin >> bre;

    area = len * bre;
    cout << "\nArea = " << area;
    cout << endl;
}

void perimetroR()
{
    float len, bre, per;

    cout << "\nIngrese el largo: ";
    cin >> len;
    cout << "Ingrese el ancho: ";
    cin >> bre;

    per = 2 * (len + bre);
    cout << "\nPerimetro = " << per;
    cout << endl;
}

void rectangulo()
{
    Figura *rec[1];
    rec[0] = new Rectangulo("Rectangulo", 24, 14);
    rec[0]->Dibujar();

    cout << "\nArea y Perimetro de un Rectangulo";
    cout << "\n1 => Area" << endl;
    cout << "2 => Perimetro" << endl;
    int hallar;
    cout << "\nDigite la opcion: ";
    cin >> hallar;

    switch (hallar)
    {
    case 1:
        areaR();
        break;

    case 2:
        perimetroR();
        break;

    default:
        cout << "\nDigite el valor correcto." << endl;
        break;
    }
}

void areaC()
{
    float r, area;

    cout << "\nIngrese el radio del circulo: ";
    cin >> r;

    area = 3.14 * r * r;
    cout << "\nArea = " << area << endl;
}

void circulo()
{
    Figura *cir[1];
    cir[0] = new Circulo("Circulo", 14);
    cir[0]->Dibujar();

    cout << "\nHallar el area del circulo" << endl;
    areaC();
}

void figuras()
{
    int figura;

    cout << "\n1 => Triangulo" << endl;
    cout << "2 => Rectagunlo" << endl;
    cout << "3 => Circunferencia" << endl;

    cout << "\nDigite la opcion: ";
    cin >> figura;

    switch (figura)
    {
    case 1:
        triangulo();
        break;

    case 2:
        rectangulo();
        break;

    case 3:
        circulo();
        break;

    default:
        cout << "\nDigite el valor correcto." << endl;
        break;
    }
}

/* ****************** */
/*    FINAL PUNTO 2   */
/* ****************** */

/* ****************** */
/*       PUNTO 3      */
/* ****************** */

double vf, vp, n, i;

void futuro()
{
    cout << "\nDigite el valor presente: ";
    cin >> vp;
    cout << "Digite el valor del perido: ";
    cin >> n;
    cout << "Digite el valor del interes: ";
    cin >> i;

    vf = vp * pow((1 + i), n);

    cout << "\nEl valor futuro es: " << vf << endl;
}

void presente()
{
    cout << "\nDigite el valor futuro: ";
    cin >> vf;
    cout << "Digite el valor del periodo: ";
    cin >> n;
    cout << "Digite el valor del interes: ";
    cin >> i;

    vp = vf * pow((1 + i), -n);

    cout << "\nEl valor presente es: " << vp << endl;
}

void periodos()
{
    cout << "\nDigite el valor futuro: ";
    cin >> vf;
    cout << "Digite el valor del periodo: ";
    cin >> vp;
    cout << "Digite el valor del interes: ";
    cin >> i;

    n = log(vf / vp) / (log(1 + i));

    cout << "\nEl valor del periodo es: " << n << endl;
}

void interes()
{
    cout << "\nDigite el valor futuro: ";
    cin >> vf;
    cout << "Digite el valor presente: ";
    cin >> vp;
    cout << "Digite el valor del periodo: ";
    cin >> n;

    i = pow((vf / vp), 1 / n) - 1;

    cout << "\nEl valor del interes es: " << i << endl;
}

void funciones()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    int funcion, continuar;

    do
    {
        cout << "\n-- PRESTAMOS -- " << endl;

        cout << "\n1 => Valor futuro" << endl;
        cout << "2 => Valor presente" << endl;
        cout << "3 => Numero de periodos" << endl;
        cout << "4 => Intereses" << endl;

        cout << "\nDigite la opcion: ";
        cin >> funcion;

        switch (funcion)
        {
        case 1:
            futuro();
            break;
        case 2:
            presente();
            break;
        case 3:
            periodos();
            break;
        case 4:
            interes();
            break;

        default:
            cout << "\nDigite el valor correcto." << endl;
            break;
        }

        cout << "\nSi desea continuar digite 1: ";
        cin >> continuar;
    } while (continuar == 1);
}

/* ****************** */
/*    FINAL PUNTO 3   */
/* ****************** */

int main()
{
    int opcion, sw;

    do
    {
        cout << endl;
        cout << "-- UNIVERSIDAD DE CUNDINAMARCA -- " << endl;
        cout << "-------- PROGRAMACION 1 --------- " << endl;
        cout << "------ LUIGUI ROMERO 201N ------- " << endl;
        cout << "----------- PARCIAL 2 ----------- " << endl;
        cout << "---- NOTA APRECIATIVA => 4.8 ---- " << endl;

        cout << "\n1 => Clases padre e hijas" << endl;
        cout << "2 => Figuras geometricas" << endl;
        cout << "3 => Funciones y metodos" << endl;

        cout << "\nDigite la opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            persona();
            break;

        case 2:
            figuras();
            break;

        case 3:
            funciones();
            break;

        default:
            cout << "Digite la opcion correcta" << endl;
            break;
        }

        cout << "\nSi desea continuar presione 1." << endl;
        cout << "de lo contrario presione cualquier tecla: ";
        cin >> sw;
    } while (sw == 1);
}