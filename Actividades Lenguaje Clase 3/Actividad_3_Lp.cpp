#include <iostream>
#include <cstdlib> 
int main() {
    double suma = 0.0;


    for (int i = 0; i < 10; ++i) {
        int valor = rand() % 100 + 1;  
        suma += valor;
    }

    double promedio = suma / 10.0;

    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Promedio: " << promedio << std::endl;

    return 0;
}
