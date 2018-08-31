#include <iostream>
#include "BusquedaSecuencial.cpp"
#include "BusquedaBinaria.cpp"
#include "BusquedaDeInterpolacion.cpp"

using namespace std;


int main() {
    int arr[10];
    int num;

    // recibe 10 numeros que forman el array
    cout << "Ingrese 10 numeros enteros en orden ascendente\n";
    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << i + 1 << ": ";
        int j;
        cin >> j;
        arr[i] = j;
    }

    // recibe el numero que se desea buscar
    cout << "Ingrese un numero que desee buscar entre los numeros accedidos: ";
    cin >> num;

    // busqueda secuencial
    BusquedaSecuencial b1 = BusquedaSecuencial(arr, num);

    if (b1.busquedaSecuencial()) {
        cout << "El numero fue encontrado mediante busqueda secuencial\n";
    } else {
        cout << "El numero no fue encontrado mediante busqueda secuencial\n";
    }

    // busqueda binaria
    BusquedaBinaria b2 = BusquedaBinaria(arr, num);

    if (b2.busquedaBinaria()) {
        cout << "El numero fue encontrado mediante busqueda binaria\n";
    } else {
        cout << "El numero no fue encontrado mediante busqueda binaria\n";
    }

    // busqueda de interpolacion
    BusquedaDeInterpolacion b3 = BusquedaDeInterpolacion(arr, num);

    if (b2.busquedaBinaria()) {
        cout << "El numero fue encontrado mediante busqueda de interpolacion\n";
    } else {
        cout << "El numero no fue encontrado mediante busqueda de interpolacion\n";
    }

    return 0;
}


