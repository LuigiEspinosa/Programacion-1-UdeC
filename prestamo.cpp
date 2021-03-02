#include <iostream>

using namespace std; 

// Hallar las funciones financieras vf, vp, i, n
// vf => Valor futuro
// vp => Valor presente
// n  => Número de periodos
// i  => El interés

// Opción 1 vf -- Opción 2 vp -- Opción 3 Periodo -- Opción 4 Interés

int main() {
    double vf, vp, n, i, opcion;
    int sw;

    do {
        cout << "-- PRESTAMOS -- " << endl;
        cout << "\n1 => Valor futuro" << endl;
        cout << "2 => Valor presente" << endl;
        cout << "3 => Número de periodos" << endl;
        cout << "4 => Intereses" << endl;
        cout << "\nDigite la opción: "; cin >> opcion;

        if (opcion == 1) {
            cout << "\nDigite el valor presente: "; cin >> vp;
            cout << "Digite el valor del perido: "; cin >> n;
            cout << "Digite el valor del interés: "; cin >> i;

            vf = vp * pow((1 + i), n);

            cout << "\nEl valor futuro es: " << vf << endl;
        } else if (opcion == 2) {
            cout << "\nDigite el valor futuro: "; cin >> vf;
            cout << "Digite el valor del periodo: "; cin >> n;
            cout << "Digite el valor del interés: "; cin >> i;

            vp = vf * pow((1 + i), -n);

            cout << "\nEl valor presente es: " << vp << endl;
        } else if (opcion == 3) {
            cout << "\nDigite el valor futuro: "; cin >> vf;
            cout << "Digite el valor del periodo: "; cin >> vp;
            cout << "Digite el valor del interés: "; cin >> i;

            n = log(vf / vp) / (log(1 + i));

            cout << "\nEl valor del periodo es: " << n << endl;
        } else if (opcion == 4) {
            cout << "\nDigite el valor futuro: "; cin >> vf;
            cout << "Digite el valor presente: "; cin >> vp;
            cout << "Digite el valor del periodo: "; cin >> n;

            i = pow((vf / vp), 1 / n) - 1;

            cout << "\nEl valor del interés es: " << i << endl;
        } else {
            cout << "\nDigite el valor correcto." << endl;
        }

        cout << "\nSi desea continuar digite 1: "; cin >> sw;
    } while (sw == 1);
}