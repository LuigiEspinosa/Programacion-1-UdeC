#include <iostream>
using namespace std;

int arraySortedOrNot(int arr[], int n)
{
	if (n == 1 || n == 0)
		return 1;

	if (arr[n - 1] < arr[n - 2])
		return 0;

	return arraySortedOrNot(arr, n - 1);
}

int main()
{
    int tamano;

    cout << "Tamaño del vector: ";
    cin >> tamano;
    cout << endl;

	int arr[tamano];
	int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < tamano; i++)
    {
        cout << "Valor del vector: ";
        cin >> arr[i];
    }

	if (arraySortedOrNot(arr, n))
		cout << "\nEstá ordenado de menor a mayor" << endl; 
	else
		cout << "\nNo está ordenado de menor a mayor" << endl;
}
