#include <iostream>
#include <math.h>
using namespace std;

// Parcial 1 - Luigui Romero 201N

void numeroMayor()
{
    float n[3];

    cout << "\n¿Cuál es el número mayor?" << endl;
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Ingresa un número: ";
        cin >> n[i];
    }

    if(n[0] >= n[1] && n[0] >= n[2])
        cout << "\nNúmero mayor: " << n[0] << endl;

    if(n[1] >= n[0] && n[1] >= n[2])
        cout << "\nNúmero mayor: " << n[1] << endl;
    
    if(n[2] >= n[0] && n[2] >= n[1])
        cout << "\nNúmero mayor: " << n[2] << endl;
}

void cajero()
{
    int opcion, consignacion, retiro, saldo = 50000;

    cout << "-- CAJERO AUTOMÁTICO -- " << endl;

    cout << "\n1 => Consignación" << endl;
    cout << "2 => Retiro" << endl;
    cout << "3 => Consultar saldo" << endl;

    cout << "\nDigite la opción: "; 
    cin >> opcion;

	switch (opcion)
	{
		case 1:
			cout << "Digite el valor de la consignación: ";
            cin >> consignacion;

            saldo = saldo + consignacion;

            cout << "\nEl nuevo saldo es: " << saldo << endl;
            cout << "Gracias por utilizarnos!" << endl;
			break;

		case 2: 
			cout << "Digite el valor del retiro: ";
            cin >> retiro;

            if (saldo > (retiro + 9000))
            {
                saldo -= (retiro + 4000);
                
                cout << "\nEl nuevo saldo es: " << saldo << endl;
                cout << "Gracias por utilizarnos!" << endl;
            }
			break;

		case 3:
			cout << "\nSu saldo es: " << saldo << endl;
	        cout << "Gracias por utilizarnos!" << endl;
			break;
		
		default:
			cout << "Opción incorrecta" << saldo << endl;
			cout << "Gracias por utilizarnos!" << endl;
			break;
	}
}

// Parcial 1 - Luigui Romero 201N

void raizCuadratica()
{
    double b, a, c, x1, x2, raiz, uni;

    cout << "\nDigite el valor de b: "; cin >> b;
    cout << "Digite el valor de a: "; cin >> a;
    cout << "Digite el valor de c: "; cin >> c;

    raiz = sqrt(pow(b, 2) - (4 * (a * c)));

    if (raiz > 0) 
    {
        x1 = (-b - raiz) / (2 * a);
        x2 = (-b + raiz) / (2 * a);

        cout << "\nEl valor de la raiz x1 es: " << x1 << endl;
        cout << "El valor de la raiz x2 es: " << x2 << endl;
    } 
    else if (raiz == 0) 
    {
        uni = -b / (2 * a);

        cout << "\nLa raiz es única: " << uni << endl;
    } 
    else 
    {
        cout << "\nLa raiz es imaginaria" << endl;
    }
}

void numeroPar()
{
    int a;

    cout << "\nIngrese un número: ";
    cin >> a;

    if (a % 2 == 0)
    {
        cout << "\nEl número es par." << endl;
    }
    else
    {
        cout << "\nEl número es impar" << endl;
    }
}

void potencia()
{
    float numero, potencia;

    cout << "\nDigite el número de la base: ";
    cin >> numero;

    cout << "Digite el número de la potencia: ";
    cin >> potencia;

    cout << "\nEl valor de " << numero << " a la potencia " << potencia << " es: " << pow(numero, potencia) << endl;
}

// Parcial 1 - Luigui Romero 201N

void fibonacci()
{
    int t1 = 0, t2 = 1, st = 0, n;

    cout << "\nIngrese el número de terminos: ";
    cin >> n;

    if (n >= 1) 
    {
        cout << "\nSerie de Fibonacci: ";

        for (int i = 1; i <= n; ++i) {
            st = t1 + t2;
            t1 = t2;
            t2 = st;

            if (i != n) {
                if (i == 1) 
                {
                    cout << t1 << ", ";
                    continue;
                }

                if (i == 2) 
                {
                    cout << t2 << ", ";
                    continue;
                }
                
                cout << st << ", ";
            } 
            else 
            {
                cout << st << endl;
            }
        }
    } 
    else 
    {
        cout << "\nEl valor no puede ser negativo, ni el número 0" << endl;
    } 
}

