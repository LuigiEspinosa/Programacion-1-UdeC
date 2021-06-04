#include <iostream>

using namespace std;

int main() {
    int t1 = 0, t2 = 1, st = 0, n, sw;

    do {
        cout << "\nIngrese el número de terminos: ";
        cin >> n;

        if (n >= 1) {
            cout << "\nSerie de Fibonacci: ";

            for (int i = 1; i <= n; ++i) {
                st = t1 + t2;
                t1 = t2;
                t2 = st;

                if (i != n) {
                    if (i == 1) {
                        cout << t1 << ", ";
                        continue;
                    }

                    if (i == 2) {
                        cout << t2 << ", ";
                        continue;
                    }
                    
                    cout << st << ", ";
                } else {
                    cout << st << endl;
                }
            }
        } else {
            cout << "\nEl valor no puede ser negativo, ni el número 0" << endl;
        } 

        cout << "\nSi desea continuar, digite 1: ";
        cin >> sw;
    } while (sw == 1);
}