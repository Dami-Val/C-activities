#include <stdio.h>

int imprimir(int matriz[5][3]);                  // Declaración de función para imprimir la matriz
int calcular_sumas(int matriz[5][3]);            // Declaración de función para calcular sumas de filas y columnas

// Variables globales para almacenar sumas de filas y columnas
int sumarR0 = 0, sumarR1 = 0, sumarR2 = 0, sumarR3 = 0, sumarR4 = 0;
int sumarC0 = 0, sumarC1 = 0, sumarC2 = 0;

int main() {
	int matriz_original[5][3] = {                // Declaración e inicialización de la matriz
		{2, 3, 0},                               // Primera fila
		{3, 4, 0},                               // Segunda fila
		{8, 6, 0},                               // Tercera fila
		{1, 3, 0},                               // Cuarta fila
		{0, 0, 0}                                // Quinta fila
	};

	imprimir(matriz_original);                  // Imprime la matriz original
	calcular_sumas(matriz_original);            // Calcula las sumas y actualiza la matriz
	printf("\n");                               // Salto de línea entre matrices
	imprimir(matriz_original);                  // Imprime la matriz actualizada

	return 0;                                   // Finaliza el programa principal
}

int imprimir(int matriz[5][3]) {                // Definición de la función para imprimir la matriz
	for (int i = 0; i < 5; i++) {               // Itera sobre las filas
		for (int j = 0; j < 3; j++) {           // Itera sobre las columnas
			printf("%d ", matriz[i][j]);        // Imprime cada elemento seguido de un espacio
		}
		printf("\n");                           // Salto de línea tras cada fila
	}
	return 0;                                   // Finaliza la ejecución de la función
}

int calcular_sumas(int matriz[5][3]) {          // Definición de la función para calcular las sumas
	// Calcular sumas de columnas
	for (int i = 0; i < 5; i++) {
		sumarC0 += matriz[i][0];               // Suma de la primera columna
		sumarC1 += matriz[i][1];               // Suma de la segunda columna
	}

	// Calcular sumas de filas
	for (int j = 0; j < 3; j++) {
		sumarR0 += matriz[0][j];               // Suma de la primera fila
		sumarR1 += matriz[1][j];               // Suma de la segunda fila
		sumarR2 += matriz[2][j];               // Suma de la tercera fila
		sumarR3 += matriz[3][j];               // Suma de la cuarta fila
		sumarR4 += matriz[4][j];               // Suma de la quinta fila
	}

	// Calcular suma total de la tercera columna
	sumarC2 = sumarR0 + sumarR1 + sumarR2 + sumarR3 + sumarR4;

	// Actualizar la matriz con las sumas de filas en la tercera columna
	matriz[0][2] = sumarR0;
	matriz[1][2] = sumarR1;
	matriz[2][2] = sumarR2;
	matriz[3][2] = sumarR3;
	matriz[4][2] = sumarR4;

	// Actualizar la última fila con las sumas de columnas
	matriz[4][0] = sumarC0;
	matriz[4][1] = sumarC1;
	matriz[4][2] = sumarC2;

	return 0;                                   // Finaliza la ejecución de la función
}

