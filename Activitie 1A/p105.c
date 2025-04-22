#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846
void main()
{
float grados;
float radianes;
printf("Hola usuario, introduce la cantidad de grados de quiaras convertir a radianes:\n");
scanf("%f", &grados);

radianes = grados * (PI/180);

printf("Eso es igual a %f radianes!\n", radianes);
}
