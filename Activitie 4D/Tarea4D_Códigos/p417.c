#include <stdio.h>

// Función para obtener el número de días en un mes
int obtener_dias_mes(int mes) {
    // Verificamos el mes y devolvemos el número de días
    switch (mes) {
        case 1:  // Enero
        case 3:  // Marzo
        case 5:  // Mayo
        case 7:  // Julio
        case 8:  // Agosto
        case 10: // Octubre
        case 12: // Diciembre
            return 31;
        case 4:  // Abril
        case 6:  // Junio
        case 9:  // Septiembre
        case 11: // Noviembre
            return 30;
        case 2:  // Febrero
            return 28; // Ignorando años bisiestos para simplificación
        default: // Mes no válido
            return 0;
    }
}

int main() {
    int mes;

    // Solicitar al usuario que ingrese un número de mes
    printf("Hola usuario, Introduce un número del 1 al 12 para obtener el número de días: ");
    scanf("%d", &mes);

    // Obtener el número de días correspondiente al mes
    int dias = obtener_dias_mes(mes);

    // Mostrar el resultado
    if (dias == 0) {
        printf("Mes no válido. Debes ingresar un número entre 1 y 12.\n");
    } else {
        printf("El mes %d tiene %d días.\n", mes, dias);
    }

    return 0;
}

