#include <iostream>
#include <stdio.h>

using namespace std; 

int main()
{
    int matrizA[10][10], matrizB[10][10], matrizC[10][10], f, c;

    cout << "Digite el número de filas: "; cin >> f;
    cout << "Digite el número de columnas: "; cin >> c;

    cout << "\nCargar la matriz A: " << endl;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Digite los valores de la matriz A [" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    cout << "\nImprimir matriz A: " << endl;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "\t[ " << matrizA[i][j] << " ] ";
        }
        cout << endl;
    }

    cout << "\nCargar la matriz B: " << endl;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Digite los valores de la matriz B [" << i << "][" << j << "]: ";
            cin >> matrizB[i][j];
        }
    }

    cout << "\nImprimir matriz B: " << endl;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "\t[ " << matrizB[i][j] << " ] ";
        }
        cout << endl;
    }

    cout << "\nSumar la matriz A y la matriz B" << endl;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    cout << "\nResultado: " << endl;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "\t[ " << matrizC[i][j] << " ] ";
        }
        cout << endl;
    }
}