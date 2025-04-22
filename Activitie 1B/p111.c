#include <stdio.h>
#include <math.h>

void main()
{
double cadep, tasa, cp, monto, interes;

printf("Hola usuario, esta es una calculadora de el interes generado por un capital depositado durante un numero de periodos a una tasa dada.\n Por favor primero ingresa el capital depositado:\n");
scanf("%lf", &cadep);
printf("Ahora ingresa el porcentaje de la tasa de interes, sin el signo:\n");
scanf("%lf", &tasa);
printf("Ahora ingresa la cantidad de periodos:\n");
scanf("%lf", &cp);

monto = cadep * pow((1 + tasa / 100), cp);
interes = monto - cadep;

printf("Genial! Aqui tienes tus resultados:\n Monto total: %0.2lf \n Interés generado %0.2lf \n", monto, interes);
}
