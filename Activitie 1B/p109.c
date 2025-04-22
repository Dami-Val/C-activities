#include <stdio.h>

void main()
{
double base;
double altura;
printf("Hola usuario para sacar el área de un triángulo, primero ingresa la base: \n");
scanf("%lf", &base);
printf("Ahora porfavor ingresa la altura:\n");
scanf("%lf", &altura);
double area = base * altura / 2;
printf("Genial, el área de tu triángulo es igual a: %0.2f \n", area);
}
