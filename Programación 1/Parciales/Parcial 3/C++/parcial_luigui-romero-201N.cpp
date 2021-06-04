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
    int identificacion;
    string nombre, sexo;
    float estatura;

public:
    Persona(string, int, string, string, float);
    virtual void MostrarPersona();
};

class Estudiante : public Persona
{
private:
    int curso;
    double nota;

public:
    Estudiante(string, int, string, string, float, int, double);
    void MostrarPersona();
};

class Docente : public Persona
{
private:
    string materia;
    int categoria;

public:
    Docente(string, int, string, string, float, string, int);
    void MostrarPersona();
};

class Funcionario : public Persona
{
private:
    string cargo;
    double sueldo;

public:
    Funcionario(string, int, string, string, float, string, double);
    void MostrarPersona();
};

// Constructor
Persona::Persona(string _tipo, int _identificacion, string _nombre, string _sexo, float _estatura)
{
    tipo = _tipo;
    identificacion = _identificacion;
    nombre = _nombre;
    sexo = _sexo;
    estatura = _estatura;
}

Estudiante::Estudiante(string _tipo, int _identificacion, string _nombre, string _sexo, float _estatura, int _curso, double _nota) : Persona(_tipo, _identificacion, _nombre, _sexo, _estatura)
{
    curso = _curso;
    nota = _nota;
}

Docente::Docente(string _tipo, int _identificacion, string _nombre, string _sexo, float _estatura, string _materia, int _categoria) : Persona(_tipo, _identificacion, _nombre, _sexo, _estatura)
{
    materia = _materia;
    categoria = _categoria;
}

Funcionario::Funcionario(string _tipo, int _identificacion, string _nombre, string _sexo, float _estatura, string _cargo, double _sueldo) : Persona(_tipo, _identificacion, _nombre, _sexo, _estatura)
{
    cargo = _cargo;
    sueldo = _sueldo;
}

// Funciones (Herencia)
void Persona::MostrarPersona()
{
    cout << "\n"
         << tipo << endl;
    cout << "La identificacion es: " << identificacion << endl;
    cout << "El nombre es: " << nombre << endl;
    cout << "El sexo: " << sexo << endl;
    cout << "La estatura es: " << estatura << "cm" << endl;
}

void Estudiante::MostrarPersona()
{
    Persona::MostrarPersona();
    cout << "Su curso es: " << curso << endl;
    cout << "Su nota es: " << nota << endl;
}

void Docente::MostrarPersona()
{
    Persona::MostrarPersona();
    cout << "Su materia es: " << materia << endl;
    cout << "Categoria: " << categoria << endl;
}

void Funcionario::MostrarPersona()
{
    Persona::MostrarPersona();
    cout << "Su cargo es: " << cargo << endl;
    cout << "Su sueldo es: " << sueldo << endl;
}

// Funciones
void persona()
{
    Persona *per[4];

    // Los valores pueden cambiar
    per[0] = new Persona("Persona", 1072675034, "Luigi", "Hombre", 170);
    per[1] = new Estudiante("Estudiante", 1072675034, "Luigi", "Hombre", 170, 2, 4.4);
    per[2] = new Docente( "Docente", 1072675000, "Pedro", "Hombre", 180, "Programacion", 4);
    per[3] = new Funcionario("Funcionario", 1072670000, "Yesenia", "Mujer", 160, "Funcionaria publica", 4500000);

    per[0]->MostrarPersona();
    per[1]->MostrarPersona();
    per[2]->MostrarPersona();
    per[3]->MostrarPersona();
}

/* ****************** */
/*    FINAL PUNTO 1   */
/* ****************** */

/* ****************** */
/*       PUNTO 2      */
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
/*    FINAL PUNTO 2   */
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
        cout << "----------- PARCIAL 3 ----------- " << endl;
        cout << "---- NOTA APRECIATIVA => 4.4 ---- " << endl;

        cout << "\n1 => Clases padre e hijas" << endl;
        cout << "2 => Funciones financieras" << endl;

        cout << "\nDigite la opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            persona();
            break;

        case 2:
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