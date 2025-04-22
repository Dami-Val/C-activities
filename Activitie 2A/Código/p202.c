#include <stdio.h>

void main()
{
    float calificacion1, calificacion2, calificacion3;
    float promedio;
    
    printf("Hola usuario, ingrese la primera calificacion: ");
    scanf("%f", &calificacion1);
    printf("Ingrese la segunda calificacion: ");
    scanf("%f", &calificacion2);
    printf("Ingrese la tercera calificacion: ");
    scanf("%f", &calificacion3);

    promedio = (calificacion1 + calificacion2 + calificacion3) / 3;

    if (promedio >= 6) 
    {
        printf("Aprobado con un promedio de %.2f\n", promedio);
    }

}

