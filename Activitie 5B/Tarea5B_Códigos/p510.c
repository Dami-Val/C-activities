#include <stdio.h>

#define fila 3
#define columna 3

int sumarpositivos (int matriz[fila][columna]) {
    int suma = 0;
    for (int k = 0; k < fila; k++) {
        for (int l = 0; l < columna; l++) {
            if (matriz[k][l] > 0) {
                suma += matriz[k][l];
            }
        }
    }
    return suma;
}

int sumarnegativos (int matriz[fila][columna]) {
    int suma = 0;
    for (int k = 0; k < fila; k++) {
        for (int l = 0; l < columna; l++) {
            if (matriz[k][l] < 0) {
                suma += matriz[k][l];
            }
        }
    }
    return suma;
}

int main() {
    int matriz[fila][columna] = {
        {-22,23,32},
        {45,56,-13},
        {-25,78,89}
    };

    int sumaP = sumarpositivos(matriz);
    int sumaN = sumarnegativos(matriz);

    printf("La suma de los valores positivos es: %d\n", sumaP);
    printf("La suma de los valores negativos es: %d\n", sumaN);

    return 0;

}
























¨:c


¿
.. mca
