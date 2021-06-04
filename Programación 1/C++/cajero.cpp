#include <iostream>

using namespace std; 

// Hacer un programa para hacer lo que hace un cajero automático
// 1 => Consignación
// 2 => Retiro
// 3 => Consultar saldo

int main() {
    int opcion;
    int consignacion, retiro, saldo = 50000;

    cout << "-- CAJERO AUTOMÁTICO -- " << endl;
    cout << "\n1 => Consignación" << endl;
    cout << "2 => Retiro" << endl;
    cout << "3 => Consultar saldo" << endl;
    cout << "\nDigite la opción: "; cin >> opcion;

    if (opcion == 1) {
        cout << "\nDigite el valor de la consignación: "; cin >> consignacion;

        saldo = saldo + consignacion;
        
        cout << "\nEl nuevo saldo es: " << saldo << endl;
        cout << "Gracias por utilizar nuestros servicios." << endl;
    } else if (opcion == 2) {
        cout << "\nDigite el valor a retirar: "; cin >> retiro;

        if (saldo > (retiro + 4000)) {
            saldo = saldo - (retiro + 4000);

            cout << "\nEl nuevo saldo es: " << saldo << endl;
            cout << "Gracias por utilizar nuestros servicios." << endl;
        } else {
            cout << "\nSaldo insuficiente" << endl;
            cout << "Gracias por utilizar nuestros servicios." << endl;
        }
    } else if (opcion == 3) {
        cout << "\nEl saldo es: " << saldo << endl;
        cout << "Gracias por utilizar nuestros servicios." << endl;
    } else {
        cout << "\nLa opción digitada no es valida. " << endl;
        cout << "Gracias por utilizar nuestros servicios." << endl;
    }
}