#include <stdio.h>

void main() 
{
    char sexo;
    float peso_kg, peso_lb, calorias;

    printf("Ingrese su sexo (M para masculino, F para femenino): ");
    scanf(" %c", &sexo);

    printf("Ingrese su peso en kilogramos: ");
    scanf("%f", &peso_kg);

    peso_lb = peso_kg * 2.2;

    if (sexo == 'F' || sexo == 'f')
    {
        calorias = 16 * peso_lb;
    }

    else if (sexo == 'M' || sexo == 'm')
    {
        calorias = 18 * peso_lb;
    } 

    else
    {
        printf("Sexo invalido.\n");
           
    }

    printf("Necesitas consumir %.2f calorias diarias.\n", calorias);

}

