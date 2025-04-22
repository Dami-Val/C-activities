#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int num);
void imprimirNPrimos(int n);

int main() {
    int n;
    printf("Ingresa la cantidad de números primos que deseas ver: ");
    scanf("%d", &n);
    imprimirNPrimos(n);
    return 0;
}

bool esPrimo(int num) {
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void imprimirNPrimos(int n) {
    int contador = 0, numero = 2;
    while (contador < n) {
        if (esPrimo(numero)) {
            printf("%d ", numero);
            contador++;
        }
        numero++;
    }
    printf("\n");
}
