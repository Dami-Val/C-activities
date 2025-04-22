#include <stdio.h>


void main()
{
float velocidad_kt;
float velocidad_ms;
printf("Hola Usuario, ingresa la cantidad de velocidad en unidad kt, que desees convertir a m/s:\n");
scanf("%f",&velocidad_kt);
velocidad_ms = velocidad_kt / 1.9438;
printf("Genial, eso es igual %0.2f m/s!\n\n", velocidad_ms);
}
