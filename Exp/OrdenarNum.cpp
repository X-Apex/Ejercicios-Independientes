#include <iostream>

int main() {
    int tamano;

    std::cout << "¿Cuantos numeros vas a ingresar?: ";
    std::cin >> tamano;

    int arreglo[tamano];

    std::cout << "Ingrese los " << tamano << " numeros:\n";
    for (int i = 0; i < tamano; i++) {
        std::cout << "Numero [" << i + 1 << "]: ";
        std::cin >> arreglo[i];
    }

    for (int i = 0; i < tamano - 1; i++) {
        for (int j = 0; j < tamano - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                int auxiliar = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = auxiliar;
            }
        }
    }

    std::cout << "\nAscendente: [";
    for (int i = 0; i < tamano; i++) {
        std::cout << arreglo[i];
        if (i < tamano - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]";

    for (int i = 0; i < tamano - 1; i++) {
        for (int j = 0; j < tamano - i - 1; j++) {
            if (arreglo[j] < arreglo[j + 1]) {
                int auxiliar = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = auxiliar;
            }
        }
    }

    std::cout << "\nDescendente: [";
    for (int i = 0; i < tamano; i++) {
        std::cout << arreglo[i];
        if (i < tamano - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]";

    std::cout << std::endl;
    return 0;
}