#include <stdlib.h>
using namespace std;

void Reporte()
{
    int codigoaux, nroart, nroarcto = 0;
    float valorventart, valorfactura = 0, iva, iva1, totiva = 0, preciouni;
    char nombreartaux[20];
    tproducto producto;

    cout << "Nombre colsubsidio \t"
         << "Nit \t"
         << "890450312" << endl;
    cout << "Estadisticas de la venta de productos" << endl;
    cout << "cod prod \t"
         << "nomb prod \t"
         << "Precio uni \t"
         << "nro prod \t"
         << "val_art \t"
         << "iva prod \t" << endl;

    fread(&producto, sizeof(tproducto), 1, arch);
    codigoaux = producto.codigo_producto;
    strcpy(nombreartaux, producto.nombre);
    valorventart = producto.precio;
    preciouni = producto.precio;
    nroart = 1;
    iva = producto.iva;

    while (!feof(arch))
    {
        fread(&producto, sizeof(tprodcuto), 1, arch);
        if (!feof(arch))
        {
            if (codigoaux == producto.codigo_producto)
            {
                valorventart = valorventart + producto.precio;
                nroart = nroart + 1;
            }
            else
            {
                iva1 = valorventart * iva;

                cout << codigoaux << "\t"
                     << nombreartaux << "\t"
                     << preciouni << "\t"
                     << nroart << "\t"
                     << valorventart << "\t"
                     << iva1 << endl;

                valorfactura += valorventart;
                nroarcto += nroart;
                totiva += iva1;

                strcpy(nombreartaux, producto.nombre);
                valorventart = producto.precio;
                preciouni = producto.precio;
                nroart = 1;
            }
        }
    }
}