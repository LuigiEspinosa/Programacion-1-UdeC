#include <iostream>

using namespace std; 

int main() {
    int vector[10], suma = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Digite los valores del vector: ";
        cin >> vector[i];
        
        suma = suma + vector[i];
    }

    cout << "\nValor de la suma de vectores es: " << suma << endl;
}