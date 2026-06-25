#include <iostream>
using namespace std;

// Declaracion
float sumar (float x, float y) {
    return x + y;
}
float restar (float x, float y) {
    return x - y;
}
float multiplicar (float x, float y) {
    return x * y; 
}
float dividir (float x, float y) {
   if (y == 0) {
     cout << "No se puede dividir entre cero. ";
     return 0;
   }
   else return x / y;
}

// -----------------------------------

int main() {
    float num1, num2;
    int opcion; 

    cout << "=========== Menú ============\n";
    cout << "¿Qué operación desea ejecutar? \n";
    cout << "1. Suma\n";
    cout << "2. Resta \n";
    cout << "3. Multiplicación \n";
    cout << "4. División \n";
    cout << "---------------------------\n";
    cout << "Seleccione una opción (1-4): ";
    cin >> opcion;

    if (opcion >= 1 && opcion <= 4) {
        cout << "Ingrese el primer número: ";
        cin >> num1;
        cout << "Ingrese el segundo número: ";
        cin >> num2;
        
        cout << "=============================\n";
        
        switch (opcion) {
            case 1:
                cout << "El resultado de la suma es: " << sumar(num1, num2) << '\n';
                break;
            case 2:
                cout << "El resultado de la resta es: " << restar(num1, num2) << '\n';
                break;
            case 3:
                cout << "El resultado de la multiplicación es: " << multiplicar(num1, num2) << '\n';
                break;
            case 4:
                cout << "El resultado de la división es: " << dividir(num1, num2) << '\n';
                break;
        }
    }
    else {
        cout << "Opción no válida. Por favor, intente de nuevo.\n";
    }

    return 0;
}