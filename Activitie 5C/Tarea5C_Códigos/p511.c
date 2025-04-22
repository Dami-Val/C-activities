#include <stdio.h>

int imprimir(int matriz[3][3]);                    // Declaración de una función para imprimir una matriz de 3x3

int main() {
    int matriz_original[3][3] = {                 // Declaración e inicialización de una matriz de 3x3
        {7, 3, 9},                               // Primera fila con valores predefinidos
        {4, 0, 5},                               // Segunda fila con valores predefinidos
        {1, 8, 2}                                // Tercera fila con valores predefinidos
    };
    int matriz_copia[3][3];                      // Declaración de una matriz para almacenar la copia modificada

    imprimir(matriz_original);                   // Imprime la matriz original
    printf("\n");                                // Salto de línea para separar las dos matrices
    for (int i = 0; i < 3; i++) {                // Itera por las filas de la matriz
        for (int j = 0; j < 3; j++) {            // Itera por las columnas de la matriz
            matriz_copia[i][j] = matriz_original[i][j] * 4; // Multiplica cada elemento por 4 y lo guarda en matriz_copia
		}
    }

    imprimir(matriz_copia);                      // Imprime la matriz modificada
    return 0;                                    // Finaliza el programa principal
}

int imprimir(int matriz[3][3]) {                 // Definición de la función para imprimir una matriz de 3x3
    for (int i = 0; i < 3; i++) {                // Itera por las filas de la matriz
        for (int j = 0; j < 3; j++) {            // Itera por las columnas de la matriz
            printf("%d ", matriz[i][j]);         // Imprime cada elemento seguido de un espacio
        }
        printf("\n");                            // Salto de línea tras cada fila
    }
    return 0;                                    // Finaliza la ejecución de la función
}
