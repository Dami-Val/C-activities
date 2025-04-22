#include <stdio.h>

int main()
{
    float A[7], B[7];
    int i;

    for (i = 0; i < 7; i++)
    {
        printf("Introduce el numero %d: ", i + 1);
        scanf("%f", &A[i]);
    }

    for (i = 0; i < 7; i++)
    {
        B[i] = A[i] * 2.75;
    }

    printf("Arreglo B inverso:\n");
    for (i = 6; i >= 0; i--)
    {
        printf("%.2f ", B[i]);
    }
    printf("\n");
    return 0;
}
