#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main () {
    srand (time(0));
char espacio_codigo [26]{'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int generar_otrocod;
char codigos_generados[100][8];
int cantidad_codigos = 0;
   do {

    bool repetida = false;
    char codigo[8];
    bool codigo_repetido = false;

    do {
            codigo_repetido = false;
            repetida = false;
        for (int i = 0; i < 8; i++) {
            codigo[i] = espacio_codigo[rand() % 26];
        }

        for (int i = 0; i < 8; i++) {
            for (int j = i + 1; j < 8; j++) {
                if (codigo[i] == codigo[j]) {
                    repetida = true;
                }
            }
        }
        for (int i = 0; i < cantidad_codigos; i++) {
    bool iguales = true;
    for (int j = 0; j < 8; j++) {
        if (codigo[j] != codigos_generados[i][j]) {
            iguales = false;
        }
    }

    if (iguales == true) {
        codigo_repetido = true;
    }
}
    } while (repetida == false || codigo_repetido == true);

    for (int i = 0; i < 8; i++) {
    codigos_generados[cantidad_codigos][i] = codigo[i];
}
cantidad_codigos++;

    for (int i = 0; i < 8; i++) {
    cout << codigo[i];
}
cout << endl;
cout << "desea generar otro codigo? (numero impar = no, numero par = si)" << endl;
cin >> generar_otrocod;
} while (generar_otrocod % 2 == 0);
return 0;
}
