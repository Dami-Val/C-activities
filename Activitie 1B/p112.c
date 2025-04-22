#include <stdio.h>

void main()
{
double velocidad, horas, distancia;

printf("Hola usuario, para calcular la distancia recorrida en km, \n por favor ingrese la velocidad a la que iba en km/h:\n");
scanf("%lf", &velocidad);
printf("Ahora ingresa cuantas horas duró su recorrido:\n");
scanf("%lf", &horas);

distancia = velocidad * horas;

printf("Genial! Aqui tienes ru resultado: \n %0.2lf km", distancia);

}
