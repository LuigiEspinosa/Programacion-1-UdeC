#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double b, h, r, resultado;
    double pi = 3.1416;
    int sw, opcion;

    do {
        cout << "\n******************************************" << endl;
        cout << "****                                  ****" << endl;
        cout << "****  Área y perímetro de una figura  ****" << endl;
        cout << "****                                  ****" << endl;
        cout << "******************************************\n" << endl;

        cout << "1 => Area de un triángulo" << endl;
        cout << "2 => Perímetro de la circunferencia" << endl;
        cout << "3 => Area de la circunferencia" << endl;

        cout << "\n¿Qué desea hacer?: "; cin >> opcion;
        
        if (opcion == 1) {
            cout << "\nDigite la base del triángulo: "; cin >> b;
            cout << "Digite la altura del triángulo: "; cin >> h;

            resultado = (b * h) / 2;

            cout << "\nEl area del triángulo es: " << resultado << endl;
        } else if (opcion == 2) {
            cout << "\nIngrese el radio de la circunferencia: "; cin >> r;

            resultado = 2 * (pi * r);

            cout << "\nEl perímetro de la circunferencia es: " << resultado << endl;
        } else if (opcion == 3) {
            cout << "\nIngrese el radio de la circunferencia: "; cin >> r;

            resultado = pi * pow(r, 2);

            cout << "\nEl área de la circunferencia es: " << resultado << endl;
        } else {
            cout << "\nDigite la opción correcta" << resultado << endl;
        }

        cout << "\nSi desea continuar escriba 1: "; cin >> sw;
    } while (sw == 1);
}