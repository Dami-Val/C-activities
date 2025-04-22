#include <stdio.h>
#include <string.h>

void convertirARomanos(int numero, char *romano);

int main() {
    int numero;
    char romano[20];

    printf("Ingrese un número entre 0 y 999: ");
    scanf("%d", &numero);

    if (numero < 0 || numero > 999) {
        printf("Número fuera de rango.\n");
    } else {
        convertirARomanos(numero, romano);
        printf("El número %d en números romanos es: %s\n", numero, romano);
    }

    return 0;
}

void convertirARomanos(int numero, char *romano) {
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *simbolos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    romano[0] = '\0'; // Inicializar la cadena

    for (int i = 0; i < 13; i++) {
        while (numero >= valores[i]) {
            numero -= valores[i];
            strcat(romano, simbolos[i]);
        }
    }
}