#include <stdio.h>
#include <math.h>

int imprimir(int matriz[2][7]);                  // Declaración de funciones para imprimir matrices
int imprimir_cubo_de_matriz(int matriz[2][7]);   // y calcular el cubo de los elementos

int main() {
    int matriz_original[2][7] = {                // Declaración e inicialización de una matriz de 2x7
        {5, 8, 3, 1, 9, 2, 3},                   // Primera fila con valores iniciales
        {0, 0, 0, 0, 0, 0, 0},                   // Segunda fila inicializada en ceros
    };

    imprimir(matriz_original);                   // Imprime la matriz original
    printf("\n");                                // Salto de línea para separar las dos matrices
    imprimir_cubo_de_matriz(matriz_original);    // Calcula y muestra el cubo de los elementos

    return 0;                                    // Finaliza el programa principal
}

int imprimir(int matriz[2][7]) {                 // Función para imprimir los elementos de una matriz
    for (int i = 0; i < 2; i++) {                // Recorre las filas
        for (int j = 0; j < 7; j++) {            // Recorre las columnas
            printf("%d ", matriz[i][j]);         // Imprime cada elemento con un espacio
        }
        printf("\n");                            // Salto de línea tras imprimir una fila
    }
    return 0;                                    // Finaliza la función
}

int imprimir_cubo_de_matriz(int matriz[2][7]) {  // Calcula el cubo de la primera fila y actualiza la segunda
    for (int i = 0; i < 7; i++) {                // Recorre los elementos de las columnas
        matriz[1][i] = pow(matriz[0][i], 3);     // Calcula el cubo de cada elemento de la primera fila
    }

    imprimir(matriz);                            // Imprime la matriz modificada
    return 0;                                    // Finaliza la función
}









