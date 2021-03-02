#include <iostream>
#include <math.h>

using namespace std; 

int main() {
    int vec1[10], vec2[10], vec3[10];

    for (int i = 0; i < 10; i++) {
        cout << "Digite el valor " << (i + 1) << " del vector vec1: ";
        cin >> vec1[i];
    }

    cout << " " << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Digite el valor " << (i + 1) << " del vector vec2: ";
        cin >> vec2[i];
    }

    cout << "\nLa multiplicación de ambos vectores es:\n" << endl;

    for (int i = 0; i < 10; i++) {
        vec3[i] = pow((vec1[i]), (vec2[i]));

        if (i == 9) {
            cout << vec3[i] << endl;
        } else {
            cout << vec3[i] << ", ";
        }
    }
}