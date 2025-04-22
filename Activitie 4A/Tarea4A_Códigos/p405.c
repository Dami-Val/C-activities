#include <stdio.h>

// Funciones para realizar los cálculos
float sumar(float a, float b) {
    return a + b;
}

float restar(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: División por cero.\n");
        return 0;
    }
}

// Procedimiento para mostrar el menú
void mostrarMenu() {
    printf("Hola usuario, elige una opción:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    printf("0. Salir\n");
}

int main() {
    int opcion;
    float num1, num2, resultado;

    do {
        mostrarMenu();
        printf("Introduce una opción: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 4) {
            printf("Introduce el primer número: ");
            scanf("%f", &num1);
            printf("Introduce el segundo número: ");
            scanf("%f", &num2);
        }

        switch (opcion) {
            case 1:
                resultado = sumar(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = restar(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = multiplicar(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                resultado = dividir(num1, num2);
                printf("Resultado: %.2f\n", resultado);
                break;
            case 0:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Por favor, intenta de nuevo.\n");
        }
    } while (opcion != 0);

    return 0;
}

