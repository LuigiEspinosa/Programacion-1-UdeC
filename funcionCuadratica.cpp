#include <iostream>
#include <math.h>

using namespace std; 

int main() {
    double b, a, c, x1, x2, raiz, uni;

    cout << "Digite el valor de b: "; cin >> b;
    cout << "Digite el valor de a: "; cin >> a;
    cout << "Digite el valor de c: "; cin >> c;

    raiz = sqrt(pow(b, 2) - (4 * (a * c)));

    if (raiz > 0) {
        x1 = (-b - raiz) / (2 * a);
        x2 = (-b + raiz) / (2 * a);

        cout << "\nEl valor de la raiz x1 es: " << x1 << endl;
        cout << "El valor de la raiz x2 es: " << x2 << endl;
    } else if (raiz == 0) {
        uni = -b / (2 * a);

        cout << "\nLa raiz es única: " << uni << endl;
    } else {
        cout << "\nLa raiz es imaginaria" << endl;
    }
}