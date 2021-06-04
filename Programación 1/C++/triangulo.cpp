#include <iostream>

using namespace std; 

int main() {
    int l1, l2, l3;

    cout << "¿Qué tipo de triángulo es?\n" << endl;

    cout << "Digite el valor del lado 1: "; cin >> l1;
    cout << "Digite el valor del lado 2: "; cin >> l2;
    cout << "Digite el valor del lado 3: "; cin >> l3;

    if ((l1 == l2) && (l1 == l3)) {
        cout << "\nEl triángulo es Equilatero" << endl;
    } else if ((l1 == l2) || (l2 == l3) || (l1 == l3)) {
        cout << "\nEl triángulo es Isoceles" << endl;
    } else {
        cout << "\nEl triángulo es Escaleno" << endl;
    }
}