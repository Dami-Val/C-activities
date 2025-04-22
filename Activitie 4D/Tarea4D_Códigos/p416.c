#include <stdio.h>
#include <math.h>

// Función para calcular la distancia entre dos puntos
double calcular_distancia(double x1, double y1, double x2, double y2) {
    // Usamos la fórmula de la distancia
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;

    // Lectura de coordenadas del primer punto
    printf("Hola usuario, Introduce las coordenadas del primer punto (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);

    // Lectura de coordenadas del segundo punto
    printf("Introduce las coordenadas del segundo punto (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Calcular la distancia
    double distancia = calcular_distancia(x1, y1, x2, y2);

    // Imprimir el resultado
    printf("La distancia entre los puntos (%.2f, %.2f) y (%.2f, %.2f) es: %.2f\n", x1, y1, x2, y2, distancia);

    return 0;
}

