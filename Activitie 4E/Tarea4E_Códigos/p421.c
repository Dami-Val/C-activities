#include <stdio.h>

int esNumero(char c) {
    return c >= '0' && c <= '9';
}

int esLetraDelAlfabeto(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z');
}

int main() {
    char c;
    printf("Ingrese un carácter: ");
    scanf(" %c", &c);

    if (esNumero(c)) {
        printf("El carácter es un número.\n");
    }
    else if (esLetraDelAlfabeto(c)) {
        printf("El carácter es una letra del alfabeto.\n");
    }
    else {
        printf("El carácter es otro tipo de carácter.\n");
    }

    return 0;
}