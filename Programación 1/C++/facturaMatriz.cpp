#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

string producto[] = {" ", "Cafe ", "Chocolate ", "Arroz ", "Leche ", "Azucar "};

float precio[6][3] = {
    0, 0, 0,
    1, 5000, 0,
    2, 5500, 0.01,
    3, 10000, 0,
    4, 3100, 0.02,
    5, 4000, 0
};

int codigo, codigoaux, cantidad;
float iva, tot_iva = 0, va_factura = 0, va_producto;

int main()
{
    cout << "\n****************************" << endl;
    cout << "****                    ****" << endl;
    cout << "**** FACTURA DE MERCADO ****" << endl;
    cout << "****                    ****" << endl;
    cout << "****************************\n" << endl;

    cout << "1 => Café" << endl;
    cout << "2 => Chocolate" << endl;
    cout << "3 => Arroz" << endl;
    cout << "4 => Leche" << endl;
    cout << "5 => Azucar" << endl;
    cout << "\n0 => Salir" << endl;

    cout << "Digite el código del producto: ";
    cin >> codigo;

    va_producto = precio[codigo][1];
    cantidad = 1;
    codigoaux = codigo;

    while (codigo > 0)
    {
        cout << "Digite el código del producto: ";
        cin >> codigo;

        if (codigoaux == codigo)
        {
            va_producto += precio[codigo][1];
            cantidad += 1;
        }
        else
        {
            iva = va_producto * precio[codigoaux][2];

            cout << producto[codigoaux] << "\t" << cantidad << "\t" << precio[codigoaux][1] << "\t" << va_producto << "\t" << iva << endl;

            va_factura += va_producto;
            tot_iva += iva;
            va_producto = precio[codigo][1];
            codigoaux = codigo;
            cantidad = 1;
        }
    }

    cout << "\nEl valor de la factura es: " << va_factura << "\t" << "Total Iva: " << tot_iva << endl;
    cout << "El valor real de venta es: " << (va_factura - tot_iva) << endl;
}
