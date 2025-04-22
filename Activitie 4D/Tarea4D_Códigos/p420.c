#include <stdio.h>

// Prototipos de funciones
void leer_numeros(int *a, int *b, int *c);
void mostrar_ascendente(int a, int b, int c);
void mostrar_descendente(int a, int b, int c);
void ordenar(int *a, int *b, int *c);

int main() {
    int num1, num2, num3;

    // Leer los números
    leer_numeros(&num1, &num2, &num3);

    // Ordenar los números
    ordenar(&num1, &num2, &num3);

    // Mostrar los números en orden ascendente
    printf("Números en orden ascendente: ");
    mostrar_ascendente(num1, num2, num3);

    // Mostrar los números en orden descendente
    printf("Números en orden descendente: ");
    mostrar_descendente(num1, num2, num3);

    return 0;
}

// Función para leer tres números
void leer_numeros(int *a, int *b, int *c) {
    printf("Hola usuario, Introduce tres números:\n");
    printf("Número 1: ");
    scanf("%d", a);
    printf("Número 2: ");
    scanf("%d", b);
    printf("Número 3: ");
    scanf("%d", c);
}

// Función para mostrar los números en orden ascendente
void mostrar_ascendente(int a, int b, int c) {
    printf("%d, %d, %d\n", a, b, c);
}

// Función para mostrar los números en orden descendente
void mostrar_descendente(int a, int b, int c) {
    printf("%d, %d, %d\n", c, b, a);
}

// Función para ordenar los números
void ordenar(int *a, int *b, int *c) {
    int temp;
    // Ordenación simple usando comparación
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}

