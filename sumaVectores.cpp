#include <iostream>

using namespace std; 

int main() {
    int vector[5] = {10,5,3,4,8};
    int suma = 0;

    for (int i = 0; i < 5; i++) {
        suma = suma + vector[i];
    }    

    cout << "Valor de la suma de vectores es: " << suma << endl;
}