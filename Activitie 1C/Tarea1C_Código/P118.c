#include <stdio.h>
#include <math.h>

void main()
{
float x, y, z, resultado1, resultado2;

printf("Hola usuarioIngrese el valor de x: ");
scanf("%f", &x);
printf("Ingresa el valor de y: ");
scanf("%f", &y);
resultado1 = (x + 5) / (y - 2);
resultado2 = (sin(x) + cos(y)) + 2 * pow(z, 2) + pow(x, 3) - y / 7;

printf("Aquí tienes tus resultados:\nResultado 1: %.2f\n", resultado1);
printf("Resultado 2: %.2f\n", resultado2);
}

