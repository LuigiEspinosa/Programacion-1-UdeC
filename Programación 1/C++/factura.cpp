#include <iostream>
#include <string.h>

using namespace std; 

int main() {
    string vecnombre[] = {" ", "panela ", "leche ", "arroz ", "chocolate ", "café "};
    int precios[] = {0, 1000, 3100, 5000, 5500, 4500};
    int codigo, codigoaux, cantidad, va_factura=0, va_producto;

    cout << "\n****************************" << endl;
    cout << "****                    ****" << endl;
    cout << "**** FACTURA DE MERCADO ****" << endl;
    cout << "****                    ****" << endl;
    cout << "****************************\n" << endl;

    cout << "1 => Panela" << endl;
    cout << "2 => Leche" << endl;
    cout << "3 => Arroz" << endl;
    cout << "4 => Chocolate" << endl;
    cout << "5 => Café" << endl;
    cout << "\n0 => Salir" << endl;

    cout << "\nDigite el código del producto: ";
    cin >> codigo;
    codigoaux = codigo;

    if (codigo > 5) 
    {
        cout << "El producto no existe" << endl;
    }

    va_producto = precios[codigo];
    cantidad = 1;

    while (codigo > 0) 
    {
        cout << "Digite el código del producto: ";
        cin >> codigo;
        
        if (codigo < 6)
        {
            if (codigo == codigoaux)
            {
                va_producto = va_producto + precios[codigo];
                cantidad = cantidad + 1;
            } else 
            { 
                cout << vecnombre[codigoaux] << "\t" << cantidad << "\t" << va_producto << endl;
                va_factura = va_factura + va_producto;
                codigoaux = codigo;
                
                va_producto = precios[codigo];
                cantidad = 1;
            }
        } else 
        {
            cout << "El producto no existe" << endl;
        }
    }

    cout << "\nEL VALOR A PAGAR POR SUS COMPRAS ES: " << va_factura << endl;
}