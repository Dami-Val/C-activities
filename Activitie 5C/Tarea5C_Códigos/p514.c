#include <stdio.h>  

int imprimir(int matriz[4][4]);                   // Declaración de una función para imprimir una matriz de 4x4
int imprimir_sum(int matriz[4][4]);               // Declaración de una función para calcular y mostrar las sumas de columnas

int sumarR0 = 0, sumarR1 = 0, sumarR2 = 0, sumarR3 = 0; // Variables globales para almacenar las sumas de las columnas

int main() {
    int matriz_original[4][4] = {                 // Declaración e inicialización de una matriz de 4x4
        {4, 7, 5, 3},                            // Primera fila con valores iniciales
        {6, 5, 1, 2},                            // Segunda fila con valores iniciales
        {7, 4, 8, 9},                            // Tercera fila con valores iniciales
        {0, 0, 0, 0},                            // Cuarta fila inicializada en ceros
    };

    imprimir_sum(matriz_original);               // Calcula las sumas de las columnas y actualiza la última fila

    return 0;                                    // Finaliza el programa principal
}

int imprimir(int matriz[4][4]) {                 // Definición de una función para imprimir una matriz de 4x4
    for (int i = 0; i < 4; i++) {                // Itera por las filas de la matriz
        for (int j = 0; j < 4; j++) {            // Itera por las columnas de la matriz
            printf("%d ", matriz[i][j]);         // Imprime cada elemento seguido de un espacio
        }
        printf("\n");                            // Salto de línea tras cada fila
    }
    return 0;                                    // Finaliza la ejecución de la función
}

int imprimir_sum(int matriz[4][4]) {             // Definición de una función para sumar columnas y actualizar la matriz
    for (int i = 0; i < 4; i++) {                // Itera por las filas de la matriz
        sumarR0 += matriz[i][0];                 // Suma los elementos de la primera columna
        sumarR1 += matriz[i][1];                 // Suma los elementos de la segunda columna
        sumarR2 += matriz[i][2];                 // Suma los elementos de la tercera columna
        sumarR3 += matriz[i][3];                 // Suma los elementos de la cuarta columna
    }

    matriz[3][0] = sumarR0;                      // Asigna la suma de la primera columna a la última fila
    matriz[3][1] = sumarR1;                      // Asigna la suma de la segunda columna a la última fila
    matriz[3][2] = sumarR2;                      // Asigna la suma de la tercera columna a la última fila
    matriz[3][3] = sumarR3;                      // Asigna la suma de la cuarta columna a la última fila

    imprimir(matriz);                            // Imprime la matriz actualizada
    return 0;                                    // Finaliza la ejecución de la función
}
