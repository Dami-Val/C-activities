#include <stdio.h>

void llenarpares(int arr[], int tamaño)
{
    int numero = 2;
    for (int i = 0; i < tamaño; i++)
    {
        arr[i] = numero;
        numero += 2;
    }
}

int sumar(int tam, int A[])
{
    int i;
    int sumar = 0;
    for (i = 0; i < tam; i++)
    {
        sumar += A[i];
        printf("Sumando %d, suma actual: %d\n", A[i], sumar);
    }
    return sumar;
}

int main()
{
    int tamaño = 100;
    int P[tamaño];

    llenarpares(P, tamaño);

    printf("Contenido del arreglo P:\n");
    for (int i = 0; i < tamaño; i++)
    {
        printf("%d ", P[i]);
    }
    printf("\n");

    int resultado = sumar(tamaño, P);
    printf("La suma de los elementos del arreglo es: %d\n ", resultado);
    return 0;
}
