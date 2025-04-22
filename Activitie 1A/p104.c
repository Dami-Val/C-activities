#include <stdio.h>
#include <math.h>

float terabyte;
float resultado;

void main()
{
printf("Hola usuario, ingresa la cantidad de terabytes que desees convertir a bits: \n");
scanf("%f", &terabyte);
resultado = pow(terabyte * 1024, 4) * 8;
printf("Genial, eso es igual a %0.f bits!\n", resultado);
}
