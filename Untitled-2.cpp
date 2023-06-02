#include <iostream>

using namespace std;

int main() {
    int opcion;

    do {
        cout << "MENU" << endl;
        cout << "1. Imprimir Hola Mundo" << endl;
        cout << "2. Realizar una suma" << endl;
        cout << "3. Mostrar la tabla de multiplicar de un numero" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Hola Mundo" << endl;
                break;
            case 2:
                int numero1, numero2;
                cout << "Ingrese el primer numero: ";
                cin >> numero1;
                cout << "Ingrese el segundo numero: ";
                cin >> numero2;
                cout << "La suma de los numeros es: " << numero1 + numero2 << endl;
                break;
            case 3:
                int numero, resultado;
                cout << "Ingrese el numero para la tabla de multiplicar: ";
                cin >> numero;
                for (int i = 1; i <= 10; i++) {
                    resultado = numero * i;
                    cout << numero << " x " << i << " = " << resultado << endl;
                }
                break;
            case 4:
                cout << "Fin del programa" << endl;
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
        }

        cout << endl;  // Espacio en blanco para mayor claridad
    } while (opcion != 4);

    return 0;
}