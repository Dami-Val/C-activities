#include <stdio.h>

int main() 
{
    int dinero, dado1, dado2, dados;

    printf("Hola usuario, ingrese la cantidad de dinero con la que empieza: ");
    scanf("%d", &dinero);

    for (int i = 0; i < 3; i++) 
    {
        printf("Ingrese el valor del dado 1 (entre 1 y 6): ");
        scanf("%d", &dado1);
        printf("Ingrese el valor del dado 2 (entre 1 y 6): ");
        scanf("%d", &dado2);

        dados = dado1 + dado2;

        if (dados <= 7) 
        {
            printf("Usted pierde $5\n");
            dinero -= 5; 
            printf("Usted gana $5\n");
            dinero += 5;         
        }

    }

    printf("Usted termina con $%d\n", dinero);

}

