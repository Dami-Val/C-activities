#include <stdio.h>

// Función para determinar si un número es par
int es_par(int numero) {
    return numero % 2 == 0; // Retorna 1 si es par, 0 si es impar
}

int main() {
    int numero;

    // Pedir al usuario que ingrese un número
    printf("Hola usuario, Introduce un número entero: ");
    scanf("%d", &numero);

    // Verificar si el número es par o impar
    if (es_par(numero)) {
        printf("El número %d es par.\n", numero);
    } else {
        printf("El número %d es impar.\n", numero);
    }

    return 0;
}

