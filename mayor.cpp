#include <iostream>

using namespace std;

// Dado 3 números, decir cuál es el número mayor

int main() {
    int n1, n2, n3;

    cout << "¿Cuál es el número mayor?\n" << endl;

    cout << "Digite el número N1: "; cin >> n1;
    cout << "Digite el número N2: "; cin >> n2;
    cout << "Digite el número N3: "; cin >> n3;

    if ((n1 > n2) && (n1 > n3)) {
        cout << "\nEl número mayor es n1: " << n1 << endl;
    } else if (n2 > n3) {
        cout << "\nEl número mayor es n2: " << n2 << endl;
    } else {
        cout << "\nEl número mayor es n3: " << n3 << endl;
    }
}