void vectores()
{
    int opcion;
    int vec1[10], vec2[10], vec3[10], suma = 0;

    cout << "\n-- VECTORES -- " << endl;

    cout << "\n1 => Sumar" << endl;
    cout << "2 => Multiplicar" << endl;
    cout << "3 => Ordenar" << endl;

    cout << "\nDigite la opción: "; 
    cin >> opcion;

    if (opcion == 1 || opcion == 2)
    {
        cout << endl;

        for (int i = 0; i < 10; i++) 
        {
            cout << "Digite el valor " << (i + 1) << " del vector vec1: ";
            cin >> vec1[i];
        }

        cout << endl;
    }

    if (opcion == 1)
    {
        for (int i = 0; i < 10; i++) 
        {
            suma = suma + vec1[i];
        }

        cout << "\nLa suma del vector es: " << suma << endl;
    }
    else if (opcion == 2)
    {
        for (int i = 0; i < 10; i++) 
        {
            cout << "Digite el valor " << (i + 1) << " del vector vec2: ";
            cin >> vec2[i];
        }

        cout << "\nLa multiplicación de ambos vectores es:\n" << endl;

        for (int i = 0; i < 10; i++) 
        {
            vec3[i] = vec1[i] * vec2[i];

            if (i == 9)
                cout << vec3[i] << endl;
            else
                cout << vec3[i] << ", ";
        }
    }
    else if (opcion == 3)
    {
        // Parcial 1 - Luigui Romero 201N

        int tamano, aux;

        cout << "\nTamaño del vector: ";
        cin >> tamano;
        cout << endl;

        int arr[tamano];

        for(int i = 0; i < tamano; i++) 
        { 
            cout << "Valor del vector " << (i + 1) << " es: ";
            cin >> arr[i];
        }

        for(int i = 0; i < (tamano - 1); i++)
        {
            for(int j = 0; j < (tamano - 1); j++) 
            {
                if(arr[j] > arr[j + 1])
                {
                    aux = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = aux;
                }
            }
        }

        cout << "\nEl vector ordenado es: "<<endl;
        cout << endl;

        for(int i=0; i < tamano; i++)
        {
            if (i == (tamano - 1))
                cout << arr[i] << endl;
            else
                cout << arr[i] << ", ";
        }
    }
    else
    {
        cout << "Digite la opción correcta" << endl;
    }
}

void tablas()
{
    int opcion;
    int matrizA[10][10], matrizB[10][10], matrizC[10][10], f, c, suma = 0;

    cout << "\n-- TABLAS -- " << endl;

    cout << "\n1 => Sumar" << endl;
    cout << "2 => Multiplicar" << endl;
    cout << "3 => Suma de la Diagonal" << endl;

    cout << "\nDigite la opción: "; 
    cin >> opcion;

    do {
        cout << "\nDigite el número de filas: "; cin >> f;
        cout << "Digite el número de columnas: "; cin >> c;

        if (f != c)
            cout << "\nLas filas y columnas deben ser iguales" << endl;
    } while (f != c);

    cout << "\nCargar la matriz A: " << endl;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Digite los valores de la matriz A [" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }

    // Parcial 1 - Luigui Romero 201N

    cout << "\nImprimir matriz A: " << endl;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "\t[ " << matrizA[i][j] << " ] ";
        }
        cout << endl;
    }

    if (!(opcion == 3))
    {
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
    }

    switch (opcion)
    {
    case 1:
        cout << "\nSumar la matriz A y la matriz B" << endl;
        for (int i = 0; i < f; i++)
        {
            for (int j = 0; j < c; j++)
            {
                matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
            }
        }
        break;
    
    case 2:
        cout << "\nMultiplicar la matriz A y la matriz B" << endl;
        for (int i = 0; i < f; i++) 
        {
            for(int j = 0; j < c; j++) 
            {
                matrizC[i][j] = 0;
                
                for(int k = 0; k < c; k++) 
                {
                    matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
                }
            }

            // Parcial 1 - Luigui Romero 201N
        }
        break;

    case 3:
        cout << "\nSumar diagonal de la matriz" << endl;
        for (int i = 0; i<f; i++)
        {
            for (int j= 0;j<c;j++)
            {
                if (i == j)
                {
                    suma += matrizA[i][j];
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
                    suma += matrizA[i][j];
                }
            }
        }
        cout << "La suma de la diagonal de derecha a izquierda es: " << suma << endl;

        cout << "\nTraspuesta de la matriz: " << endl;
        for (int i = 0;i<f;i++)
        {
            for (int j= 0;j<c;j++)
            {
                cout << "\t[ " << matrizA[j][i] << " ] ";
            }
            cout << endl;
        }
        break;
    
    default:
        cout << "Digite la opción correcta" << endl;
        break;
    }

    if (opcion != 3)
    {
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
}

int main()
{
    int opcion, sw;

 	do
    {
        cout << endl;
        cout << "-- UNIVERSIDAD DE CUNDINAMARCA -- " << endl;
        cout << "-------- PROGRAMACIÓN 2 --------- " << endl;
        cout << "------ LUIGUI ROMERO 201N ------- " << endl;
        cout << "----------- PARCIAL 1 ----------- " << endl;

        cout << "\n1 => Número mayor entre tres números" << endl;
        cout << "2 => Cajero" << endl;
        cout << "3 => Raíz cuadrática" << endl;
        cout << "4 => Número par o impar" << endl;
        cout << "5 => Potencia" << endl;
        cout << "6 => Fibonacci" << endl;
        cout << "7 => Sumar, multiplicar y ordenar vectores" << endl;
        cout << "8 => Diagonal, sumar y multiplicar tablas" << endl;

        cout << "\nDigite la opción: "; 
        cin >> opcion;

        switch (opcion)
        {
            case 1:
                numeroMayor();
                break;
            
            case 2:
                cajero();
                break;

            case 3:
                raizCuadratica();
                break;

            case 4:
                numeroPar();
                break;

            case 5:
                potencia();
                break;

            case 6:
                fibonacci();
                break;

            case 7:
                vectores();
                break;

            case 8:
                tablas();
                break;

            // Parcial 1 - Luigui Romero 201N
            
            default:
                cout << "Digite la opción correcta" << endl;
                break;
        }

        cout << "\nSi desea continuar presione 1." << endl;
        cout << "de lo contrario presione cualquier tecla: ";
        cin >> sw;
    } while (sw == 1);
}

// Parcial 1 - Luigui Romero 201N