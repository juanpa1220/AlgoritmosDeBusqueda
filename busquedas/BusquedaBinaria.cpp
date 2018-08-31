//
// Created by Juan Pablo Martínez Brenes on 8/30/18.
//

#include "BusquedaBinaria.h"


class BusquedaBinaria {
private:
    int *arr;
    int num;
public:
    BusquedaBinaria(int _arr[10], int _num) {
        arr = _arr;
        num = _num;
    }

    bool busquedaBinaria() {
        int primero = 0;
        int ultimo = sizeof(arr);
        while (primero <= ultimo) {
            int mitad = (primero + ultimo) / 2;
            if (arr[mitad] == num) {
                return true;
            }
            if (arr[mitad] > num) {
                ultimo = mitad;
            }
            if (arr[mitad] < num) {
                primero = mitad;
            } else {
                return false;
            }
        }


        return false;
    }
};