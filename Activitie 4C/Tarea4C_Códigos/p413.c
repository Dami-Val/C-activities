#include <stdio.h>

// Se  muestra la función para calcular el factorial de un número
int factorial(int N) {
    int resultado = 1;
    printf("%d! = ", N);

    // Iteramos de N a 1 y multiplicamos
    for (int i = N; i > 0; i--) {
        resultado *= i;
        printf("%d", i);
        if (i > 1) {
            printf(" * ");
        }
    }

    printf(" = %d\n", resultado);  // Muestra el resultado final
    return resultado;
}

int main() {
    int numero;

    printf("Hola usuario, Introduce un número entero positivo: ");
    scanf("%d", &numero);

    // Validación de entrada positiva
    if (numero < 0) {
        printf("Error: Lo siento el número debe ser un entero positivo.\n");
    } else {
        // Llamada a la función para calcular el factorial y mostrar el resultado
        factorial(numero);
    }

    return 0;
}
