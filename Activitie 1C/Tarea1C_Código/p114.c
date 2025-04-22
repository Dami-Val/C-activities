#include <stdio.h>

void main()
{
char nombre[50];
float horasTrabajadas, tarifaPorHora, salarioSemanal;

printf("Hola usuario! Ingresa el nombre del empleado:\n");
scanf("%s", nombre);
printf("Ingresa el número de horas trabajadas:\n");
scanf("%f", &horasTrabajadas);
printf("Ingresa la tarifa por hora:\n");
scanf("%f", &tarifaPorHora);

salarioSemanal = horasTrabajadas * tarifaPorHora;

printf("Genial, aqui'tiene su resultado: \n El empleado %s tiene un salario semanal de: %.2f\n", nombre, salarioSemanal);
}
