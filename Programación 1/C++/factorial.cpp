#include <iostream>

using namespace std; 

int main() {
    int n;
    double factorial = 1;

    cout << "\nDigite el valor de n para el factorial: ";
    cin >> n;
    cout << " " << endl;

    for (int i = 1; i <= n; i++) {
        factorial = factorial * i;

        cout << "El factorial es: " << factorial << endl;
    }
    
}