#include <iostream>
#include <string.h>
using namespace std;

typedef struct
{
    int codigo_producto;
    string nombre;
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

    cout << "Digite el código del producto: ";
    cin >> producto.codigo_producto;
    fflush(stdin);

    cout << "Digite el nombre del producto: ";
    getline(cin, producto.nombre);

    cout << "Digite el precio del producto: ";
    cin >> producto.precio;

    cout << "Digite el valor del iva: ";
    cin >> producto.iva;

    fwrite(&producto, sizeof(tproducto), 1, arch);
    cout << "El registro fue grabado" << endl;

    fclose(arch);
}

int main()
{
    int opcion;

    do
    {
        cout << "1- Crear archivo" << endl;
        cout << "2- Insertar datos" << endl;
        cout << "3- Listar el archivo" << endl;
        cout << "4- Consultar un registro" << endl;
        cout << "5- Modificar registro" << endl;
        cout << "6- Borrar registro" << endl;
        cout << "Digite la opción: ";
        cin >> opcion;

        if (opcion == 1)
            Crear();
        else if (opcion == 2)
            Cargar();
    } while (opcion < 3);
}