#include <stdio.h>

int imprimir(int matriz[2][8]);                    // Declaración de una función para imprimir una matriz de 2x8
int imprimir_mult(int matriz[2][8]);               // Declaración de una función para calcular productos y modificar la matriz

int main() {
    int matriz_original[2][8] = {                  // Declaración e inicialización de una matriz de 2x8
        {7, 4, 1, 3, 8, 7, 4, 0},                 // Primera fila con valores iniciales
        {9, 6, 3, 7, 2, 9, 3, 0}                  // Segunda fila con valores iniciales
    };

    imprimir(matriz_original);                     // Imprime la matriz original
    printf("\n");                                  // Salto de línea para separar las dos matrices
    imprimir_mult(matriz_original);                // Calcula los productos y actualiza la última columna
    return 0;                                      // Finaliza el programa principal
}

int imprimir(int matriz[2][8]) {                   // Definición de una función para imprimir una matriz de 2x8
    for (int i = 0; i < 2; i++) {                  // Itera por las filas de la matriz
        for (int j = 0; j < 8; j++) {              // Itera por las columnas de la matriz
            printf("%d ", matriz[i][j]);           // Imprime cada elemento seguido de un espacio
        }
        printf("\n");                              // Salto de línea tras cada fila
    }
    return 0;                                      // Finaliza la ejecución de la función
}

int imprimir_mult(int matriz[2][8]) {              // Definición de una función para modificar y recalcular la última columna
    for (int i = 0; i < 8; i++) {                  // Itera por las columnas de la matriz
        matriz[0][7] = matriz[0][i] * 8;           // Calcula el producto del elemento de la primera fila por 8
        matriz[1][7] = matriz[1][i] * 8;           // Calcula el producto del elemento de la segunda fila por 8
    }

    imprimir(matriz);                              // Imprime la matriz actualizada
    return 0;                                      // Finaliza la ejecución de la función
}
