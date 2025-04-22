#include <stdio.h>
#include <math.h>

void main()
{
float num1, num2;

printf("Hola, usuario si quieres realizar múltiples operaciones con dos números, ingresa el primer número: ");
scanf("%f", &num1);

printf("Ahora ingresa el segundo número: ");
scanf("%f", &num2);

printf("Genial! Aquí tienes tu resultado:\nSuma: %.2f\n", num1 + num2);
printf("Resta: %.2f\n", num1 - num2);
printf("Multiplicación: %.2f\n", num1 * num2);
printf("División: %.2f\n", num1 / num2);
printf("Potencia: %.2f\n", pow(num1, num2));
}


