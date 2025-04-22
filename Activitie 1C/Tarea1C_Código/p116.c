#include <stdio.h>
#include <math.h>

void main() 
{
float anguloGrados, anguloRadianes;

printf("Hola usuario, ingresa el ángulo en grados sexagesimales: ");
scanf("%f", &anguloGrados);

anguloRadianes = anguloGrados * M_PI / 180.0;

printf("Genial! Aquí tienes tu resultado:\nSeno: %.2f\n", sin(anguloRadianes));
printf("Coseno: %.2f\n", cos(anguloRadianes));
printf("Tangente: %.2f\n", tan(anguloRadianes));
}

