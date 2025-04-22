#include <stdio.h>

void leer3valores(float *a, float *b, float *c);
float promedio3(float a, float b, float c);

int main()
{
    float x, y, z, resultado;
    leer3valores(&x, &y, &z);
    resultado = promedio3(x, y, z);
    printf("El promedio de los tres valores es: %.2f\n", resultado);
    return 0;
}

void leer3valores(float *a, float *b, float *c)
{
    printf("Hola usuario, ingresa el primer valor: ");
    scanf("%f", a);
    printf("Ingresa el segundo valor: ");
    scanf("%f", b);
    printf("Ingresa el tercer valor: ");
    scanf("%f", c);
}

float promedio3(float a, float b, float c)
{
    return (a + b + c) / 3.0;
}
