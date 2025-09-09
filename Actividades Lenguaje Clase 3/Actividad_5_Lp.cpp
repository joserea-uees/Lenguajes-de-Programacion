#include <iostream>
using namespace std;

int main() {
    int sucursales[25];
    int ventas[25] = {5000, 7500, 3200, 8900, 4500, 6700, 7800, 2300, 9100, 5600,
                       4300, 8200, 6900, 3400, 8700, 5100, 7600, 2900, 9400, 6100,
                       4800, 8500, 7200, 3900, 8800};

    for (int i = 0; i < 25; i++) {
        sucursales[i] = i + 1;
    }

    double suma = 0;
    for (int i = 0; i < 25; i++) {
        suma += ventas[i];
    }

    double promedio = suma / 25;
    cout << "Promedio de ventas: " << promedio << endl;

    cout << "3 sucursales con ventas mayores al promedio:" << endl;
    int contador = 0;
    for (int i = 0; i < 25; i++) {
        if (ventas[i] > promedio) {
            cout << "Sucursal: " << sucursales[i] << " con ventas $" << ventas[i] << endl;
            contador++;
            if (contador == 3)
                break;
        }
    }

    return 0;
}
