#include <iostream>
#include <string.h>
using namespace std;

typedef struct
{
    int codigo_producto;
    char nombre[20];
    float precio, iva;
} tproducto;

void Crear()
{
    FILE *arch; // Archivo lógico
    arch = fopen("producto.dat", "wb");

    if (arch == NULL)
        exit(1);

    fclose(arch);
}

void Cargar()
{
    FILE *arch; // Archivo lógico
    arch = fopen("producto.dat", "ab");

    if (arch == NULL)
        exit(1);

    tproducto producto; // basar una estructura en otra

    cout << "\nDigite el código del producto: ";
    cin >> producto.codigo_producto;
    fflush(stdin);

    cout << "Digite el nombre del producto: ";
    cin.getline(producto.nombre, 20, '\n');

    cout << "Digite el precio del producto: ";
    cin >> producto.precio;

    cout << "Digite el valor del iva: ";
    cin >> producto.iva;

    fwrite(&producto, sizeof(tproducto), 1, arch);
    cout << "El registro fue grabado" << endl;

    fclose(arch);
}

void Listar()
{
    FILE *arch;
    arch = fopen("producto.dat", "rb");

    if (arch == NULL)
        exit(1);

    tproducto producto;
    cout << "\nCódigo\t"
         << "Nombre\t"
         << "Precio\t"
         << "Iva" << endl;

    fread(&producto, sizeof(tproducto), 1, arch);

    while (!feof(arch))
    {
        cout << producto.codigo_producto << "\t"
             << producto.nombre << "\t"
             << producto.precio << "\t"
             << producto.iva << endl;
        fread(&producto, sizeof(tproducto), 1, arch);
    }

    fclose(arch);
}

void Consultar()
{
    FILE *arch;
    arch = fopen("producto.dat", "rb");

    if (arch == NULL)
        exit(1);

    tproducto producto;
    int codigo, existe = 0;
    cout << "\nDigite el cósigo del producto a consultar: ";
    cin >> codigo;
    cout << endl;

    fread(&producto, sizeof(tproducto), 1, arch);

    while (!feof(arch))
    {
        if (codigo == producto.codigo_producto)
        {
            cout << "\nCódigo\t"
                 << "Nombre\t"
                 << "Precio\t"
                 << "Iva" << endl;

            cout << producto.codigo_producto << "\t"
                 << producto.nombre << "\t"
                 << producto.precio << "\t"
                 << producto.iva << endl;

            existe = 1;
            break;
        }

        fread(&producto, sizeof(tproducto), 1, arch);
    }

    if (existe == 0)
        cout << "El registro consultado no existe" << endl;

    fclose(arch);
}

int main()
{
    int opcion;

    do
    {
        cout << "\n¿Qué desea hacer?" << endl;
        cout << "===================" << endl;
        cout << endl;

        cout << "1- Crear archivo" << endl;
        cout << "2- Insertar datos" << endl;
        cout << "3- Listar el archivo" << endl;
        cout << "4- Consultar un registro" << endl;
        cout << "5- Modificar registro" << endl;
        cout << "6- Borrar registro" << endl;
        cout << "7- Salir" << endl;

        cout << "\nDigite la opción: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            Crear();
            break;
        case 2:
            Cargar();
            break;
        case 3:
            Listar();
            break;
        case 4:
            Consultar();
            break;

        default:
            break;
        }
    } while (opcion != 7);
}