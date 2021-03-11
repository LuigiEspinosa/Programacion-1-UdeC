#include <iostream>
#include <stdio.h>

// Hacer un programa que nos diga la fecha dado un número de días
// Sabiendo que el año tiene 365 días y el mes 30 días
// Utilizando varibles de referencia

using namespace std;

void calcularFechaActual(int, int&, int&, int&);

int main()
{
    int totdias, anio, mes, dia;

    cout << "Digite eñ número total de días: ";
    cin >> totdias;

    calcularFechaActual(totdias, anio, mes, dia);
}

void calcularFechaActual(int totdias, int& anio, int& mes, int& dia)
{
    anio = totdias / 365;
    totdias %= 365; // Residuo modulo
    mes = totdias / 30;
    dia = totdias % 30;

    cout << "\nLa fecha es: " << (dia + 1) << " / " << (mes + 1) << " / " << (anio + 2000) << endl;
}