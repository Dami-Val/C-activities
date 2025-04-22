#include <stdio.h>

void main()
{
float gradosfah;
float gradoscel;
printf("Hola usuario, porfavor ingresa la cantidad de grados fahrenheit que desees convertir a celsius:\n");
scanf("%f",&gradosfah);
gradoscel = (gradosfah - 32) * 5 / 9;
printf("Genial, eso es igual %0.2f grados Celsius!\n", gradoscel);

}

