#include <stdio.h> 

 void main()
{
double  materia1, materia2, materia3, promedio;
printf("Hola usuario, para calcular tu promedio ingresa la calificación de tus 3 materias, \n Primero ingresa la calificación de la materia 1:\n");
scanf("%lf", &materia1);
printf("Ahora ingresa la calificación 2:\n");
scanf("%lf", &materia2);
printf("Ahora ingresa la calificación 3:\n");
scanf("%lf", &materia3);

promedio = (materia1 + materia2 + materia3) / 3;

printf("Genial! Aqui tienes tu resultado:\n Tu promedio es %.2lf",promedio);

}


