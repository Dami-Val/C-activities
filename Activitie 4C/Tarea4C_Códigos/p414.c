#include <stdio.h>

// Función para calcular el resultado de restar el doble de un número a su cuadrado
int restar_doble_al_cuadrado(int numero) {
    int cuadrado = numero * numero;
    int doble = 2 * numero;
    return cuadrado - doble;
}

int main() {
    int numero;
    
    printf("Hola usuario, Introduce un número entero: ");
    scanf("%d", &numero);

    // Llamada a la función y muestra del resultado
    int resultado = restar_doble_al_cuadrado(numero);
    printf("El resultado de restar el doble de %d a su cuadrado es: %d\n", numero, resultado);

    return 0;
}
