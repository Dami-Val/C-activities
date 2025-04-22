#include <stdio.h>

int contarCifras(int numero);

int main() {
    int numero;
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("El número debe ser mayor que 0.\n");
    } else {
        int cifras = contarCifras(numero);
        printf("El número %d tiene %d cifras.\n", numero, cifras);
    }

    return 0;
}

int contarCifras(int numero) {
    int contador = 0;
    while (numero != 0) {
        numero /= 10;
        contador++;
    }
    return contador;
}