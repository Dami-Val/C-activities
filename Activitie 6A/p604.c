#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	char nombre[50];
	float p1;
	float p2;
	float p3;
	float prom;
}Materia;

typedef struct{
	char noCuenta[10];
	char nombre[50];
	Materia materias[7];
}Alumno;

void capturar_datos(Alumno *alumno,char nombres_materias[][50]);
void imprimir_datos(Alumno *alumno);

int main(){
	system("clear");

	Alumno Damian_Valencia;


	char nombres_materias[7][50] = {
		"Matematicas basicas",
		"Ingles i",
		"Sistemas operativos",
		"Etica para ingenieria",
		"Introduccion a la ingenieria de software",
		"Fundamentos de redes de datos",
		"Fundamentos de programacion"
	};

	capturar_datos(&Damian_Valencia,nombres_materias);
	imprimir_datos(&Damian_Valencia);

	return 0;
}

void capturar_datos(Alumno *alumno,char nombres_materias[][50]){
	printf("Ingresa No. de cuenta del alumno:  ");
	scanf("%s",alumno->noCuenta);
	getchar();

	printf("Ingresa el nombre del alumno:  ");
	fgets(alumno->nombre,50,stdin);

	for(int i=0;i<7;i++){
		printf("\nIngresa la calificacion para la materia:  %s\n",nombres_materias[i]);
		strcpy(alumno->materias[i].nombre, nombres_materias[i]);

		printf("Parcial 1:  ");
		scanf("%f",&alumno->materias[i].p1);

		printf("Parcial 2:  ");
		scanf("%f",&alumno->materias[i].p2);

		printf("Parcial 3:  ");
		scanf("%f",&alumno->materias[i].p3);
		
		alumno->materias[i].prom=(alumno->materias[i].p1+alumno->materias[i].p2+alumno->materias[i].p3)/3;
	}
}

void imprimir_datos(Alumno *alumno){
	printf("\n\nINFORMACION DEL ALUMNO:\n");
	printf("Numero de cuenta: %s\n",alumno->noCuenta);
	printf("Nombre del alumno: %s\n\n",alumno->nombre);

	printf("MATERIA                                         |   PARCIAL 1    |    PARCIAL 2   |   PARCIAL 3   |   PROMEDIO   \n");
	printf("------------------------------------------------|----------------|----------------|---------------|--------------\n");

	for(int k=0;k<7;k++){
		printf("%-48s|%16.2f|%16.2f|%15.2f|%14.2f\n",
				alumno->materias[k].nombre,
				alumno->materias[k].p1,
				alumno->materias[k].p2,
				alumno->materias[k].p3,
				alumno->materias[k].prom);
	}
}
