#include <stdio.h>

void imprimirarreglo(int arreglo[], int tamaño);
void llenarimpares(int arreglo[], int tamaño);

int main()
{
    int tamaño = 45;
    int impares[tamaño];

    llenarimpares(impares, tamaño);
    imprimirarreglo(impares, tamaño);

    return 0;
}

void llenarimpares(int arreglo[], int tamaño)
{
    int numero = 1;
    for (int i = 0; i < tamaño; i++)
    {
        arreglo[i] = numero;
        numero += 2;
    }
}

void imprimirarreglo(int arreglo[], int tamaño)
{
    for (int i = 0; i < tamaño; i++)
    {
        printf("%d ", arreglo[i]);
    }
    printf("\n");
}
