#include <iostream>

using namespace std;

// --- Declaración de Funciones ---
float sumar(float a, float b) {
    return a + b;
}

float restar(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    if (b == 0) {
        cout << "No se puede dividir entre cero." << '\n';
        return 0; 
    }
    return a / b;
}

// ----------------------------------------------
int main() {
    float num1, num2;

    cout << "=== CALCULADORA BASICA ===" << '\n';
    
    // Introducie datos
    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;

    cout << "\n--- Resultados ---" << '\n';
    
   // Resultados
    cout << "Suma: " << num1 << " + " << num2 << " = " << sumar(num1, num2) << '\n';
    cout << "Resta: " << num1 << " - " << num2 << " = " << restar(num1, num2) << '\n';
    cout << "Multiplicacion: " << num1 << " * " << num2 << " = " << multiplicar(num1, num2) << '\n';
    

    if (num2 != 0) {
        cout << "Division: " << num1 << " / " << num2 << " = " << dividir(num1, num2) << '\n';
    } else {
        dividir(num1, num2); 
    }

    return 0;
}