#include <stdio.h>

int producto(int N, int impares[]);

int main(int argc, char *argv[])
{
    int V[20], N = 0, impar = 1;
    printf("Ingresa el valor en N:");
    scanf("%d", &N);
    if (N < 1 || N > 20)
        printf("El valor N debe de ser entre 1 y 20.");
    else
    {
        for (int i = 0; i < N; i++)
        {
            V[i] = impar;
            impar += 2;
        }
        producto(N, V);
    }
    return 0;
}

int producto(int N, int impares[])
{
    int produ = 1;
    for (int j = 0; j < N; j++)
    {
        produ = produ * impares[j];
        if (j < N - 1)
            printf("%d*", impares[j]);
        else
            printf("%d", impares[j]);
    }
    printf("= %d", produ);
    return 0;
}
