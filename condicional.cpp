#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Digite el valor de A: "; cin >> a;
    cout << "Digite el valor de B: "; cin >> b;

    if (a == b) {
        cout << "A y B son iguales" << endl;
    } else if (a < b) {
        cout << "B es mayor que A" << endl;
    } else {
        cout << "A es mayor que B" << endl;
    }
}