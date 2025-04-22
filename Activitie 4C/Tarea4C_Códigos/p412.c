#include <stdio.h>
#include <string.h>

// Definimos los tipos de cambio (simulados, ya que los reales cambian constantemente)
#define BITCOIN_A_PESOS 550000.0
#define DOLAR_A_PESOS 18.0
#define LIBRA_A_PESOS 23.0
#define YEN_A_PESOS 0.13
#define EURO_A_PESOS 20.0

// Función para convertir  diferentes monedas a pesos
float convertir_a_pesos(float cantidad, char moneda_origen[]) {
    if (cantidad <= 0) {
        printf("Error: El valor debe ser positiva.\n");
        return 0;
    }

    float cantidad_en_pesos = 0;

    // Comparamos la moneda de origen y convertimos a pesos
    if (strcmp(moneda_origen, "Bitcoin") == 0) {
        cantidad_en_pesos = cantidad * BITCOIN_A_PESOS;
    } else if (strcmp(moneda_origen, "Dolar") == 0) {
        cantidad_en_pesos = cantidad * DOLAR_A_PESOS;
    } else if (strcmp(moneda_origen, "Libra") == 0) {
        cantidad_en_pesos = cantidad * LIBRA_A_PESOS;
    } else if (strcmp(moneda_origen, "Yen") == 0) {
        cantidad_en_pesos = cantidad * YEN_A_PESOS;
    } else if (strcmp(moneda_origen, "Euro") == 0) {
        cantidad_en_pesos = cantidad * EURO_A_PESOS;
    } else {
        printf("Error: Moneda no reconocida.\n");
        return 0;
    }

    // Mostrar resultado en pantalla
#include <stdio.h>
#include <string.h>

// Definimos los tipos de cambio (simulados, ya que los reales cambian constantemente)
#define BITCOIN_A_PESOS 550000.0
#define DOLAR_A_PESOS 18.0
#define LIBRA_A_PESOS 23.0
#define YEN_A_PESOS 0.13
#define EURO_A_PESOS 20.0

// Función para convertir  diferentes monedas a pesos
float convertir_a_pesos(float cantidad, char moneda_origen[]) {
    if (cantidad <= 0) {
        printf("Error: El valor debe ser positiva.\n");
        return 0;
    }

    float cantidad_en_pesos = 0;

    // Comparamos la moneda de origen y convertimos a pesos
    if (strcmp(moneda_origen, "Bitcoin") == 0) {
        cantidad_en_pesos = cantidad * BITCOIN_A_PESOS;
    } else if (strcmp(moneda_origen, "Dolar") == 0) {
        cantidad_en_pesos = cantidad * DOLAR_A_PESOS;
    } else if (strcmp(moneda_origen, "Libra") == 0) {
        cantidad_en_pesos = cantidad * LIBRA_A_PESOS;
    } else if (strcmp(moneda_origen, "Yen") == 0) {
        cantidad_en_pesos = cantidad * YEN_A_PESOS;
    } else if (strcmp(moneda_origen, "Euro") == 0) {
        cantidad_en_pesos = cantidad * EURO_A_PESOS;
    } else {
        printf("Error: Moneda no reconocida.\n");
        return 0;
    }

    // Mostrar resultado en pantalla
    printf("Cantidad en pesos: %.2f\n", cantidad_en_pesos);
    return cantidad_en_pesos;
}

int main() {
    float cantidad;
    char moneda_origen[20];

    printf("Hola usuario, introduce la cantidad a convertir: ");
    scanf("%f", &cantidad);

    printf("Introduce la moneda de origen (Bitcoin, Dolar, Libra, Yen, Euro): ");
    scanf("%s", moneda_origen);

    // Llamamos a la función para convertir y mostrar el resultado
    convertir_a_pesos(cantidad, moneda_origen);

    return 0;
}    printf("Cantidad en pesos: %.2f\n", cantidad_en_pesos);
    return cantidad_en_pesos;
}

int main() {
    float cantidad;
    char moneda_origen[20];

    printf("Hola usuario, introduce la cantidad a convertir: ");
    scanf("%f", &cantidad);

    printf("Introduce la moneda de origen (Bitcoin, Dolar, Libra, Yen, Euro): ");
    scanf("%s", moneda_origen);

    // Llamamos a la función para convertir y mostrar el resultado
    convertir_a_pesos(cantidad, moneda_origen);

    return 0;
}
