#include <stdio.h>

char nombre[50], status[50];

void main () {

float cali;

printf("Hola usuario, ingresa tu nombre:\n");
scanf("%s",nombre);
printf("Bienvenido trabajador %s, ingresa por favor tu calificación:\n", nombre);
scanf("%f",&cali);

	if (cali > 95){
	char status[50] = "Excelente";
	}
	else if (cali >= 85 && cali <= 95) {
	char status[50] = "Buena";
	}
	else if (cali >= 75 && cali < 85){
	char status[50] = "Suficiente";
	}
	else {
	char status[50] = "Deficiente";
	}
	
	char status[50];
		
printf("Trabajador %s, basándonos en su calificación concluimos que su rendimiento es: %s\n", nombre, status);


}
