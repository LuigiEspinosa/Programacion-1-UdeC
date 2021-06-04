#include <iostream>
#include <stdio.h>

using namespace std;

// Hacer un programa para sumas la diagonal de la matriz
int main ()
    {
        int matrizA[10][10], matrizB[10][10], matrizC[10][10], f, c, suma=0;

    cout << "\nDigite el número de filas de la matriz A: "; cin >> f;
    cout << "Digite el número de columnas de la matriz A: "; cin >> c;

    cout << "\nCargar la matriz A: " << endl;

    if (f == c)
    {
        for (int i = 0; i<f; i++)
        {
            for (int j= 0; j<c; j++)
            {
                cout <<"Digite los valoes matriz A [" << i << "][" << j << "]: ";
                cin >> matrizA[i][j];
            }
        }

        cout << "\nImprimir matriz A" << endl;
        for (int i = 0; i<f; i++)
        {
            for (int j= 0; j<c; j++)
            {
                cout << matrizA[i][j] << "\t";
            }

            cout<<endl;
        }

    cout << "\nSumar diagonal de la matriz" << endl;
    for (int i = 0; i<f; i++)
    {
        for (int j= 0;j<c;j++)
        {
            if (i == j)
            {
                suma = suma + matrizA[i][j];
            }
        }
    }

    cout << "\nLa suma de la diagonal de izquierda a derecha es: " << suma << endl;
    suma = 0;

    for (int i = 0; i<f; i++)
    {
        for (int j= 0;j<c;j++)
        {
            if ((i+j) == (f-1))
            {
                suma = suma+matrizA[i][j];
            }
        }
    }
    cout << "La suma de la diagonal de derecha a izquierda es: " << suma << endl;

    cout << "\nTraspuestaa de la matriz: "<<endl;
    for (int i = 0;i<f;i++)
    {
        for (int j= 0;j<c;j++)
        {
            cout << matrizA[j][i] << "\t";
        }
        cout << endl;
    }

    }
    else {
        cout<<"Las filas y las columnas deben ser iguales."<<endl;
    }
}