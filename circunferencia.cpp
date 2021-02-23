#include <iostream>

using namespace std;

int main() {
    float r, a, p;
    int sw, option;

    // El valor de pi se calcula usando la función acos() 
    // Esta función devuelve un valor numerico entre [-n, n]
    // acos(0.0) imprimirá el valor de pi / 2. 
    // Por lo tanto la función será: 
    double pi = 2 * acos(0.0);

    do {
        cout << "\n************************************************" << endl;
        cout << "****                                        ****" << endl;
        cout << "**** Área y perímetro de una circunferencia ****" << endl;
        cout << "****                                        ****" << endl;
        cout << "************************************************\n" << endl;

        cout << "1 => Area de una circunferencia" << endl;
        cout << "2 => Perímetro de una circunferencia" << endl;
        cout << "3 => Ambos" << endl;

        cout << "\n¿Qué desea hacer?: "; cin >> option;
        
        cout << "\nIngrese el radio de la circunferencia: "; cin >> r;

        switch (option) {
            case 1:
                a = pi * r * r;

                cout << "\nEl área de la circunferencia es: " << a << endl;
                break;
            case 2:
                p = 2 * pi * r;

                cout << "\nEl perímetro de la circunferencia es: " << p << endl;
                break;
            case 3:
                a = pi * r * r;
                p = 2 * pi * r;

                cout << "\nEl área de la circunferencia es: " << a << endl;
                cout << "El perímetro de la circunferencia es: " << p << endl;
                break;
            default:
                cout << "\nOpción no disponible." << endl;
                break;
        }

        cout << "\nSi desea continuar escriba 1: "; cin >> sw;
    } while (sw == 1);
    
    cout << "Gracias. Vuelva pronto!\n" << endl;
}