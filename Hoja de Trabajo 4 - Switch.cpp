#include <iostream>
using namespace std;
//1. Mostrar los números del 1 al 5
//2. Mostrar los números pares del 2 al 10
//3. Ingresar un número y mostrar si es positivo o negativo
//4. Salir

//l programa debe funcionar de la siguiente manera:
//Opción 1 -- Mostrar en pantalla los números del 1 al 5.
//Opción 2 ---- Mostrar en pantalla los números pares del 2 al 10.
//Opción 3 -- --- Solicitar al usuario un número e indicar si es: -- --positivo -- -- negativo


int main() {
    int opcion;
    int numero;
    cout << "ANA GABRIELA GUZMAN LEMUS 9941-25-2074" << endl;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "Seleccione una opcion: "<< endl;
        cout << "1. Mostrar los numeros del 1 al 5" << endl;
        cout << "2. Mostrar los numeros pares del 2 al 10" << endl;
        cout << "3. Ingrese un numero del 1 al 10 para saber si positivo, negativo o 0" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Numeros del 1 al 5:" << endl;
                for (int i = 1; i <= 5; i++) {
                    cout << i << endl;
                }
                break;

            case 2:
                cout << "Numeros pares del 2 al 10:" << endl;
                for (int i = 2; i <= 10; i += 2) {
                    cout << i << endl;
                }
                break;

            case 3:
                cout << "Ingrese un numero: ";
                cin >> numero;

                if (numero > 0) {
                    cout << "El numero es positivo" << endl;
                } else if (numero < 0) {
                    cout << "El numero es negativo" << endl;
                } else {
                    cout << "El numero es cero" << endl;
                }
                break;

            case 4:
                cout << "Gracias por usar el programa. ¡Adios!" << endl;
                break;

            default:
                cout << "Opcion invalida. Intente nuevamente." << endl;
                continue; 
              
        }

    } while (opcion != 4);

    return 0;
}