#include <stdio.h>

void main() 
{
int totalMinutos, meses, semanas, dias, horas, minutos;

printf("Hola usuario, ingresa el número total de minutos: ");
scanf("%d", &totalMinutos);

meses = totalMinutos / (30 * 24 * 60);
totalMinutos %= (30 * 24 * 60);
semanas = totalMinutos / (7 * 24 * 60);
totalMinutos %= (7 * 24 * 60);
dias = totalMinutos / (24 * 60);
totalMinutos %= (24 * 60);
horas = totalMinutos / 60;
minutos = totalMinutos % 60;

printf("Genial! Aquí tienes tu resultado:\n %d meses %d semanas %d días %d horas %d minutos\n", meses, semanas, dias, horas, minutos);
}

