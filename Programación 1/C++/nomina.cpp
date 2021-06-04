#include <iostream>
#include <iomanip>

using namespace std; 

int main() {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    double vecrete[8] = {0, 3600001, 3800001, 4000001, 4600001, 500001, 5800001, 10000001};
    double vecporcen[8] = {0, 0.01, 0.05, 0.08, 0.10, 0.13, 0.17, 0.20};
    double subtrans, retencion, fondosol, ss, pension, totdes, totneto, totdev;
    double horasnoct, horasdomi, horasndomi, valorhora, valorhoranoct, valorhoradomi;
    int cedula, sueldo, sueldo1;

    cout << "\nLa identificación: ";
    cin >> cedula; 

    cout << "Sueldo: ";
    cin >> sueldo;

    cout << "Digite el número de horas nocturnas: ";
    cin >> horasnoct; 

    cout << "Digite el número de horas dominicales: ";
    cin >> horasdomi;

    valorhora = sueldo / 192;
    valorhoranoct = (horasnoct * valorhora) * 135/100;
    valorhoradomi = (horasndomi * valorhora) * 200/100;

    sueldo1 = sueldo + valorhoranoct + valorhoradomi;

    if (sueldo >= 908000)
    {
        // Subsidio de transporte
        if (sueldo  <= 1816000) 
        {
            subtrans = 100000;
        } else 
        {
            subtrans = 0;
        }

        // Calculo de la retención
        for (int i = 0; i < 8; i++)
        {
            if ((sueldo1 > vecrete[i]) && (sueldo1 < vecrete[i + 1]))
            { 
                retencion = sueldo1 * vecporcen[i];
            }
        }

        // Fondo de soliraridad
        if (sueldo >= 3632000)
        {
            if((sueldo >= 3632000) && (sueldo <= 4832000))
            {
                fondosol = sueldo * 0.01;
            } else 
            { 
                fondosol = sueldo * 0.015;
            }
        } else 
        { 
            fondosol = 0;
        }

        ss = sueldo1 * 0.04;
        pension = sueldo1 * 0.04;
        totdes = retencion + ss + pension;
        totdev = sueldo + subtrans;
        totneto = totdev - totdes;

        cout << "\nLa identificación de funcionario: " << cedula << endl;
        cout << "El sueldo es:                     : " << sueldo << endl;
        cout << "El subsidio de transporte es      : " << subtrans << endl;
        cout << "Retención en la fuente:           : " << retencion << endl;
        cout << "Seguridad social                  : " << ss << endl;
        cout << "Pensión                           : " << pension << endl;
        cout << "Total descuentos                  : " << totdes << endl;
        cout << "Total devengado                   : " << totdev << endl;
        cout << "Total neto a pagar                : " << totneto << endl;
    } else 
    {
        cout << "El sueldo debe ser mayor o igual al $908.000" << endl;
    }
}