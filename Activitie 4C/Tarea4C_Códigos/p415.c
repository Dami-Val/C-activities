#include <stdio.h>

// Función para calcular el descuento en base a las unidades
float calcular_descuento(int unidades, float precio_unitario) {
    float descuento = 0.0;

    if (unidades > 12) {
        descuento = 0.10;  // 10% de descuento si excede una docena
    } else if (unidades > 6) {
        descuento = 0.04;  // 4% de descuento si excede media docena
    }

    return unidades * precio_unitario * (1 - descuento);
}

// Función para leer los valores de entrada
void leer_datos(int *unidades, float *precio_unitario) {
    printf("Hola usuario, Introduce la cantidad de unidades: ");
    scanf("%d", unidades);

    printf("Introduce el precio unitario del producto: ");
    scanf("%f", precio_unitario);
}

// Función principal
int main() {
    int unidades;
    float precio_unitario;

    // Leer datos de entrada
    leer_datos(&unidades, &precio_unitario);

    // Calcular el total con descuento
    float total = calcular_descuento(unidades, precio_unitario);

    // Mostrar el resultado
    printf("Su total a pagar con descuento aplicado es: %.2f\n", total);

    return 0;
}
