#include <stdio.h>

int edad_años;
int edad_meses;

void main()
{
printf("Bienvenido usuario, si quieres conocer tu edad en meses inserta cuantos años tienes:\n");
scanf("%d", &edad_años);
printf("Genial, ahora ¿cuántos meses han pasado desde tu último cumpleaños?\n");scanf("%d", &edad_meses);
printf("Mmm... Entonces tu edad en meses debería de ser:  %d\n",  edad_años * 12 + edad_meses);
}
