//create main c++ using namespace std
#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario que ingrese un n�mero
    cout << "Ingresa un numero entero: ";
    cin >> numero;

    // Verificar si el n�mero es par o impar
    if (numero % 2 == 0) {
        cout << numero << " es un numero par." << endl;
    } else {
        cout << numero << " es un numero impar." << endl;
    }

    return 0;
}

