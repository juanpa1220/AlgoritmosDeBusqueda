//
// Created by Juan Pablo Martínez Brenes on 8/30/18.
//

#include "BusquedaSecuencial.h"

class BusquedaSecuencial {
private:
    int *arr;
    int num;
public:
    BusquedaSecuencial(int _arr[10], int _num) {
        arr = _arr;
        num = _num;
    }

    bool busquedaSecuencial() {
        for (int i = 0; i < 10; i++) {
            if (arr[i] == num) {
                return true;
            }
        }
        return false;
    }
};