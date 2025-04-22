#include <stdio.h>

// Función para convertir Celsius a Fahrenheit
double celsius_a_fahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

// Función para convertir Celsius a Kelvin
double celsius_a_kelvin(double celsius) {
    return celsius + 273.15;
}

int main() {
    double celsius;
    int opcion;

    // Pedir al usuario que ingrese una temperatura en grados Celsius
    printf("Hola usuario, Introduce la temperatura en grados Celsius: ");
    scanf("%lf", &celsius);

    // Mostrar menú de opciones
    printf("Seleccione la opción de conversión:\n");
    printf("1. Convertir a Fahrenheit\n");
    printf("2. Convertir a Kelvin\n");
    printf("Seleccione una opción (1 o 2): ");
    scanf("%d", &opcion);

    // Realizar la conversión según la opción seleccionada
    switch (opcion) {
        case 1: {
            double fahrenheit = celsius_a_fahrenheit(celsius);
            printf("%.2f grados Celsius son %.2f grados Fahrenheit.\n", celsius, fahrenheit);
            break;
        }
        case 2: {
            double kelvin = celsius_a_kelvin(celsius);
            printf("%.2f grados Celsius son %.2f Kelvin.\n", celsius, kelvin);
            break;
        }
        default:
            printf("Opción no válida. Debes seleccionar 1 o 2.\n");
            break;
    }

    return 0;
}

