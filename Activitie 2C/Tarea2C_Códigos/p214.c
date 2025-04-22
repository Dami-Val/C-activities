#include <stdio.h>


float examen1, examen2, examen3, promedio;

void main() {

printf("Hola usuario, ingresa la calificación de tu examen:\n");
scanf("%f",&examen1);
printf("Ahora del examen 2:\n");
scanf("%f",&examen2);
printf("Ahora del examen 3:\n");
scanf("%f",&examen3);

promedio = (examen1 + examen2) / 2;
printf("A continuación le mostraré su status para este tercer parcial:\n");
	if (examen3 > promedio) {
	printf("Mejorando\n");
	}
	else if (examen3 < promedio -5){
	printf("Empeorando\n");
	}
	else {
	printf("Sin_cambios\n");
	}

}
