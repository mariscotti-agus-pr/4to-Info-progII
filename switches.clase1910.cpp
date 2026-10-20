#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float num1;
    float num2;
    float resultado;
    char operador;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el operador (#, +, -, ^, /): ";
    cin >> operador;

    if (operador != '#') {
        cout << "Ingrese el segundo numero: ";
        cin >> num2;
    }

    switch (operador) {
        case '#':
            if (num1 >= 0) {
                resultado = sqrt(num1);
                cout << "Resultado: " << resultado;
            } else {
                cout << "No se puede calcular la raiz.";
            }
            break;

        case '+':
            resultado = num1 + num2;
            cout << "Resultado: " << resultado;
            break;

        case '-':
            resultado = num1 - num2;
            cout << "Resultado: " << resultado;
            break;

        case '^':
            resultado = pow(num1, num2);
            cout << "Resultado: " << resultado;
            break;

        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "Resultado: " << resultado;
            } else {
                cout << "No se puede dividir por cero.";
            }
            break;

        default:
            cout << "Operador invalido.";
            break;
    }

    return 0;
}