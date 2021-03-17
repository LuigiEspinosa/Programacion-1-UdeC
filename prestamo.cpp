#include <iostream>
using namespace std; 

// Hallar las funciones financieras vf, vp, i, n
// vf => Valor futuro
// vp => Valor presente
// n  => Número de periodos
// i  => El interés

// Opción 1 vf -- Opción 2 vp -- Opción 3 Periodo -- Opción 4 Interés

double vf, vp, n, i;

void futuro()
{
    cout << "\nDigite el valor presente: "; cin >> vp;
    cout << "Digite el valor del perido: "; cin >> n;
    cout << "Digite el valor del interés: "; cin >> i;

    vf = vp * pow((1 + i), n);

    cout << "\nEl valor futuro es: " << vf << endl;
}

void presente()
{
    cout << "\nDigite el valor futuro: "; cin >> vf;
    cout << "Digite el valor del periodo: "; cin >> n;
    cout << "Digite el valor del interés: "; cin >> i;

    vp = vf * pow((1 + i), -n);

    cout << "\nEl valor presente es: " << vp << endl;
}

void periodos()
{
    cout << "\nDigite el valor futuro: "; cin >> vf;
    cout << "Digite el valor del periodo: "; cin >> vp;
    cout << "Digite el valor del interés: "; cin >> i;

    n = log(vf / vp) / (log(1 + i));

    cout << "\nEl valor del periodo es: " << n << endl;
}

void interes()
{
    cout << "\nDigite el valor futuro: "; cin >> vf;
    cout << "Digite el valor presente: "; cin >> vp;
    cout << "Digite el valor del periodo: "; cin >> n;

    i = pow((vf / vp), 1 / n) - 1;

    cout << "\nEl valor del interés es: " << i << endl;
}

int main() 
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    int opcion, sw;

    do 
    {
        cout << "-- PRESTAMOS -- " << endl;

        cout << "\n1 => Valor futuro" << endl;
        cout << "2 => Valor presente" << endl;
        cout << "3 => Número de periodos" << endl;
        cout << "4 => Intereses" << endl;

        cout << "\nDigite la opción: "; 
        cin >> opcion;

        switch (opcion)
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
        cin >> sw;
    } while (sw == 1);
}