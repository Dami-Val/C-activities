#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

double calcularAreaCirculo(double radio);

int main() {
    double radio;
    printf("Ingrese el radio del círculo: ");
    scanf("%lf", &radio);

    double area = calcularAreaCirculo(radio);
    printf("El área del círculo con radio %.2lf es: %.2lf\n", radio, area);

    return 0;
}

double calcularAreaCirculo(double radio) {
    return M_PI * radio * radio;
}