#include <iostream>
#include <random>
int main() {
    
    int pares = 0;
    int impares = 0;

     for (int i = 0; i < 500; ++i) {
        int valor = 50 + std::rand() % 51;  
        if (valor % 2 == 0) {
            ++pares;
        } else {
            ++impares;
        }
    }

    std::cout << "Valores pares: " << pares << std::endl;
    std::cout << "Valores impares: " << impares << std::endl;

    return 0;
}