#include <iostream>

using namespace std;

// Función para convertir dólares a euros
double dolaresAEuros(double dolares) {
    const double tipoCambio = 0.85;
    return dolares * tipoCambio;
}

// Función para convertir euros a dólares
double eurosADolares(double euros) {
    const double tipoCambio = 1.18;
    return euros * tipoCambio;
}

// Función para convertir dólares a pesos mexicanos
double dolaresAPesosMX(double dolares) {
    const double tipoCambio = 20.05;
    return dolares * tipoCambio;
}

// Función para mostrar el menú y realizar las conversiones
void mostrarMenu() {
    int opcion;
    double cantidad;

    while (true) {
        cout << "Seleccione la opción de conversión:" <<endl;
        cout << "1. Dólares a Euros" <<endl;
        cout << "2. Euros a Dólares" <<endl;
        cout << "3. Dólares a Pesos Mexicanos" <<endl;
        cout << "4. Salir" <<endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese la cantidad en dólares: ";
                cin >> cantidad;
                cout << "La cantidad en euros es: " << dolaresAEuros(cantidad) <<endl;
                break;
            case 2:
                cout << "Ingrese la cantidad en euros: ";
                cin >> cantidad;
                cout << "La cantidad en dólares es: " << eurosADolares(cantidad) <<endl;
                break;
            case 3:
                cout << "Ingrese la cantidad en dólares: ";
                cin >> cantidad;
                cout << "La cantidad en pesos mexicanos es: " << dolaresAPesosMX(cantidad) <<endl;
                break;
            case 4:
                return;
            default:
                cout << "Opción inválida. Por favor, seleccione una opción válida." <<endl;
                break;
        }

        cout <<endl;
        cout << "Presione una tecla para continuar..." <<endl;
        
    }
}

int main() {
    mostrarMenu();

    return 0;
}