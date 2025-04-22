#include <stdio.h>

int main(void) {
    int suma = 0;
    int n;
    int inicio;

    printf("Hola usuario, ingresa en qué número inicia la sumatoria:\n");
    scanf("%d", &inicio);
    printf("Ahora ingrese hasta qué número termina:\n");
    scanf("%d", &n);

    for (int i = inicio; i <= n; i++) {
        printf("%d", i);

        // Imprimir "+" solo si no es el último número
        if (i < n) {
            printf(" + ");
        }

        suma += i;
    }
    printf(" = %d\n", suma);
    return 0;
}

