#include <iostream>
using namespace std;

int main() {
    double temp;
    int opcion;

    cout << "Ingrese la temperatura: ";
    cin >> temp;

    cout << "Seleccione la unidad de origen:" << endl;
    cout << "1. Celsius" << endl;
    cout << "2. Fahrenheit" << endl;
    cout << "3. Kelvin" << endl;
    cin >> opcion;

    switch(opcion) {
        case 1: // Celsius
            cout << "Celsius: " << temp << endl;
            cout << "Fahrenheit: " << (temp * 9/5) + 32 << endl;
            cout << "Kelvin: " << temp + 273.15 << endl;
            break;
        case 2: // Fahrenheit
            cout << "Fahrenheit: " << temp << endl;
            cout << "Celsius: " << (temp - 32) * 5/9 << endl;
            cout << "Kelvin: " << ((temp - 32) * 5/9) + 273.15 << endl;
            break;
        case 3: // Kelvin
            cout << "Kelvin: " << temp << endl;
            cout << "Celsius: " << temp - 273.15 << endl;
            cout << "Fahrenheit: " << ((temp - 273.15) * 9/5) + 32 << endl;
            break;
        default:
            cout << "Opción inválida." << endl;
    }

    return 0;
}